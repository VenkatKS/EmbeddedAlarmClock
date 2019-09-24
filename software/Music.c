#include "Music.h"
#include "DAC.h"
#include <stdint.h>
#include "Timer0A.h"
#include "PLL.h"
#include "..//inc//tm4c123gh6pm.h"
#include "musicWave.h"
#include "Systick.h"
#include "Timer2.h"
#include "MusicStructures.h"


uint16_t indexpoint=0;   //the pointer for the sine wave

uint16_t playStatus=1; //1=play the song, 0=song is paused.

int speedCounter;

#define VOLUME_IN 1  //1 is highest, and 16 is lowest.


int scaler(float delay){   //function that returns the bus cycles required to delay for as much.
	return delay*speedCounter;
}
void musicInterruptHandler(){    //iterates through the sine wave
	GPIO_PORTB_DATA_R^=0x10;
	indexpoint++; 
	indexpoint%=64;
	DAC_Out(testInstrument11[indexpoint]/VOLUME_IN);   //output the sine wave
	GPIO_PORTB_DATA_R^=0x10;

}

void Music_Note(int frequency){
	indexpoint=0;
	Timer0A_Init(&musicInterruptHandler, frequency);
	DAC_Init(testInstrument11[indexpoint]);

}

int getStatus(){
	return playStatus;
}
char hitOnce=0;
void musicForward(){
	if(hitOnce){
		speedCounter*=2;
		hitOnce=0;
		return;
	}
	speedCounter/=2;
	hitOnce=1;
	return;
}
void musicPause(){
	Timer0_Disable();
	playStatus=0;
}

void musicRewind(){

}

void musicStop(){
	
}

void musicPlay(){
	Timer0_Enable();
	playStatus=1;
}


void Play_Blank(int duration){
	while(duration>0){
		duration--;
	}
}
void initalizeTempo(int tempo){
	speedCounter=tempo;
}
char interrupt=1;
int insideIndex=0;
void setResetState(){
	insideIndex=0;
}
void activeSongChanged(){
		interrupt=0;
		setResetState();
}

void playSong(struct MusicFile *songName){   //the song has to be null terminated 
	
	struct MusicFile activeMusic = *songName;
	initalizeTempo(activeMusic.tempo);
	while(*(activeMusic.musicData+insideIndex)!=activeMusic.terminator && interrupt){
				while(!playStatus){}
				Music_Note(*(activeMusic.musicData+insideIndex));
				Play_Blank(scaler(*(activeMusic.musicData+insideIndex+1)));
				insideIndex+=2;
	}
	interrupt=1;
	playStatus=1;
	return;
	
	
	
}



