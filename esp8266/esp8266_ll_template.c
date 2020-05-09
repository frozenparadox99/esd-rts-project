
#include "esp8266_ll.h"

/**************************************************************************/
/**************************************************************************/
/**************************************************************************/
/*                                                                        */
/*    Edit file name to esp8266_ll.c and edit values for your platform    */
/*                                                                        */
/**************************************************************************/
/**************************************************************************/
/**************************************************************************/

uint8_t ESP8266_LL_USARTInit(uint32_t baudrate) {
	/* Init USART */
	
#if ESP8266_USE_CTS
    /* Enable RTS pin on MCU as output and set it low */
#endif

	/* Return 0 = Successful */
	return 0;
}

uint8_t ESP8266_LL_USARTSend(uint8_t* data, uint16_t count) {
	/* Send data via USART */
	
	/* Return 0 = Successful */
	return 0;
}


void ESP8266_LL_SetRTS(uint8_t dir) {
    /* Set RTS direction we require */
    if (dir == ESP_RTS_HIGH) {
        //Set RTS pin high
    } else {
        //Set RTS pin low
    }
}


/* USART receive interrupt handler */
void USART_RX_INTERRUPT_HANDLER_FUNCTION_NAME(void) {
	uint8_t ch;
	/* Get character from USART */
	
	
	/* Send received character to ESP stack */
	ESP8266_DataReceived(&ch, 1);
}
