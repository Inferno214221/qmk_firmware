#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
    RGB_SLD = EZ_SAFE_RANGE,
    ST_MAC0,
    ST_MAC1,
    ST_MAC2,
    ST_MAC3,
};

#define L_DEF 0
#define L_PRG 1
#define L_FUN 2
#define L_GAM 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_DEF] = LAYOUT_ergodox_pretty(
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_CALC,                                KC_PSCR,    KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       OSL(L_FUN),
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_HOME,                                KC_END,     KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       TO(L_GAM),
        KC_LGUI,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                                           KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
        KC_GRV,     KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_PGUP,                                KC_PGDN,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_BSLS,
        DF(L_PRG),  KC_MINS,    KC_EQL,     KC_UP,      KC_DOWN,                                                                                KC_LEFT,    KC_RGHT,    KC_LBRC,    KC_RBRC,    KC_DEL,
                                                                                KC_RALT,    KC_RCTL,        LCTL(KC_C), LCTL(KC_V),
                                                                                            KC_LALT,        LCTL(KC_X),
                                                                    KC_LSFT,    KC_BSPC,    KC_LCTL,        KC_LALT,    KC_SPC,     KC_ENT
    ),
    [L_PRG] = LAYOUT_ergodox_pretty(
        KC_ESC,     KC_LCBR,    KC_RCBR,    KC_LABK,    KC_RABK,    KC_ASTR,    KC_CALC,                                KC_PSCR,    KC_CIRC,    KC_LBRC,    KC_RBRC,    KC_LPRN,    KC_RPRN,    OSL(L_FUN),
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_HOME,                                KC_END,     KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       DF(L_DEF),
        KC_LGUI,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                                           KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_DQUO,
        KC_GRV,     KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_PGUP,                                KC_PGDN,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_BSLS,
        DF(L_DEF),  KC_MINS,    KC_EQL,     KC_UP,      KC_DOWN,                                                                                KC_LEFT,    KC_RGHT,    KC_HASH,    KC_DLR,     KC_DEL,
                                                                                KC_RALT,    KC_RCTL,        LCTL(KC_C), LCTL(KC_V),
                                                                                            KC_LALT,        LCTL(KC_X),
                                                                    KC_LSFT,    KC_BSPC,    KC_LCTL,        KC_LALT,    KC_SPC,     KC_ENT
    ),
    [L_FUN] = LAYOUT_ergodox_pretty(
        TG(L_FUN),  KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,                                  KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     TG(L_FUN),
        TG(L_FUN),  KC_VOLD,    KC_MPLY,    KC_VOLU,    TG(L_FUN),  TG(L_FUN),  TG(L_FUN),                              TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),
        TG(L_FUN),  KC_MPRV,    KC_MSTP,    KC_MNXT,    TG(L_FUN),  TG(L_FUN),                                                      TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),
        TG(L_FUN),  KC_SLEP,    KC_PWR,     TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),                              TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),
        TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),                                                                              TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),  TG(L_FUN),
                                                                                _______,    _______,        _______,    _______,
                                                                                            _______,        _______,
                                                                    _______,    _______,    _______,        _______,    _______,    _______
    ),
    [L_GAM] = LAYOUT_ergodox_pretty(
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,                                   _______,    _______,    _______,    _______,    _______,    _______,    TG(L_GAM),
        KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_7,                                   _______,    _______,    _______,    _______,    _______,    _______,    TG(L_GAM),
        KC_GRV,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                                           _______,    _______,    _______,    _______,    _______,    _______,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_8,                                   _______,    _______,    _______,    _______,    _______,    KC_UP,      _______,
        KC_LCTL,    KC_F1,      KC_F2,      KC_F3,      KC_F4,                                                                                  KC_DEL,     KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RGHT,
                                                                                KC_9,       KC_0,           KC_LBRC,    KC_RBRC,
                                                                                            LGUI(KC_PSCR),  _______,
                                                                    KC_SPACE,   KC_BSPC,    ST_MAC3,        _______,    _______,    _______
    ),
};


const uint16_t PROGMEM combo0[] = { KC_DOT,  KC_EQUAL, COMBO_END };
const uint16_t PROGMEM combo1[] = { KC_COMM, KC_EQUAL, COMBO_END };
const uint16_t PROGMEM combo2[] = { KC_MINS, KC_EQUAL, COMBO_END };

