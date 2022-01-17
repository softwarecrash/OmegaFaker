#include <Arduino.h>

//-------------------------------------------------------------------
//* Greenworks, GW, and other battery type faker, to use non communication Batterys
//* 
//*
//*
//*
//*
//* Written by softwarecrash https://github.com/softwarecrash/OmegaFaker
//-------------------------------------------------------------------


//----------------------------SETTINGS--------------------------
//Uncoment your Battery Type
#define GreenWorks40V
//#define GreenWorks60V //not implemented
//#define GreenWorks80V  //not implemented

//Select the pin for output
#define PIN 02
//----------------------------SETTINGS--------------------------

#include "timings.h"
//the pause between the pulse are 102µS so the 328P is slow, need to set it a bit lower
const int messagePause = 1000; //ms
const int pulsePause = 100; //µS
void setup()
{
  pinMode(PIN, OUTPUT);
  digitalWrite(PIN, HIGH);
}
void loop()
{
    for (uint8_t i = 0; i < sizeof pulseLength / sizeof pulseLength[0] ; i++)
    {
      digitalWrite(PIN, LOW);
      delayMicroseconds(pulseLength[i]);
      digitalWrite(PIN, HIGH);
      delayMicroseconds(pulsePause);
    }
    delay(messagePause);
}