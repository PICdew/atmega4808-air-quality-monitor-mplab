/*
 * Copyright (c) 2018, Sensirion AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice, this
 *   list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of Sensirion AG nor the names of its
 *   contributors may be used to endorse or promote products derived from
 *   this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/******************************************************************************
 *  include files
 *****************************************************************************/
#include "s_uart.h"
#include "../../mcc_generated_files/include/usart1.h"



/*******************************************************************************
 * @Name
 *    void sensirion_uart_open(void)  
 * @Param
 *    none
 * @Returns
 *    none
 * @Description
 *    enables the USART
 *******************************************************************************/
void sensirion_uart_open() 
{
    USART1_Enable();
}



/*******************************************************************************
 * @Name
 *    void sensirion_uart_tx(uint16_t data_len, const uint8_t *data) 
 * @Param
 *    data length and address of first element in array 
 * @Returns
 *    none
 * @Description
 *    send data using UART from array
 *******************************************************************************/
void sensirion_uart_tx(uint16_t data_len, const uint8_t *data) 
{
    
    while(data_len > 0)
    {
        USART1_Write(*data);
        data++;
        data_len--;
       
    }
}

/*******************************************************************************
 * @Name
 *    int16_t sensirion_uart_rx(uint16_t max_data_len, uint8_t *data) 
 * @Param
 *    maximum data length and address of first element of array
 * @Returns
 *    number of bytes received 
 * @Description
 *    Receives data by UART and stores in array
 *******************************************************************************/
int16_t sensirion_uart_rx(uint16_t max_data_len, uint8_t *data)
{
    int16_t ret = 0;
    uint8_t end = 2;
    while (end)
    {
        data[ret] = USART1_Read ();

        if (data[ret] == 126)
        {
            //for start and stop bytes 
            end--;
        }
        ret++;
    }


     return (ret);
}



