#include "button.h"
#define BUTTON_DIGITAL_STATUS_LOW (0U)
#define BUTTON_DIGITAL_STATUS_HIGH (1U)
#define BUTTON_DIGITAL_STATUS_INVALID (2U)
#define BUTTON_PRESS_DEBOUNCE_TIME_WINDOW (40U)
typedef enum
{
	BUTTON_PRESS_STATE_NOT_PRESSED = 0U,
	BUTTON_PRESS_STATE_PRESSED =1U,
//	BUTTON_PRESS_STATE_FAULT

}button_PressStateType;

typedef struct
{
	uint8_t DigitalState;
}button_InputDataType;

typedef struct
{
	button_PressStateType PressState;
}button_OutputDataType;

typedef struct
{
	uint16_t DebounceValue;
}button_ProcessingDataType;

static button_ProcessingDataType button_ProcessingData =
{
		.DebounceValue = 0U,
};

static button_OutputDataType button_OutputData =
{
	.PressState = BUTTON_PRESS_STATE_NOT_PRESSED,
};

static button_InputDataType button_InputData =
{
		.DigitalState = BUTTON_DIGITAL_STATUS_INVALID,
};

static void button_ReadInputData(void);
static void button_ProcessData(void);
static void button_WriteOutputData(void);
