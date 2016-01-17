int analogicInput = 0;
int pinLed = 11;
int lectura = 0;
int mappedValue = 0;
void setup() {  
  Serial.begin(9600);
  delay(1000);
}

void loop() {

  lectura = analogRead(analogicInput);
  mappedValue = map(lectura,0,1023,0,255);
  analogWrite(pinLed,mappedValue);    
  
}


