#pragma once

// Tapping term settings
#define COMBO_COUNT 1
#define TAPPING_TERM 150
#define IGNORE_MOD_TAP_INTERRUPT

#ifdef RGBLIGHT_ENABLE
#   define RGBLIGHT_SLEEP
#   define RBG_HUE_STEP     16
#   define RGB_SAT_STEP     16
#   define RGB_VAL_STEP     16

#   define RBGLIGHT_EFFECT_BREATHING
#   define RBGLIGHT_EFFECT_KNIGHT
#   define RBGLIGHT_EFFECT_SNAKE
#   define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#endif
