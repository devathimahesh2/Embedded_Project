 /**
 * @file Activity_main.c
 * @author mahesh
 * @brief To blink the led when a person occuipes seat and switch on the heater
 * @date 2021-09-16
 */
#include "ActivityOne.h"
#include "ActivityTwo.h"
#include "ActivityThree.h"


char temp_data;
int main(void)
{
	/* Initialize Peripherals */
    InitADC();
    char temp_data;
    uint16_t temp;
	peripheral_init();
    timer();

	while (1)
	{
        change_led_state(PD0);
		delay_ms(1000);
         temp=ReadADC(0);
        _delay_ms(200);
        temp_data = PWM(temp);
        UARTWritechar(temp_data);
        OCR0A=0;
        _delay_ms(200);
	}
	return 0;
}