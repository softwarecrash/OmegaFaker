#include <Arduino.h>
//-------------------------------------------------------------------
//* Greenworks, GW, and other battery type faker, to use non communication Batterys
//* 
//*
//*
//* battery Timings can be found in the timings.h
//*
//* Written by softwarecrash https://github.com/softwarecrash/OmegaFaker
//-------------------------------------------------------------------

//----------------------------SETTINGS--------------------------
//Uncoment your Battery Type
#define Greenworks40VRAW
//#define GreenWorks60V //not implemented
//#define GreenWorks80V  //not implemented

//Select the pin for output
#define PIN 02
//----------------------------SETTINGS--------------------------

#include "timings.h"
//the pause between the pulse are 102µS so the 328P is slow, need to set it a bit lower
const int messagePause = 1000; //Pause between message blocks in ms
const int pulsePause = 100;    //pause between Signals in µS
void setup()
{
  pinMode(PIN, OUTPUT);
  digitalWrite(PIN, HIGH);
}
void loop()
{
  for (uint8_t i = 0; i < sizeof(pulseLength) / sizeof(pulseLength[0]); i++)
  {
    for (uint8_t j = 0; j < pulseLength[i][0]; j++)
    {
      digitalWrite(PIN, LOW);
      delayMicroseconds(pulseLength[i][1]);
      digitalWrite(PIN, HIGH);
      delayMicroseconds(pulsePause);
    }
  }
  delay(messagePause);
}
