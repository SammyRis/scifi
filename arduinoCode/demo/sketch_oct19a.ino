int countDir = 1;
int motorSpeed = 2;
int motorPin = 11;
int testPin = A5;
void setup(){
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

void loop(){
  motorSpeed += countDir;
  
  if(motorSpeed > 90){
    countDir = -1;
  }
  else if(motorSpeed < 1){
    countDir = 1;
  }
  
  analogWrite(motorPin, motorSpeed);
  Serial.println(analogRead(testPin));
  delay(50);
}
