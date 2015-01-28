/* AUTORIGHTS
Copyright (C) 2006-2012  Ilker R. Capoglu

    This file is part of the Angora package.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef READ_SHAPES_H
#define READ_SHAPES_H

//use the libconfig library
#include "config/cfg_utils.h"

//only the declaration of Cshapes needed: use forward declaration
class Cshapes;

void read_shapes(Cshapes &Shapes, const Config& fdtdconfig, const Config& validsettings);		//modifies the Shapes object

#endif // READ_SHAPES_H