combo_t key_combos[COMBO_COUNT] = {
        COMBO(combo0, ST_MAC0),
        COMBO(combo1, ST_MAC1),
        COMBO(combo2, ST_MAC2),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

#define BLUE {139,255,255}
#define BLACK {0,0,0}
#define RED {0,255,255}
#define DBLUE {157,255,255}

#define LED_LAYOUT_ergodox_pretty( \
    k0A,    k1A,    k2A,    k3A,    k4A,        k5A,    k6A,    k7A,    k8A,    k9A, \
    k0B,    k1B,    k2B,    k3B,    k4B,        k5B,    k6B,    k7B,    k8B,    k9B, \
    k0C,    k1C,    k2C,    k3C,    k4C,        k5C,    k6C,    k7C,    k8C,    k9C, \
    k0D,    k1D,    k2D,    k3D,    k4D,        k5D,    k6D,    k7D,    k8D,    k9D, \
    k0E,    k1E,    k2E,    k3E,                        k6E,    k7E,    k8E,    k9E \
) \
{ \
    k9A,    k8A,    k7A,    k6A,    k5A, \
    k9B,    k8B,    k7B,    k6B,    k5B, \
    k9C,    k8C,    k7C,    k6C,    k5C, \
    k9D,    k8D,    k7D,    k6D,    k5D, \
    k9E,    k8E,    k7E,    k6E, \
\
    k4A,    k3A,    k2A,    k1A,    k0A, \
    k4B,    k3B,    k2B,    k1B,    k0B, \
    k4C,    k3C,    k2C,    k1C,    k0C, \
    k4D,    k3D,    k2D,    k1D,    k0D, \
            k3E,    k2E,    k1E,    k0E \
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [L_DEF] = LED_LAYOUT_ergodox_pretty(
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,                       BLUE,   BLUE,   BLUE,   BLUE
    ),
    [L_PRG] = LED_LAYOUT_ergodox_pretty(
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,                       BLUE,   BLUE,   BLUE,   BLUE
    ),
    [L_FUN] = LED_LAYOUT_ergodox_pretty(
        RED,    RED,    RED,    RED,    RED,        RED,    RED,    RED,    RED,    RED,
        RED,    RED,    RED,    BLACK,  BLACK,      BLACK,  BLACK,  BLACK,  BLACK,  BLACK,
        RED,    RED,    RED,    BLACK,  BLACK,      BLACK,  BLACK,  BLACK,  BLACK,  BLACK,
        RED,    RED,    BLACK,  BLACK,  BLACK,      BLACK,  BLACK,  BLACK,  BLACK,  BLACK,
        BLACK,  BLACK,  BLACK,  BLACK,                      BLACK,  BLACK,  BLACK,  BLACK
    ),
    [L_GAM] = LED_LAYOUT_ergodox_pretty(
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,   BLUE,       BLUE,   BLUE,   BLUE,   BLUE,   BLUE,
        BLUE,   BLUE,   BLUE,   BLUE,                       BLUE,   BLUE,   BLUE,   BLUE
    ),
};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
                rgb_matrix_set_color( i, 0, 0, 0 );
        } else {
                RGB rgb = hsv_to_rgb( hsv );
                float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
                rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) { return false; }
    switch (biton32(layer_state)) {
        case 0:
            set_layer_color(0);
            break;
        case 1:
            set_layer_color(1);
            break;
        case 2:
            set_layer_color(2);
            break;
        case 3:
            set_layer_color(3);
            break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE)
            rgb_matrix_set_color_all(0, 0, 0);
        break;
    }
    return true;
}

const uint16_t NOT_SHIFT = ~MOD_BIT(KC_LSFT);

uint8_t mod_state;
bool programmer_mode = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    mod_state = get_mods();
    switch (keycode) {
        case ST_MAC0: {
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_6) SS_DELAY(100) SS_TAP(X_KP_5) SS_DELAY(100) SS_TAP(X_ENTER));
            }
            break;
        }
        case ST_MAC1: {
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_2) SS_DELAY(100) SS_TAP(X_KP_6) SS_DELAY(100) SS_TAP(X_KP_4) SS_DELAY(100) SS_TAP(X_ENTER));
            }
            break;
        }
        case ST_MAC2: {
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U))) SS_DELAY(100) SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_KP_1) SS_DELAY(100) SS_TAP(X_ENTER));
            }
            break;
        }
        case ST_MAC3: {
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_W) SS_DELAY(100) SS_TAP(X_I) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_ENTER));
            }
            break;
        }

        case RGB_SLD: {
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        }

#define CUSTOM_SHIFT(BASE, SHIFTED) \
        case BASE: { \
            static bool key_registered; \
            if (!programmer_mode) break; \
            if (record->event.pressed) { \
                if ( \
                    mod_state == MOD_BIT(KC_LSFT) \
                ) { \
                    del_mods(MOD_MASK_SHIFT); \
                    register_code16(SHIFTED); \
                    key_registered = true; \
                    set_mods(mod_state); \
                    return false; \
                } else if (mod_state != 0 && (mod_state | NOT_SHIFT) == NOT_SHIFT) { \
                    register_code16(SHIFTED); \
                    key_registered = true; \
                    return false; \
                } \
            } else { \
                if (key_registered) { \
                    unregister_code16(SHIFTED); \
                    key_registered = false; \
                    return false; \
                } \
            } \
            return true; \
        }

        CUSTOM_SHIFT(KC_LCBR, KC_1);
        CUSTOM_SHIFT(KC_RCBR, KC_2);
        CUSTOM_SHIFT(KC_LABK, KC_3);
        CUSTOM_SHIFT(KC_RABK, KC_4);
        CUSTOM_SHIFT(KC_ASTR, KC_5);
        CUSTOM_SHIFT(KC_CIRC, KC_6);
        CUSTOM_SHIFT(KC_LBRC, KC_7);
        CUSTOM_SHIFT(KC_RBRC, KC_8);
        CUSTOM_SHIFT(KC_LPRN, KC_9);
        CUSTOM_SHIFT(KC_RPRN, KC_0);

        CUSTOM_SHIFT(KC_DQUO, KC_QUOT);
        CUSTOM_SHIFT(KC_DOT,  KC_AMPR);
        CUSTOM_SHIFT(KC_COMM, KC_EXLM);
        CUSTOM_SHIFT(KC_HASH, KC_PERC);
        CUSTOM_SHIFT(KC_DLR,  KC_AT);
    }
    return true;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    programmer_mode = (biton(state) == L_PRG);
    if (programmer_mode) {
        ergodox_right_led_3_on();
    } else {
        ergodox_right_led_3_off();
    }
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    uint8_t layer = biton(state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    if (programmer_mode) {
        ergodox_right_led_3_on();
    } else {
        ergodox_right_led_3_off();
    }
    switch (layer) {
        case L_DEF:
            break;
        case L_FUN:
            ergodox_right_led_1_on();
            break;
        case L_GAM:
            ergodox_right_led_2_on();
            break;
        default:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
    }
    return state;
};