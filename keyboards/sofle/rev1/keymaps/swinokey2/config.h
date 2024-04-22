#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#define TAPPING_TOGGLE 2
#define COMBO_COUNT 3

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#define NO_ACTION_TAPPING
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define NO_MUSIC_MODE

#define LANG_CHANGE_DEFAULT LANG_CHANGE_SHIFT_ALT

#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTION 4

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#ifdef RGBLIGHT_ENABLE
#define WS2812_DI_PIN D3
#undef RGBLIGHT_LED_COUNT
#undef RGBLED_SPLIT
#define RGBLIGHT_LED_COUNT 14
#define RGBLED_SPLIT {RGBLIGHT_LED_COUNT / 2, RGBLIGHT_LED_COUNT / 2  }
#define RGBLIGHT_LIMIT_VAL 128
#define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_LAYERS
#endif
