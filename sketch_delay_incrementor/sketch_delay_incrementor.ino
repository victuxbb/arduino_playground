int buttonUp=0;
int buttonDown=0;
int pinUp=4;
int pinDown=8;
int pinLed=11;
int lag=0;
void setup() {
  pinMode(pinUp,INPUT);
  pinMode(pinDown,INPUT);
  pinMode(pinLed,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  buttonDown = digitalRead(pinDown);
  buttonUp = digitalRead(pinUp);
  if((lag+(buttonUp*100 - buttonDown*100))>=0){
    lag = lag + (buttonUp*100 - buttonDown*100);
  }
  Serial.print("lag: ");
  Serial.println(lag);
  digitalWrite(pinLed,HIGH);
  delay(lag);
  digitalWrite(pinLed,LOW);
  delay(lag);

}
