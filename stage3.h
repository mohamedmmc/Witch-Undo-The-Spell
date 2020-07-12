#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h> 
#include <SDL/SDL_ttf.h>
#include <string.h>
void stage3(SDL_Surface *ecran,int *continuer,Mix_Music *intro,Mix_Chunk *effet,Mix_Chunk *effet2,Mix_Music *musique,int *mute,SDL_Rect *posvolb,Mix_Chunk *sonspell,Mix_Chunk *dying,Mix_Chunk *hit,int *victory);
void stage3s(SDL_Surface *ecran,int *continuer,Mix_Music *intro,Mix_Chunk *effet,Mix_Chunk *effet2,Mix_Music *musique,int *mute,SDL_Rect *posvolb,Mix_Chunk *sonspell,Mix_Chunk *dying,Mix_Chunk *hit,int *victory);
void stagefinale(SDL_Surface *ecran,int *continuer,Mix_Chunk *dying,Mix_Music *intro,Mix_Chunk *effet,Mix_Chunk *effet2,Mix_Music *musique,int *mute,SDL_Rect *posvolb,Mix_Chunk *sonspell,int *hp,int *cmpsc,int *victory);
