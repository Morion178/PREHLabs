#include "button_I.h"
void button_InitFunction(void)
{

}
void button_MainFunction(void)
{
	button_ReadInputData();
	button_ProcessData();
	button_WriteOutputData();
}

static void button_ReadInputData(void)
{
	if((GPIOC->IDR & GPIO_PIN_13) == GPIO_PIN_RESET)
	{
		button_InputData.DigitalState =\
				BUTTON_DIGITAL_STATUS_HIGH;
	}
	else
	{
		button_InputData.DigitalState =\
						BUTTON_DIGITAL_STATUS_LOW;
	}
}
static void button_ProcessData(void)
{
	if(button_InputData.DigitalState ==\
				BUTTON_DIGITAL_STATUS_HIGH)
	{
		if((button_ProcessingData.DebounceValue) > BUTTON_PRESS_DEBOUNCE_TIME_WINDOW)
		{
			button_OutputData.PressState =\
					BUTTON_PRESS_STATE_PRESSED;
		}
		else
		{
			button_ProcessingData.DebounceValue += 10U;
		}
	}
	else
	{
		button_ProcessingData.DebounceValue = 0U;
		button_OutputData.PressState =\
				BUTTON_PRESS_STATE_NOT_PRESSED;
	}
}
static void button_WriteOutputData(void)
{

}
