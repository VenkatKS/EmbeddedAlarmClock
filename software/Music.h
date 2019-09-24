#include <stdint.h>
#include "..//inc//tm4c123gh6pm.h"
extern struct MusicFile;




void MusicInit();
void musicPause();
void musicRewind();
void musicStop();
void musicPlay();
void musicForward();
char getSentinel();
void playSong(struct MusicFile* songName);
int getStatus();
void activeSongChanged();
void musicForward();
void setResetState();