/*
Copyright 2020 Jason Chestnut <jason.chestnut@gmail.com>

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

#include QMK_KEYBOARD_H
#include "shurikai.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT_microdox_wrapper(
  _________________BASE_L1___________________,         _________________BASE_R1___________________,
  _________________BASE_L2___________________,         _________________BASE_R2___________________,
  _________________BASE_L3___________________,         _________________BASE_R3___________________,
                    _______, ____BASE_LT_____,         ____BASE_RT_____, _______
),

[_NAV] = LAYOUT_microdox_wrapper(
  _________________NAVI_L1___________________,         _________________NAVI_R1___________________,
  _________________NAVI_L2___________________,         _________________NAVI_R2___________________,
  _________________NAVI_L3___________________,         _________________NAVI_R3___________________,
                    _______, ____NAVI_LT_____,         ____NAVI_RT_____, _______
),

[_MOUSE] = LAYOUT_microdox_wrapper(
  _________________MSE_L1____________________,         _________________MSE_R1____________________,
  _________________MSE_L2____________________,         _________________MSE_R2____________________,
  _________________MSE_L3____________________,         _________________MSE_R3____________________,
                    _______, ____MSE_LT______,         ____MSE_RT______, _______
),

[_RSYMBOL] = LAYOUT_microdox_wrapper(
  _________________RSYM_L1___________________,         _________________RSYM_R1___________________,
  _________________RSYM_L2___________________,         _________________RSYM_R2___________________,
  _________________RSYM_L3___________________,         _________________RSYM_R3___________________,
                    _______, ____RSYM_LT_____,         ____RSYM_RT_____, _______
),

[_LSYMBOL] = LAYOUT_microdox_wrapper(
  _________________LSYM_L1___________________,         _________________LSYM_R1___________________,
  _________________LSYM_L2___________________,         _________________LSYM_R2___________________,
  _________________LSYM_L3___________________,         _________________LSYM_R3___________________,
                    _______, ____LSYM_LT_____,         ____LSYM_RT_____, _______
),

[_NUMBER] = LAYOUT_microdox_wrapper(
  _________________NUM_L1____________________,         _________________NUM_R1____________________,
  _________________NUM_L2____________________,         _________________NUM_R2____________________,
  _________________NUM_L3____________________,         _________________NUM_R3____________________,
                    _______, ____NUM_LT______,         ____NUM_RT______, _______
),

[_FUNCTION] = LAYOUT_microdox_wrapper(
  _________________FN_L1_____________________,         _________________FN_R1_____________________,
  _________________FN_L2_____________________,         _________________FN_R2_____________________,
  _________________FN_L3_____________________,         _________________FN_R3_____________________,
                    _______, ____FN_LT_______,         ____FN_RT_______, _______
),

[_ADJUST] = LAYOUT_microdox_wrapper(
  _________________ADJ_L1____________________,         _________________ADJ_R1____________________,
  _________________ADJ_L2____________________,         _________________ADJ_R2____________________,
  _________________ADJ_L3____________________,         _________________ADJ_R3____________________,
                    _______, ____ADJ_LT______,         ____ADJ_RT______, _______
)
};
