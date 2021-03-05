int touchValue = 0;
const int RL1 = 18;
void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(RL1,OUTPUT);
  Serial.println("ESP32 TOUCH TEST");
  // put your setup code here, to run once:

}

void loop() {
  touchValue = touchRead(T0);     //touchRead(GPIO_NUM_13)
  Serial.println(touchValue);
  delay(1000);
  
  // put your main code here, to run repeatedly:
  
  if(touchValue < 15)
  {
  digitalWrite(RL1,LOW);  
  }
  else
  {
  digitalWrite(RL1,HIGH);
  }
}
