#include <Cytron_PS2Shield.h>

Cytron_PS2Shield PS2(12, 13); //Only pins that work

void setup() {
  PS2.begin(57600);
  Serial.begin(9600);
}

void loop() {
  PS2.readAllButton();
  Serial.println(PS2.ps_data[0] >> 4, BIN);
  
}

