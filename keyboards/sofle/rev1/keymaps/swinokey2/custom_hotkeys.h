#pragma once

#ifndef CUSTOM_SAFE_RANGE
#    error "You must specify variable CUSTOM_SAFE_RANGE for custom hotkeys keycodes."
#endif

enum custom_hotkeys_keycodes {
    CUSTOM_HOTKEYS_START = CUSTOM_SAFE_RANGE,

    CT_Y,
    CT_Z,

    CUSTOM_HOTKEYS_NEW_SAFE_RANGE,
#undef CUSTOM_SAFE_RANGE
#define CUSTOM_SAFE_RANGE CUSTOM_HOTKEYS_NEW_SAFE_RANGE
};

// Мои языко-символьные клавиши
bool process_my_hotkeys(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CT_Y:
            if (record->event.pressed) {
                shift_activate(0);
                register_code(KC_LEFT_CTRL);
                register_code(KC_Y);
            } else {
                unregister_code(KC_Y);
                unregister_code(KC_LEFT_CTRL);
            }
            return false;
        case CT_Z:
            if (record->event.pressed) {
                shift_activate(0);
                register_code(KC_LEFT_CTRL);
                register_code(KC_Z);
            } else {
                unregister_code(KC_Z);
                unregister_code(KC_LEFT_CTRL);
            }
            return false;
    }
    return true;
}
