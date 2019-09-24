#define C_1 19111   // 65.406 Hz			
#define DF_1 18039   // 69.296 Hz			
#define D_1 17026   // 73.416 Hz			
#define EF_1 16071   // 77.782 Hz			
#define E_1 15169   // 82.407 Hz			
#define F_1 14317   // 87.307 Hz			
#define GF_1 13514   // 92.499 Hz			
#define G_1 12755   // 97.999 Hz			
#define AF0 12039   // 103.826 Hz			
#define A0 11364   // 110.000 Hz			
#define BF0 10726   // 116.541 Hz			
#define B0 10124   // 123.471 Hz			
#define C0 9556   // 130.813 Hz			
#define DF0 9019   // 138.591 Hz			
#define D0 8513   // 146.832 Hz			
#define EF0 8035   // 155.563 Hz			
#define E0 7584   // 164.814 Hz			
#define F0 7159   // 174.614 Hz			
#define GF0 6757   // 184.997 Hz			
#define G0 6378   // 195.998 Hz			
#define AF 6020   // 207.652 Hz			
#define A 5682   // 220.000 Hz			
#define BF 5363   // 233.082 Hz			
#define B 5062   // 246.942 Hz			
#define C 4778   // 261.626 Hz			
#define DF 4510   // 277.183 Hz			
#define D 4257   // 293.665 Hz			
#define EF 4018   // 311.127 Hz			
#define E 3792   // 329.628 Hz			
#define F 3579   // 349.228 Hz			
#define GF 3378   // 369.994 Hz			
#define G 3189   // 391.995 Hz			
#define AF1 3010   // 415.305 Hz			
#define A1 2841   // 440.000 Hz			
#define BF1 2681   // 466.164 Hz			
#define B1 2531   // 493.883 Hz			
#define C1 2389   // 523.251 Hz			
#define DF1 2255   // 554.365 Hz			
#define D1 2128   // 587.330 Hz			
#define EF1 2009   // 622.254 Hz			
#define E1 1896   // 659.255 Hz			
#define F1 1790   // 698.456 Hz			
#define GF1 1689   // 739.989 Hz			
#define G1 1594   // 783.991 Hz			
#define AF2 1505   // 830.609 Hz			
#define A2 1420   // 880.000 Hz			
#define BF2 1341   // 932.328 Hz			
#define B2 1265   // 987.767 Hz			
#define C2 1194   // 1046.502 Hz			
#define DF2 1127   // 1108.731 Hz			
#define D2 1064   // 1174.659 Hz			
#define EF2 1004   // 1244.508 Hz			
#define E2 948   // 1318.510 Hz			
#define F2 895   // 1396.913 Hz			
#define GF2 845   // 1479.978 Hz			
#define G2 797   // 1567.982 Hz			
#define AF3 752   // 1661.219 Hz			
#define A3 710   // 1760.000 Hz			
#define BF3 670   // 1864.655 Hz			
#define B3 633   // 1975.533 Hz			
#define C3 558
#define D3 532
#define E3 474
#define NIL 0





float melody[] = {
E2, 10, E2, 10, NIL, 10, E2, 10, 
NIL, 10, C2, 10, E2, 10, NIL, 10,
G2, 10, NIL, 30, 
G1, 10, NIL, 30,
	
C2, 10, NIL, 20, G1, 10, 
NIL, 20 , E1, 10, NIL, 10,
NIL, 10, A2, 10, NIL, 10, B2, 10, 
NIL, 10, BF2, 10, A2, 10, NIL, 10,

G1, 13.33, E2, 13.33, G2, 13.33, 
A3, 10,	NIL, 10, F2, 10, G2, 10, 
NIL, 10, E2, 10, NIL, 10, C2, 10,
D2, 10, B1, 10, NIL, 20,

C2, 10, NIL, 20, G1, 10, 
NIL,20 , E1, 10, NIL, 10,
NIL, 10, A2, 10, NIL, 10, B2, 10, 
NIL, 10, BF2, 10, A2, 10, NIL, 10,

G1, 13.33, E2, 13.33, G2, 13.33, 
A3, 10,	NIL, 10, F2, 10, G2, 10, 
NIL, 10, E2, 10, NIL, 10, C2, 10,
D2, 10, B1, 10, NIL, 20,

NIL, 20, G2, 10, GF2, 10,
F2, 10, EF2, 10, NIL, 10, E2, 10,
NIL, 10, AF2, 10, A2, 10, C2, 10,
NIL, 10, A2, 10, C2, 10, D2, 10,

NIL, 20, G2, 10, GF2, 10,
F2, 10, EF2, 10, NIL, 10, E2, 10,
NIL, 10, A3, 10, NIL, 10, A3, 10, A3, 10, 

NIL, 20, G2, 10, GF2, 10,
F2, 10, EF2, 10, NIL, 10, E2, 10,
NIL, 10, AF2, 10, A2, 10, C2, 10,
NIL, 10, A2, 10, C2, 10, D2, 10,

NIL, 20, EF2, 20, NIL, 20, D2, 20,NIL, 10, C2,40,
-1,0};

