const int L9 = 25;
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;
void setup() {
  Serial.begin(115200);
  pinMode(L9,OUTPUT);
  ledcSetup(ledChannel,freq,resolution);
  ledcAttachPin(L9, ledChannel);
  // put your setup code here, to run once:

}

void loop() {
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++)
  {
  ledcWrite(ledChannel,dutyCycle);
  delay(10);
  }
   for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--)
  {
  ledcWrite(ledChannel,dutyCycle);
  delay(10);
  }
  // put your main code here, to run repeatedly:

}
