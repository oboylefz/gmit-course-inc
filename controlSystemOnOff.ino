
#include <PID_v2.h>
int pinOut = 10;
#define PIN_INPUT 0
#define PIN_OUTPUT 3

  //Define Variables we'll be connecting to
  double Setpoint, Input, Output;
 
  //Specify the links and initial tuning parameters
  double Kp=2, Ki=5, Kd=1;
  PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);

  const int WindowSize = 5000;
  unsigned long windowStartTime;
  double Thermistor(int RawADC){
  double Temp;
 
  Temp = log (10000.0*((1024.0/RawADC-1)));
  Temp = 1/(0.001129148+(0.0002341125+(0.0000000876741*Temp*Temp))*Temp);
  Temp=Temp-273.15;
  Temp=(Temp*9.0)/5.0+32.0;
 
  return Temp;
 }

  void setup(){
  Serial.begin(9600);
  pinMode(10,OUTPUT);

  Input = analogRead(PIN_INPUT);
  Setpoint = 10;
 
  //turn the PID on
  myPID.SetMode(AUTOMATIC);
 
 }
  void loop(){
  int val;
  double temp;
  val = analogRead(0);
  temp=Thermistor(val);
  Serial.print("Temperature = ");
  Serial.print(temp);
  Serial.println("c");
  if(temp >= 10){
  digitalWrite(pinOut, LOW);

  Input = analogRead(PIN_INPUT);
  myPID.Compute();
  analogWrite(PIN_OUTPUT, Output);
    
 }
  else{digitalWrite(pinOut, HIGH);

  
 }

  delay(500);
  
}
