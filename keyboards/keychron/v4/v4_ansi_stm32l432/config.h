/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* key matrix pins */
#define MATRIX_ROW_PINS { B5, B4, B3, A15, A14, A13 }
#define MATRIX_COL_PINS { A5, A6, A7, B0 }

/* RGB Matrix Driver Configuration */
#define DRIVER_COUNT 1
#define DRIVER_ADDR_1 0b1110100

/* RGB Matrix Configuration */
#define DRIVER_1_LED_TOTAL 61
#define RGB_MATRIX_LED_COUNT DRIVER_1_LED_TOTAL

<<<<<<< HEAD:keyboards/keychron/v4/v4_ansi_stm32l432/config.h
/* Enable CapsLcok LED*/
#define CAPS_LOCK_LED_INDEX 28
=======
#define RGB_MATRIX_CENTER { 56, 16 }

/* Enable num-lock LED */
#define NUM_LOCK_LED_INDEX 4
>>>>>>> temp:keyboards/keychron/q0/rev_0130/config.h
