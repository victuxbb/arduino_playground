int analogicInput = 0;
int buttonConversor = 2;
int lectura = 0;
void setup() {  
  Serial.begin(9600);
  delay(1000);
}

void loop() {

  lectura = analogRead(analogicInput);
  if(digitalRead(buttonConversor)==LOW){
    Serial.println(lectura);  
  }else{
    Serial.println(lectura*0.0049);  
  }
  
  delay(1000);
  
}


