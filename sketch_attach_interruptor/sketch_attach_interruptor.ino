int buttonOff=2;
int buttonOn=3;
int pinLed=11;

void setup() {
  pinMode(buttonOff,INPUT);
  pinMode(buttonOn,INPUT);
  pinMode(pinLed,OUTPUT);
  attachInterrupt(0,turnOn,RISING);
  attachInterrupt(1,turnOff,RISING);
  Serial.begin(9600);
  delay(2000);
}

void loop() {

  delay(2500);
  Serial.println("forlayos event dispatcher!");
  
}

void turnOff(){
  digitalWrite(pinLed,LOW);
}
void turnOn(){
  digitalWrite(pinLed,HIGH);
}

void toggle(){  
  if(digitalRead(pinLed)) {
    digitalWrite(pinLed,LOW);
  }else{
    digitalWrite(pinLed,HIGH);
  }
}

