/* 8/30/19 PCB PINOUTS
 *USB (Button closest to USB is first)        A3 14 15 10 16 
 *A/B/Button [0,1,NC][2,3,8][7,9,6] I did not wire in the switch for the rotary closest to usb, will be fixed in future revisions.
 */

#include "Keyboard.h"
#include <SimpleRotary.h>

SimpleRotary rotaryA(20,1,21); // Pin A, Pin B, Button Pin
SimpleRotary rotaryB(0,19,10); // Pin A, Pin B, Button Pin
SimpleRotary rotaryC(2,18,16); // Pin A, Pin B, Button Pin
SimpleRotary rotaryD(3,4,6); // Pin A, Pin B, Button Pin
SimpleRotary rotaryE(7,5,8); // Pin A, Pin B, Button Pin

byte buttonPin[]={21, 10, 16, 6, 8};
char buttonVal[]={'q','f','e','n','t'};
bool buttonState[]={0, 0, 0, 0, 0};
int rotVal[3][2][3]={
  {{122,0,0},{129,122,0}}, //z and shift+z
  {{129,218,0},{129,217,0}}, //shift Left Right arrows for panning
  {{129,216,0},{129,215,0}} //shift Up Down arrows for panning
  {{122,0,0},{129,122,0}}, //z and shift+z
  {{129,218,0},{129,217,0}}, //shift Left Right arrows for panning
};

void setup() {
  Keyboard.begin();
  
  for (int i = 0; i < 5; i++){
    pinMode(buttonPin[i], INPUT);
    digitalWrite(buttonPin[i], HIGH); //turn on pull-up resistor
  }
}

void loop() {
  byte rotA, rotB, rotC, rotD, rotE;

  // 0 = not turning, 1 = CW, 2 = CCW
  rotA = rotaryA.rotate();
  rotB = rotaryB.rotate();
  rotC = rotaryC.rotate();
  rotD = rotaryD.rotate();
  rotE = rotaryE.rotate();

  if(rotA!=0) kPress(0,rotA-1);
  if(rotB!=0) kPress(1,rotB-1);
  if(rotC!=0) kPress(2,rotC-1);
  if(rotD!=0) kPress(0,rotD-1);
  if(rotE!=0) kPress(1,rotE-1);

  if ((digitalRead(buttonPin[0]) != buttonState[0])||(digitalRead(buttonPin[1]) != buttonState[1])||(digitalRead(buttonPin[2]) != buttonState[2])||(digitalRead(buttonPin[3]) != buttonState[3])||(digitalRead(buttonPin[4]) != buttonState[4])){
    delay(5); //debounce delay, see if its a true reading
    
    for (int i = 0; i < 5; i++){
      if ((digitalRead(buttonPin[i])!=buttonState[i])){
        buttonState[i] = digitalRead(buttonPin[i]);
        if(!buttonState[i]) Keyboard.write(buttonVal[i]);
      }
    }
  }
}

void kPress (byte encoder, bool cw){ //encoder and clockwise?
  for (int i=0; i<5; i++) Keyboard.press(rotVal[encoder][cw][i]);
  Keyboard.releaseAll();
}
