#include <Wire.h>                // مكتبة الاتصال عبر I2C
#include <LiquidCrystal_I2C.h>   // مكتبة شاشة LCD I2C

LiquidCrystal_I2C lcd(0x27, 16, 2);
int micFrontPin = 2;   // ميكروفون أمامي
int micBackPin = 3;    // ميكروفون خلفي
int micLeftPin = 4;    // ميكروفون يساري
int micRightPin = 5;   // ميكروفون يميني



void setup() {
Serial.begin(9600);
pinMode(micFrontPin,INPUT);
pinMode(micBackPin,INPUT);
pinMode(micLeftPin,INPUT);
pinMode(micRightPin,INPUT);

lcd.init();                // بدء شاشة LCD
lcd.backlight();           // تشغيل الإضاءة الخلفية
lcd.setCursor(0, 0);        // تعيين موضع الكتابة على الشاشة
lcd.print("Sound Direction!");
delay(5000);
lcd.clear();
}

void loop() {
  int micFrontValue = digitalRead(micFrontPin);
  int micBackValue = digitalRead(micBackPin);
  int micLeftValue = digitalRead(micLeftPin);
  int micRightValue = digitalRead(micRightPin);

  String direction = "";
  
  if (micFrontValue == 1) {
    lcd.clear();
    direction = "Front";
  
  } else if (micBackValue == 1) {
    lcd.clear();
    direction = "Back";
  } else if (micLeftValue == 1) {
    lcd.clear();
    direction = "Left";
    
  } else if (micRightValue == 1) {
    lcd.clear();
    direction = "Right";
  } else {
    direction = "None";
  }

  lcd.setCursor(0, 0);        // تعيين موضع الكتابة في الصف الثاني
  lcd.print("Direction: ");
  lcd.print(direction);
  
}
