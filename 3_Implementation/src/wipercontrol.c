#include "stm32f1xx_hal.h" //This header contains all the functions prototypes for the HAL module driver.
void SystemClock_Config(void);   //Initizing System Clock 8Mhz
void Error_Handler(void);        //Error Handler- We are not going to use it. 
static void MX_GPIO_Init(void);  //GPIO Initialization function
HAL_Init();                     //Initialize the Hal Drivers
HAL_GPIO_TogglePin(Led_GPIO_Port,Led_Pin);      //Toggle Gpio
HAL_Delay(1000);                                //Delay 1second
__HAL_RCC_GPIOC_CLK_ENABLE();                   //Enable GPIO Clock
HAL_GPIO_WritePin(Led_GPIO_Port, Led_Pin, GPIO_PIN_RESET);  //Initialize the GPIO Pin Output Level
  GPIO_InitStruct.Pin = Led_Pin;                //Pin name we give in StmCubeMx Configuration 
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;   //Pin Mode Puch Pull
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;  //GPIO speed frequency Low
  HAL_GPIO_Init(Led_GPIO_Port, &GPIO_InitStruct); //Pass the setting perimeters for initialization 