/**
  @Company
    Microchip Technology Inc.

  @Description
    This Source file provides APIs.
    Generation Information :
    Driver Version    :   1.0.0
*/
/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/


#include "../include/evsys.h"

/**
 * \brief Initialize EVSYS interface
 *
 * \return Initialization status.
 */
int8_t EVSYS_Initialize()
{
    //GENERATOR OFF; 
	EVSYS.CHANNEL0 = 0x00;

    //GENERATOR RTC_PIT3; 
	EVSYS.CHANNEL1 = 0x0B;

    //GENERATOR OFF; 
	EVSYS.CHANNEL2 = 0x00;

    //GENERATOR OFF; 
	EVSYS.CHANNEL3 = 0x00;

    //GENERATOR PORT1_PIN6; 
	EVSYS.CHANNEL4 = 0x4E;

    //GENERATOR OFF; 
	EVSYS.CHANNEL5 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERCCLLUT0A = 0x00;

    //CHANNEL CHANNEL1; 
	EVSYS.USERCCLLUT1A = 0x02;

    //CHANNEL OFF; 
	EVSYS.USERCCLLUT2A = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERCCLLUT3A = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERCCLLUT0B = 0x00;

    //CHANNEL CHANNEL4; 
	EVSYS.USERCCLLUT1B = 0x05;

    //CHANNEL OFF; 
	EVSYS.USERCCLLUT2B = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERCCLLUT3B = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERUSART0 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERUSART1 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERUSART2 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERUSART3 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERTCB0 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERTCB1 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERTCB2 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERTCB3 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERTCA0 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USERADC0 = 0x00;

    //CHANNEL OFF; 
	EVSYS.USEREVOUTA = 0x00;

    //CHANNEL OFF; 
	EVSYS.USEREVOUTB = 0x00;

    //CHANNEL OFF; 
	EVSYS.USEREVOUTC = 0x00;

    //CHANNEL OFF; 
	EVSYS.USEREVOUTD = 0x00;

    //CHANNEL OFF; 
	EVSYS.USEREVOUTE = 0x00;

    //CHANNEL OFF; 
	EVSYS.USEREVOUTF = 0x00;

    return 0;
}