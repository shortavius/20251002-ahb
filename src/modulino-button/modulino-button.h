#if !defined(MODULINO_BUTTONS_H)
#define MODULINO_BUTTONS_H

#include <stdint.h>

void modulino_buttons_cfg(void);
unsigned char modulino_buttons_get_button_states(void);
void modulino_buttons_set_leds(unsigned char);

#endif // MODULINO_BUTTONS_H
