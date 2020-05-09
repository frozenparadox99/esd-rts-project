// To start the built in ADC
HAL_ADC_Start_DMA (&hadc1, &adc_buf, 1);

// variables to be used for temperature sensing
uint32_t adc_buf; // default ADC buffer
int temp; // temperature

// To get temperature from the sensor
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc)
{
	temp = adc_buf*.322;   // convert value from adc buffer to temperature in Centigrade
}
