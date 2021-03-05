#include <Servo.h>

class ServoMotor{

  private:
  byte servoPin;
  unsigned long timeOn;
  Servo servo;
  
  public:
    ServoMotor(byte servoPin,unsigned long timeOn){
      pinMode(servoPin, OUTPUT);
      this->servoPin = servoPin;
      this->timeOn = timeOn;       
    }
    
  void ServoAngle(int angle){
      servo.attach(servoPin);      
      angle = map(angle, 0, 1023, 0, 180);     
      servo.write(angle);                 
      delay(10);     
    }
};
