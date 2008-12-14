#ifndef _mainwin_h_
#define _mainwin_h_

#include "window.h"


class mainwin : public window
{
public:
	mainwin() {};
	mainwin(window *p);
	virtual bool draw();
	virtual eventresult event_handler(window* target, void* result, SDL_Event* event);
// 	int align_buttons(int pos_y);
	virtual void layout();

protected:
	int border_left, border_right, border_top, border_bottom;
	int get_frameheight();
};


#endif
