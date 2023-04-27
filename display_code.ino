#include<LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8);

void setup() {
  
  // put your setup code here , to run once ;
  
  lcd.begin(16,2);
  lcd.print("hellow world");
  
}

void loop() {
 
  // put your main code here , to run respectively ;
  lcd.setCursor(0,1);
  lcd.print("sbs online");
  delay(1000);
  lcd.clear();
}
