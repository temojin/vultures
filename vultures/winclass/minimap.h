#ifndef _minimap_h_
#define _minimap_h_

#include "window.h"
#include "SDL.h"

#include "levelwin.h"

#define V_FILENAME_MINIMAPBG            "minimapbg"


/*
 * colors used to draw the mini-map
 */
#define V_COLOR_MINI_CORRIDOR CLR32_PURPLE44
#define V_COLOR_MINI_STAIRS   CLR32_LIGHTPINK
#define V_COLOR_MINI_DOOR     CLR32_BROWN
#define V_COLOR_MINI_FLOOR    CLR32_PURPLE44
#define V_COLOR_MINI_YOU      CLR32_WHITE


/* minimap tile types */
enum {
	V_MMTILE_NONE,
	V_MMTILE_FLOOR,
	V_MMTILE_STAIRS,
	V_MMTILE_DOOR,
	V_MMTILE_YOU,
	V_MMTILE_PET,
	V_MMTILE_MONSTER,
	V_MMTILE_MAX
};



class minimap : public window
{
public:
	minimap(levelwin *p, int parentw);
	~minimap();
	virtual bool draw();
	virtual eventresult event_handler(window* target, void* result, SDL_Event* event);
	
private:
	SDL_Surface *minimapbg;
	char vultures_minimap_syms[ROWNO][COLNO];
	levelwin *level;
};


#endif
