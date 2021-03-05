#include<LiquidCrystal.h>
LiquidCrystal lcd(17,16,27,26,33,32);

const int L5 = 26;
const int L6 = 27;
const int L7 = 33;
const int L8 = 5;
const int BUZZ = 14;
const int RL1 = 2;
const int RL2 = 18;
void setup() {
  lcd.begin(16,2);
  // put your setup code here, to run once:
  pinMode(L5, OUTPUT);
  pinMode(L6, OUTPUT);
  pinMode(L7, OUTPUT);
  pinMode(L8, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  pinMode(RL1, OUTPUT);
  pinMode(RL2, OUTPUT);

}
void loop() {

            //***LCD***//
  lcd.setCursor(1,0);
  lcd.print("WELCOME TO EED");
  delay(100);
  lcd.setCursor(0,0);
  lcd.print("IoT DEV KIT");
  delay(100);
  lcd.clear();

            //***COI***//
  digitalWrite(BUZZ, HIGH);
  delay(1000);
  digitalWrite(BUZZ, LOW);
  // put your main code here, to run repeatedly:

            //***RƠLE***//
  digitalWrite(RL1, LOW);
  digitalWrite(RL2, HIGH);
  delay(500);
  digitalWrite(RL1, HIGH);
  digitalWrite(RL2, LOW);          
}
