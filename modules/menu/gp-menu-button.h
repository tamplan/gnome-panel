/*
 * Copyright (C) 2018 Alberts Muktupāvels
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GP_MENU_BUTTON_H
#define GP_MENU_BUTTON_H

#include <gtk/gtk.h>

G_BEGIN_DECLS

#define GP_TYPE_MENU_BUTTON (gp_menu_button_get_type ())
G_DECLARE_FINAL_TYPE (GpMenuButton, gp_menu_button, GP, MENU_BUTTON, GtkButton)

GtkWidget *gp_menu_button_new (void);

G_END_DECLS

#endif
