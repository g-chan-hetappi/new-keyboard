/*
 * Copyright 2014 Esrille Inc.
 *
 * This file is a modified version of app_led_usb_status.h provided by
 * Microchip Technology, Inc. for using Esrille New Keyboard.
 * See the Software License Agreement below for the License.
 */

/********************************************************************
 Software License Agreement:

 The software supplied herewith by Microchip Technology Incorporated
 (the "Company") for its PIC(R) Microcontroller is intended and
 supplied to you, the Company's customer, for use solely and
 exclusively on Microchip PIC Microcontroller products. The
 software is owned by the Company and/or its supplier, and is
 protected under applicable copyright laws. All rights are reserved.
 Any use in violation of the foregoing restrictions may subject the
 user to criminal sanctions under applicable laws, as well as to
 civil liability for the breach of the terms and conditions of this
 license.

 THIS SOFTWARE IS PROVIDED IN AN "AS IS" CONDITION. NO WARRANTIES,
 WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED
 TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE COMPANY SHALL NOT,
 IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR
 CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *******************************************************************/

#ifndef APP_LED_H
#define APP_LED_H

/*********************************************************************
* Function: void APP_LEDUpdateUSBStatus(void);
*
* Overview: Uses one LED to indicate the status of the device on the USB bus.
*           A fast blink indicates successfully connected.  A slow pulse
*           indicates that it is still in the process of connecting.  Off
*           indicates thta it is not attached to the bus or the bus is suspended.
*           This should be called on every start of frame packet reception and
*           if a suspend/resume event occurs.
*
* PreCondition: LEDs are enabled.
*
* Input: None
*
* Output: None
*
********************************************************************/
void APP_LEDUpdateUSBStatus(void);

#endif
