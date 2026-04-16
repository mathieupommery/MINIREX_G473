/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32G47X

#define BOARD_NAME        MINIREX_G4
#define MANUFACTURER_ID   POMMERY

#define USE_ACC
#define USE_ACC_SPI_ICM42688P
#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P
#define USE_FLASH
#define USE_FLASH_M25P16

#define BEEPER_PIN           PB9

#define MOTOR1_PIN           PA0
#define MOTOR2_PIN           PA1
#define MOTOR3_PIN           PA2
#define MOTOR4_PIN           PA3


#define LED_STRIP_PIN        PA15

#define UART1_TX_PIN         PB6
#define UART2_TX_PIN         PB3
#define UART3_TX_PIN         PB10
#define UART4_TX_PIN         PC10

#define UART1_RX_PIN         PB7
#define UART2_RX_PIN         PB4
#define UART3_RX_PIN         PB11
#define UART4_RX_PIN         PC11

#define I2C2_SCL_PIN         PA9
#define I2C2_SDA_PIN         PA8

#define LED0_PIN             PC6
#define LED1_PIN             PA10



#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7
#define GYRO_1_CS_PIN        PC15
#define GYRO_1_EXTI_PIN      PC14
#define GYRO1_CLKIN_PIN      PC13
#define GYRO_1_SPI_INSTANCE  SPI1


#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15
#define FLASH_CS_PIN         PB12
#define FLASH_SPI_INSTANCE   SPI2


#define ADC_VBAT_PIN         PB1
#define ADC_CURR_PIN         PB2


#define PINIO1_PIN           PA4

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 1, PA0 , 2,  0) \
    TIMER_PIN_MAP( 2, PA1 , 2,  1) \
    TIMER_PIN_MAP( 3, PA2 , 2,  2) \
    TIMER_PIN_MAP( 4, PA3 , 2,  3) \
    TIMER_PIN_MAP( 5, PA15 , 1,  4) \
    TIMER_PIN_MAP( 6, PB9, 1, -1) \
    TIMER_PIN_MAP( 7, PC13 , 1, -1) 

#define TIMUP2_DMA_OPT      0


#define DEFAULT_RX_FEATURE FEATURE_RX_SERIAL

#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define DEFAULT_VOLTAGE_METER_SCALE_DEFAULT 210
#define BEEPER_PWM_HZ 2500

#define PINIO1_BOX 40



#define ENSURE_MPU_DATA_READY_IS_LOW
