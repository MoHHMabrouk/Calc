#define F_CPU 16000000
#include <util/delay.h>
#include "DIO_interface.h"
#include "stdTypes.h"
#include "memMap.h"
#include "exInterrupt_interface.h"
#include "LCD_interface.h"
#include "HAL/keypad/keypad_interface.h"

void ISRtestFun(void)
{
	DIO_togglePin(PINA5);
}

int main(void)
{
	DIO_init();
	LCD_voidInit();
	KEYPAD_voidInit();
	u8 key;
	GLOBALINT_voidEnable();
	while (1)
	{
		KEYPAD_voidGetKey(&key);
		LCD_voidGoTo(0,1);
		if()
		LCD_voidWriteChar(key);
	}
}

