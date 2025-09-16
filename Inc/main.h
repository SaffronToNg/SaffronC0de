/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AD9833_SDATA1_Pin GPIO_PIN_6
#define AD9833_SDATA1_GPIO_Port GPIOF
#define AD9833_SCLK1_Pin GPIO_PIN_8
#define AD9833_SCLK1_GPIO_Port GPIOF
#define AD9833_FSYNC1_Pin GPIO_PIN_9
#define AD9833_FSYNC1_GPIO_Port GPIOF
#define AD9833_SDATA2_Pin GPIO_PIN_1
#define AD9833_SDATA2_GPIO_Port GPIOC
#define AD9833_SCLK2_Pin GPIO_PIN_2
#define AD9833_SCLK2_GPIO_Port GPIOC
#define AD9959_P0_Pin GPIO_PIN_4
#define AD9959_P0_GPIO_Port GPIOC
#define AD9959_P1_Pin GPIO_PIN_9
#define AD9959_P1_GPIO_Port GPIOH
#define AD9959_UP_Pin GPIO_PIN_10
#define AD9959_UP_GPIO_Port GPIOH
#define AD9959_PDC_Pin GPIO_PIN_11
#define AD9959_PDC_GPIO_Port GPIOH
#define AD9959_SDIO0_Pin GPIO_PIN_12
#define AD9959_SDIO0_GPIO_Port GPIOH
#define AD9959_P2_Pin GPIO_PIN_6
#define AD9959_P2_GPIO_Port GPIOG
#define AD9833_FSYNC2_Pin GPIO_PIN_6
#define AD9833_FSYNC2_GPIO_Port GPIOC
#define AD9959_SCK_Pin GPIO_PIN_7
#define AD9959_SCK_GPIO_Port GPIOC
#define AD9959_CS_Pin GPIO_PIN_13
#define AD9959_CS_GPIO_Port GPIOH
#define AD9959_RST_Pin GPIO_PIN_14
#define AD9959_RST_GPIO_Port GPIOH
#define AD9959_SDIO1_Pin GPIO_PIN_15
#define AD9959_SDIO1_GPIO_Port GPIOH
#define AD9959_P3_Pin GPIO_PIN_0
#define AD9959_P3_GPIO_Port GPIOI
#define KEY1_Pin GPIO_PIN_6
#define KEY1_GPIO_Port GPIOD
#define AD9959_SDIO2_Pin GPIO_PIN_11
#define AD9959_SDIO2_GPIO_Port GPIOG
#define KEY2_Pin GPIO_PIN_4
#define KEY2_GPIO_Port GPIOB
#define KEY3_Pin GPIO_PIN_6
#define KEY3_GPIO_Port GPIOB
#define KEY4_Pin GPIO_PIN_9
#define KEY4_GPIO_Port GPIOB
#define AD9959_SDIO3_Pin GPIO_PIN_5
#define AD9959_SDIO3_GPIO_Port GPIOI
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
