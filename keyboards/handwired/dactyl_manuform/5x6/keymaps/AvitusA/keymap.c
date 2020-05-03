/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H

//#define UNICODE_SELECTED_MODES UC_MAC, UC_LNX
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _GREEK 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define GREEK MO(_GREEK)


enum unicode_names {
		    a,
		    A,
		    b,
		    B
};

const uint32_t PROGMEM unicode_map[] = {
					[a] = 0x03b1, // Alpha
					[A] = 0x0391,
					[b] = 0x03b2, // Beta
					[B] = 0x0392
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQL,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSPC,
     KC_ESC , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
                     KC_LCTL,KC_LALT,                                                        KC_RALT,KC_RCTL,
                                      LOWER , RAISE ,                         LALT_T(KC_ENT), LCTL_T(KC_SPC),
                                      KC_NO , KC_NO,                          GREEK , KC_RGUI,
                                      KC_ESC, KC_NO ,                         KC_NO , KC_MINS
  ),

  [_RAISE] = LAYOUT_5x6(

     _______, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15,                          KC_F16, KC_F17, KC_F18, KC_F19, KC_F20,_______,
     _______,_______,_______,_______,_______,_______,                         _______,KC_BTN1,KC_MS_U,KC_BTN2,_______,_______,
     _______,_______,_______,_______,_______,_______,                         _______,KC_MS_L,KC_MS_D,KC_MS_R,_______,_______,
     _______,_______,_______,_______,_______,_______,                         _______,KC_ACL0,KC_ACL1,KC_ACL2,_______,_______,
                     _______,_______,                                                        _______, _______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______

  ),

  [_LOWER] = LAYOUT_5x6(
       _______, KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,_______,
       _______,_______,_______,KC_LCBR,KC_RCBR,_______,                        _______,KC_HOME, KC_UP ,KC_PGUP,_______,_______,
       _______,_______,_______,KC_LPRN,KC_RPRN,_______,                        _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
       _______,_______,_______,KC_LBRC,KC_RBRC,_______,                        _______,KC_END ,_______,KC_PGDN,KC_BSLS,_______,
                      _______,_______,                                                         _______,_______,
                                               _______,_______,            KC_BSPC,KC_DEL,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),

  [_GREEK] = LAYOUT_5x6(
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______, RESET ,
       _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,XP(a,A),_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
       _______,_______,_______,_______,_______,XP(b,B),                        _______,_______,_______,_______,_______,_______,
               _______,_______,                                                                        _______,_______,
                                               _______, UC_MOD,             _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),
};

