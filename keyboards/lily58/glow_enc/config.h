/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2017 F_YUUCHI
Copyright 2020 Ben Roesner (keycapsss.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }

#define SOFT_SERIAL_PIN D2

#define RGB_DI_PIN F4

#define RGBLED_NUM 72    // Number of LEDs

#define RGBLED_SPLIT { 36, 36 }
#define RGBLIGHT_SPLIT
#define RGBLIGHT_LIMIT_VAL 120

#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { D4 }
#define ENCODERS_PAD_A_RIGHT { D4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
