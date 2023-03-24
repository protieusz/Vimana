#pragma once

#include "quantum.h"

#define LAYOUT( \
    K000, K001, K002, K003, K004,       K006, K007,       K009, K010, K011, K012, K013, \
    K100, K101, K102, K103, K104, K105,             K108, K109, K110, K111, K112, K113, \
    K200, K201, K202, K203, K204,       K206, K207,       K209, K210, K211, K212, K213, \
                            K304,       K306, K307,       K309  \
) { \
    { K000,  K001,  K002,  K003,  K004,  KC_NO, K006,  K007,  KC_NO, K009,  K010,  K011,  K012,  K013 }, \
    { K100,  K101,  K102,  K103,  K104,  K105,  KC_NO, KC_NO, K108,  K109,  K110,  K111,  K112,  K113 }, \
    { K200,  K201,  K202,  K203,  K204,  KC_NO, K206,  K207,  KC_NO, K209,  K210,  K211,  K212,  K213 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, K304,  KC_NO, K306,  K307,  KC_NO, K309,  KC_NO, KC_NO, KC_NO, KC_NO }  \
}

/*******************************************/
/***** Trackball_module by aki27 start *****/
/*******************************************/

typedef union {
    uint32_t raw;
    struct {
        uint8_t cpi_idx;
        uint8_t scrl_div;
        uint8_t rotation_angle;
        int8_t scrl_inv;
        bool scrl_mode;
        report_mouse_t last_mouse;
    };
} cocot_config_t;



extern cocot_config_t cocot_config;

enum cocot_keycodes {

    //COCOT_SAFE_RANGE = SAFE_RANGE,
    CPI_SW = QK_USER,
    SCRL_SW,
    ROT_R15,
    ROT_L15,
    SCRL_MO,
    SCRL_TO,
    SCRL_IN,

};

bool encoder_update_user(uint8_t index, bool clockwise);
bool encoder_update_kb(uint8_t index, bool clockwise);
bool cocot_get_scroll_mode(void);
void cocot_set_scroll_mode(bool mode);

void render_logo(void);
void oled_write_layer_state(void);

/*******************************************/
/***** Trackball_module by aki27 end *******/
/*******************************************/

