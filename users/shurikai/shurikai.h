#pragma once
#include QMK_KEYBOARD_H

#include "wrappers.h"

enum userspace_layers {
    _BASE,
    _NAV,
    _MOUSE,
    _RSYMBOL,
    _LSYMBOL,
    _NUMBER,
    _FUNCTION,
    _ADJUST
};

enum userspace_keycodes {
    BASE = SAFE_RANGE,
    NAV,
    MOUSE,
    RSYMBOL,
    LSYMBOL,
    NUMBER,
    FUNCTION,
    ADJUST
};

/*
 * Mod-taps.
 */
#define KC_SFTA   MT(MOD_LSFT, KC_A)
#define KC_GUIZ   MT(MOD_LGUI, KC_Z)
#define KC_CTLX   MT(MOD_LCTL, KC_X)
#define KC_ALTC   MT(MOD_LALT, KC_C)
#define KC_SFTCLN MT(MOD_LSFT, KC_SCLN)
#define KC_ALTCM  MT(MOD_LALT, KC_COMM)
#define KC_CTLDT  MT(MOD_LCTL, KC_DOT)
#define KC_GUISL  MT(MOD_LGUI, KC_SLSH)

/*
 * Layer-taps.
 */
#define KC_LTNV LT(_NAV,KC_D)
#define KC_LTMS LT(_MOUSE,KC_K)
#define KC_LTRS LT(_RSYMBOL,KC_F)
#define KC_LTLS LT(_LSYMBOL,KC_J)
#define KC_LTNM LT(_NUMBER,KC_S)
#define KC_LTFN LT(_FUNCTION,KC_L)
#define KC_LTAD LT(_ADJUST,KC_SPC)

/*
 * Common key combos used in multiple keymaps.
 */

enum combos {
    ESC_COMBO
};

const uint16_t PROGMEM esc_combo [] = {KC_TAB, KC_ENT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [ESC_COMBO] = COMBO(esc_combo, KC_ESC)
};

