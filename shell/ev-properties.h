/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8; c-indent-level: 8 -*- */
/* this file is part of evince, a gnome document viewer
 *
 *  Copyright (C) 2005 Red Hat, Inc
 *
 * Evince is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Evince is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __EV_PROPERTIES_H__
#define __EV_PROPERTIES_H__

#include "ev-document.h"
#include "ev-document-security.h"
#include "ev-window.h"

#include <time.h>
#include <sys/time.h>
#include <gtk/gtkdialog.h>
#include <gtk/gtkwidget.h>
#include <gtk/gtkwindow.h>

G_BEGIN_DECLS

typedef struct _EvProperties	    EvProperties;

struct _EvProperties {
	GtkDialog		parent;
};

GtkDialog *ev_properties_new	    (EvDocument *document,
									 GtkWidget	*toplevel);
		
gchar *ev_properties_format_date 	(GTime utime);

size_t my_strftime 					(char  *s, size_t max, 
			 						 const char *fmt, 
									 const struct tm *tm);

G_END_DECLS

#endif /* __EV_PROPERTIES_H__ */
