#define PIN_LED1 3
#define PIN_Sensor A0

/*
 *  BLINKER CLASS VARIABLES DECLARATION
 */
Blinker blink1 = Blinker(PIN_LED1, 500, 500);
DepthSensor Depth = DepthSensor(PIN_Sensor,800);

void setup() {
Serial.begin(9600);
}

void loop() {
  blink1.check();
  Depth.DepthCheck();

} 
