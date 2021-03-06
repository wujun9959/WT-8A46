/**
  ******************************************************************************
  * @file    wt_uart_COM2.h
  * @author  wujun
  * @version V1.0.0
  * @date    2015-03-23
  * @brief   This file contains all the functions prototypes for the uart_COM2.
  ******************************************************************************
  */ 


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef  __WT_UART_COM2_H
#define  __WT_UART_COM2_H


/*
*********************************************************************************************************
*                                              EXTERNS
*********************************************************************************************************
*/

#ifdef   WT_UART_COM2_GLOBALS
#define  WT_UART_COM2_EXT
#else
#define  WT_UART_COM2_EXT  extern
#endif


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/
#define UART_COM2_RX_Bufer_Length			100
#define UART_COM2_RX_Timeout					100

#define UartCOM2_RX_Event							1
#define UartCOM2_TX_Event							2

/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/

void UARTCOM2Thread(void const * argument);
void WT_UART_COM2_Init(void);
static void UartCOM2_Send_StartPrint_Cmd(void);
static void UartCOM2_Send_Print_Cmd(uint16_t cmd_line);

WT_UART_COM2_EXT uint8_t UART_COM2_Buffer_Rx[UART_COM2_RX_Bufer_Length];
WT_UART_COM2_EXT uint8_t UART_COM2_Cnt_Buffer_Rx;
//WT_UART_COM1_EXT uint8_t Is_UART_COM1_Rx_Come;


/*
*********************************************************************************************************
*                                              DATA TYPES
*********************************************************************************************************
*/




/*
*********************************************************************************************************
*                                              MODULE END
*********************************************************************************************************
*/

#endif
