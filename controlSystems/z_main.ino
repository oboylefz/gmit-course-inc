//Create out object classes
#define PIN_Anologue A0
#define servoPin 9

DepthSensor Depth = DepthSensor(PIN_Anologue,200);
ServoMotor servomotor = ServoMotor(servoPin,20);
  
void setup() {

Serial.begin(9600); 
}
void loop() {
 
  Depth.DataConvert();
  Serial.print(Depth.getvoltage());
  Serial.println(" ");
  Serial.print(Depth.getsensorValue()); 
  Serial.print(" ");
  servomotor.ServoAngle(Depth.getsensorValue());

}
