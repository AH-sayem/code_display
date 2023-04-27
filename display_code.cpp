#line 1 "display_code.ino"
#include<LiquidCrystal.h>

#include "Arduino.h"
void setup();
void loop();
#line 3
LiquidCrystal lcd(13,12,11,10,9,8);

void setup() {
  
                                             
  
  lcd.begin(16,2);
  lcd.print("hellow world");
  
}

void loop() {
 
                                                    
  lcd.setCursor(0,1);
  lcd.print("sbs online");
  delay(1000);
  lcd.clear();
}

