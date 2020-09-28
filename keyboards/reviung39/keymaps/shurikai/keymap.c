/* Copyright 2019 gtips
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
#include QMK_KEYBOARD_H
#include "shurikai.h"

// The Reviung39 keymap differs from all my other boards in that it only has three thumb keys. I handle that
// problem by shifting the tab (and escape) key back to the pinkie column and keeping shift/adjust on the right
// thumb. Everything else is pretty much the same.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_reviung_wrapper(
    KC_TAB,   _________________BASE_L1___________________,          _________________BASE_R1___________________,  KC_DEL,
    KC_ESC,   _________________BASE_L2___________________,          _________________BASE_R2___________________,  _______,
    _______,  _________________BASE_L3___________________,          _________________BASE_R3___________________,  _______,
                                                  KC_BSPC, LT_ADJ,  KC_ENT
  ),
  
  [_NAV] = LAYOUT_reviung_wrapper(
    _______,  _________________NAVI_L1___________________,          _________________NAVI_R1___________________,  _______,
    _______,  _________________NAVI_L2___________________,          _________________NAVI_R2___________________,  _______,
    _______,  _________________NAVI_L3___________________,          _________________NAVI_R3___________________,  _______,
                                                  _______, _______, _______
  ),
  
  [_MOUSE] = LAYOUT_reviung_wrapper(
    _______,  _________________MSE_L1____________________,          _________________MSE_R1____________________,  _______,
    _______,  _________________MSE_L2____________________,          _________________MSE_R2____________________,  _______,
    _______,  _________________MSE_L3____________________,          _________________MSE_R3____________________,  _______,
                                                  _______, _______, _______
  ),
  
  [_RSYMBOL] = LAYOUT_reviung_wrapper(
    _______,  _________________RSYM_L1___________________,          _________________RSYM_R1___________________,  _______,
    _______,  _________________RSYM_L2___________________,          _________________RSYM_R2___________________,  _______,
    _______,  _________________RSYM_L3___________________,          _________________RSYM_R3___________________,  _______,
                                                  _______, _______, _______
  ),
  
  [_LSYMBOL] = LAYOUT_reviung_wrapper(
    _______,  _________________LSYM_L1___________________,          _________________LSYM_R1___________________,  _______,
    _______,  _________________LSYM_L2___________________,          _________________LSYM_R2___________________,  _______,
    _______,  _________________LSYM_L3___________________,          _________________LSYM_R3___________________,  _______,
                                                  _______, _______, _______
  ),
  
  [_NUMBER] = LAYOUT_reviung_wrapper(
    _______,  _________________NUM_L1____________________,          _________________NUM_R1____________________,  _______,
    _______,  _________________NUM_L2____________________,          _________________NUM_R2____________________,  _______,
    _______,  _________________NUM_L3____________________,          _________________NUM_R3____________________,  _______,
                                                  _______, _______, _______
  ),
  
  [_FUNCTION] = LAYOUT_reviung_wrapper(
    _______,  _________________FN_L1_____________________,          _________________FN_R1_____________________,  _______,
    _______,  _________________FN_L2_____________________,          _________________FN_R2_____________________,  _______,
    _______,  _________________FN_L3_____________________,          _________________FN_R3_____________________,  _______,
                                                  _______, _______, _______
  ),
  
  [_ADJUST] = LAYOUT_reviung_wrapper(
    _______,   _________________ADJ_L1____________________,         _________________ADJ_R1____________________,  _______,
    _______,   _________________ADJ_L2____________________,         _________________ADJ_R2____________________,  _______,
    _______,   _________________ADJ_L3____________________,         _________________ADJ_R3____________________,  _______,
                                                   _______, KC_NO,  _______
  ),
};