float spring[]={
NIL, 30, C1, 10,
E1, 10, E1, 10, E1, 10, D1, 5, C1, 5,
G1, 20, C0, 10, C0, 10, G1, 5, E1,5,
	
E1, 10, E1, 10, E1, 10, D1, 5, C1, 5,
G1, 20, C0, 10, C0, 10, G1, 5, E1,5,
E1, 10, F1, 5, G1, 5, F1, 10, E1, 10,
	
D1, 10, B1, 10, G0, 10, C1, 10,
E1, 10, E1, 10, E1, 10, D1, 5, C1, 5,
G1, 20, C0, 10, C0, 10, G1, 5, E1,5,
	
E1, 10, E1, 10, E1, 10, D1, 5, C1, 5,
G1, 20, C0, 10, C0, 10, G1, 5, E1,5,
E1, 10, F1, 5, G1, 5, F1, 10, E1, 10,
	
D1, 10, B1, 10, G1, 10, E1, 10,
G1, 10, F1, 5, E1, 5, F1, 10, G1, 10,
A2, 10, G1, 20, E1, 10,
G1, 10, F1, 5, E1, 5, F1, 10, G1, 10,

A1, 10, G1, 20, F1, 10,
E1, 10, D1, 5, C1, 5, D1, 10,
C1, 20, NIL, 10, E1, 10,

G1, 10, F1, 5, E1, 5, F1, 10, G1, 10,
A1, 10, G1, 20, E1, 10, 
G1, 10, F1, 5, E1, 5, F1, 10, G1, 10,

A1, 10, G1, 20, E1, 10,
A1, 10, G1, 20, F1, 10,
F1, 10, D1, 5, C1, 5, D1, 20,
C1, 30, NIL, 10,

-1,0};


float fur_elise[] = {
NIL, 20, E2, 10, EF2, 10,
E2, 10, EF2, 10, E2, 10, B1, 10, D1, 10, C2, 10, 
A2, 10, E0, 10, A1, 10, C1, 10, E1, 10, A2, 10,
B2, 10, E0, 10, AF1, 10, E1, 10, AF2, 10, B2, 10,
A2, 10, E0, 10, A1, 10, E1, 10, E2, 10, EF2, 10,

E2, 10, EF2, 10, E2, 10, B1, 10, D1, 10, C2, 10, 
A2, 10, E0, 10, A1, 10, C1, 10, E1, 10, A2, 10,
B2, 10, E0, 10, AF1, 10, E1, 10, AF2, 10, B2, 10,
A2, 10, E0, 10, A1, 10, D1, 10, E2, 10, B2, 10,
A2, 10, E0, 10, AF1, 10, NIL, 10, E2, 10, EF2, 10,

E2, 10, EF2, 10, E2, 10, B1, 10, D1, 10, C2, 10, 
A2, 10, E0, 10, A1, 10, C1, 10, E1, 10, A2, 10,
B2, 10, E0, 10, AF1, 10, E1, 10, AF2, 10, B2, 10,
A2, 10, E0, 10, A1, 10, E1, 10, E2, 10, EF2, 10,

E2, 10, EF2, 10, E2, 10, B1, 10, D1, 10, C2, 10, 
A2, 10, E0, 10, A1, 10, C1, 10, E1, 10, A2, 10,
B2, 10, E0, 10, AF1, 10, E1, 10, AF2, 10, B2, 10,
A2, 10, E0, 10, A1, 10, D1, 10, E2, 10, B2, 10,
A2, 10, E0, 10, AF1, 10, NIL, 10, E2, 10, EF2, 10,

-1,0};