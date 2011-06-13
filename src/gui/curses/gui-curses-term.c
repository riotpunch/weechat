/*
 * Copyright (C) 2011 Sebastien Helleu <flashcode@flashtux.org>
 *
 * This file is part of WeeChat, the extensible chat client.
 *
 * WeeChat is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * WeeChat is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with WeeChat.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * gui-curses-term.c: terminal functions for Curses GUI
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <term.h>


/*
 * gui_term_set_eat_newline_glitch: set "eat_newline_glitch" variable
 *                                  With value 0, this is used to not auto
 *                                  insert newline char at end of lines
 *                                  displayed, so that long words like URLs are
 *                                  not cut when they are selected with mouse
 */

void
gui_term_set_eat_newline_glitch (int value)
{
#ifdef HAVE_EAT_NEWLINE_GLITCH
    eat_newline_glitch = value;
#else
    /* make C compiler happy */
    (void) value;
#endif
}