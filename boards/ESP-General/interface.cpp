#include "interface.h"
#include "core/powerSave.h"



/***************************************************************************************
** Function name: _setup_gpio()
** Location: main.cpp
** Description:   initial setup for the device
***************************************************************************************/
void _setup_gpio() { 
    pinMode(UP_BTN, INPUT_PULLUP);
    pinMode(SEL_BTN, INPUT_PULLUP);
    pinMode(DW_BTN, INPUT_PULLUP);
}

/***************************************************************************************
** Function name: getBattery()
** location: display.cpp
** Description:   Delivers the battery value from 1-100
***************************************************************************************/
int getBattery() { return 0; }


/*********************************************************************
** Function: setBrightness
** location: settings.cpp
** set brightness value
**********************************************************************/
void _setBrightness(uint8_t brightval) { }


/*********************************************************************
** Function: InputHandler
** Handles the variables PrevPress, NextPress, SelPress, AnyKeyPress and EscPress
**********************************************************************/
void InputHandler(void) {
    if(digitalRead(UP_BTN)==LOW || digitalRead(SEL_BTN)==HIGH || digitalRead(DW_BTN)==LOW) {
        if(!wakeUpScreen()) AnyKeyPress = true;
        else goto END;
    }    
    if(digitalRead(UP_BTN)==LOW) {
        PrevPress = true;
        EscPress = true;
    }
    if(digitalRead(DW_BTN)==LOW) {
        NextPress = true;
    }
    if(digitalRead(SEL_BTN)==HIGH) {
        SelPress = true;
    }
    END:
    if(AnyKeyPress) {
      long tmp=millis();
      while((millis()-tmp)<200 && (digitalRead(UP_BTN)==LOW || digitalRead(SEL_BTN)==HIGH || digitalRead(DW_BTN)==LOW));
    }
}

/*********************************************************************
** Function: powerOff
** location: mykeyboard.cpp
** Turns off the device (or try to)
**********************************************************************/
void powerOff() { }


/*********************************************************************
** Function: checkReboot
** location: mykeyboard.cpp
** Btn logic to tornoff the device (name is odd btw)
**********************************************************************/
void checkReboot() { }