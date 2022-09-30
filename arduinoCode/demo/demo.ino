#include <Servo.h>
#include <Stepper.h>

Servo servoXY;
const int sPR = 2038;

Stepper xyMotor = Stepper(sPR,8,9,10,11);

int ledPin = 13;
int motor = 10;
int servoZPin = 9;

int moveValue(int a, int dir){
  if(dir == -1 && a > 10){
    return a - 1;
  }
  else if(dir == 1 && a < 170){
    return a + 1;
  }
  else{
    return 0;
  }
}



void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
	xyMotor.setSpeed(30);
	xyMotor.step(sPR);
	delay(1000);
	
	// Rotate CCW quickly at 10 RPM
	xyMotor.setSpeed(15);
	xyMotor.step(-sPR);
	delay(1000);

}
