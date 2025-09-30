#include "modulino-button.h"

#include <Modulino.h>

#define BUTTON_A_INDEX                      0u
#define BUTTON_A_HEX                        (0x1 << 2)
#define BUTTON_B_INDEX                      1u
#define BUTTON_B_HEX                        (0x1 << 1)
#define BUTTON_C_INDEX                      2u
#define BUTTON_C_HEX                        (0x1 << 0)


static ModulinoButtons modulino_buttons;

void modulino_buttons_cfg(void)
{
    modulino_buttons.begin();
    modulino_buttons_set_leds(0x0u);
}

unsigned char modulino_buttons_get_button_states(void)
{
    unsigned char rv = 0x0u;

    modulino_buttons.update();
    if (modulino_buttons.isPressed((int)BUTTON_A_INDEX))
    {
        rv |= BUTTON_A_HEX;
    }

    if (modulino_buttons.isPressed((int)BUTTON_B_INDEX))
    {
        rv |= BUTTON_B_HEX;
    }

    if (modulino_buttons.isPressed((int)BUTTON_C_INDEX))
    {
        rv |= BUTTON_C_HEX;
    }

    return rv;
}

void modulino_buttons_set_leds(unsigned char state)
{
    switch (state)
    {
        case 0x1:
            modulino_buttons.setLeds(false, false, true);
            break;
        case 0x2:
            modulino_buttons.setLeds(false, true, false);
            break;
        case 0x3:
            modulino_buttons.setLeds(false, true, true);
            break;
        case 0x4:
            modulino_buttons.setLeds(true, false, false);
            break;
        case 0x5:
            modulino_buttons.setLeds(true, false, true);
            break;
        case 0x6:
            modulino_buttons.setLeds(true, true, false);
            break;
        case 0x7:
            modulino_buttons.setLeds(true, true, true);
            break;
        default:
            modulino_buttons.setLeds(false, false, false);
            break;
    }
}