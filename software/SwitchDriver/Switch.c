//Switch.c
#include <stdint.h>

#include "Switch.h"
#include "inc/tm4c123gh6pm.h"
#include "Music.h"


int switchbool=0;
int mute=0;



void Switch_Init(){
	SYSCTL_RCGCGPIO_R |= 0x00000002; // (a) activate clock for port F
	int add=0;
	add++;
	add++;
  GPIO_PORTB_DIR_R &= ~0x0F;    // (c) make PF4 in (built-in button)
	GPIO_PORTB_DIR_R |= ~0x10;    // (c) make PF4 in (built-in button)
  GPIO_PORTB_AFSEL_R &= ~0x1F;  //     disable alt funct on PF4
  GPIO_PORTB_DEN_R |= 0x1F;     //     enable digital I/O on PF4   
  GPIO_PORTB_PCTL_R &= ~0x000F0000; // configure PF4 as GPIO
  GPIO_PORTB_AMSEL_R = 0;       //     disable analog functionality on PF
  //GPIO_PORTB_PUR_R |= 0x10;     //     enable weak pull-up on PF4
  GPIO_PORTB_IS_R &= ~0x0F;     // (d) PF4 is edge-sensitive
  GPIO_PORTB_IBE_R &= ~0x0F;    //     PF4 is not both edges
  GPIO_PORTB_IEV_R |= 0x0F;    //     PF4 rising edge event
  GPIO_PORTB_ICR_R = 0x0F;      // (e) clear flag4
  GPIO_PORTB_IM_R |= 0x0F;      // (f) arm interrupt on PF4 *** No IME bit as mentioned in Book ***
  NVIC_PRI0_R = (NVIC_PRI0_R&0xFFFFFFFF)|0x0000A000; // (g) priority 5
  NVIC_EN0_R = 0x00000002;      // (h) enable interrupt 30 in NVIC
  //EnableInterrupts();           // (i) Clears the I bit
}
char curState=1; //Interrupts enabled
void GPIOPortB_Handler(){
	
	GPIO_PORTB_ICR_R = 0x0F;
	if((GPIO_PORTB_DATA_R & 0x0000000F)==0x01 && switchbool == 0){
			musicForward();
	}
	if((GPIO_PORTB_DATA_R & 0x0000000F) == 0x02 && switchbool == 0){
		if(getStatus()){   //if music is playing right now
				musicPause();
			}
			else{
				musicPlay();
			}
	}
	if((GPIO_PORTB_DATA_R&0x0000000F)==0x04 && switchbool == 0){
		setResetState();
	}

}

void ResetBool(){
	switchbool = 0;
}