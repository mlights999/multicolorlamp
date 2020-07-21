/*
 * Project          multicolorlamp
 * Description:     A neopixel powered desk lamp
 * Author:          Matthew Panizza
 * Date:            7/21/20
 */

/////////////////////////////////
/////// LIBRARIES INCLUDED //////
/////////////////////////////////

#include <neopixel.h>

/////////////////////////////////
//// NEOPIXEL CONFIGURATION /////
/////////////////////////////////

    //// INITIALLY START WITH WIFI OFF
    SYSTEM_MODE(SEMI_AUTOMATIC);

    //// SELECT ANTENNA - NORMALLY USING EXTERNAL ANTENNA
    STARTUP(WiFi.selectAntenna(ANT_EXTERNAL));

    //// LED HARDWARE
    #define PIXEL_TYPE WS2812B

    //// MAIN MATRIX
    #define PIXEL_PINA D6
    #define PIXEL_COUNT 64
    Adafruit_NeoPixel stripa = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PINA, PIXEL_TYPE);

    //// EXTERNAL STRIP
    #define PIXEL_PINB A5
    #define PIXEL_COUNTB 64
    Adafruit_NeoPixel stripb = Adafruit_NeoPixel(PIXEL_COUNTB, PIXEL_PINB, PIXEL_TYPE);
    
    //// EXTERNAL RING
    #define PIXEL_PINC A3
    #define PIXEL_COUNTC 12
    Adafruit_NeoPixel stripc = Adafruit_NeoPixel(PIXEL_COUNTC, PIXEL_PINC, PIXEL_TYPE);

/////////////////////////////////
///// HARDWARE CONFIGURATION ////
/////////////////////////////////

    #define TOGGLE D0   // Single hardware push button

    #define GRNLT D1    // Green indicator on joystick

    #define BLULT D2    // Blue indicator on joystick

    #define HSNS A0     // Horizontal stick sensor
    
    #define VSNS A1     // Vertical stick sensor

    #define BRTSNS A2   // Photoresistor brightness sensing


void setup() {
    

}

void loop() {
  

}