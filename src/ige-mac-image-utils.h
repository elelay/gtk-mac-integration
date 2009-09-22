/*
 * Copyright (C) 2007 Imendio AB
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; version 2.1
 * of the License.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __IGE_MAC_IMAGE_UTILS_H__
#define __IGE_MAC_IMAGE_UTILS_H__

#include <gdk-pixbuf/gdk-pixbuf.h>
#include <ApplicationServices/ApplicationServices.h> /* <CoreGraphics/CGImage.h> */

G_BEGIN_DECLS

CGImageRef ige_mac_image_from_pixbuf (GdkPixbuf *pixbuf);

G_END_DECLS

#endif /* __IGE_MAC_IMAGE_UTILS_H__ */
