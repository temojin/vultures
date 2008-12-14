#ifndef _optionwin_h_
#define _optionwin_h_

#include "window.h"


class menuitem;


class optionwin : public window
{
public:
	optionwin() {};
	optionwin(window *p, menuitem* mi, const char *cap,
	          char accel, int glyph, bool selected, bool is_checkbox);
	virtual bool draw();
	virtual eventresult event_handler(window* target, void* result, SDL_Event* event);
	
	int glyph;
	menuitem *item;
	bool is_checkbox; // otherwise it's an option
};


#endif
