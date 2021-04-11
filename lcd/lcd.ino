#include <LiquidCrystal.h>
LiquidCrystal lcd(10,8,5,4,3,2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  delay(1500);
}

void loop() {
  lcd.clear();
  lcd.print("Line 1");
  lcd.setCursor(0,1);
  lcd.print("Line 2");
  delay(1000);
}
