  int PinA = 4;
  int PinB = 5;
  int PinC = 6;
  int PinD = 7;
  int SpeedInputPin = A0;
  int ForwardButton = 3;
  int NUMBER_OF_STEPS_PER_REV = 512;
  int MotorSpeed = 0;
  int ForwardButtonState = 0;
  int ReverseButtonState = 0;
  
  void setup() {
        pinMode(ForwardButton,INPUT); 
        pinMode(ReverseButton,INPUT);
  }

void writepins(int a,int b,int c,int d){
  digitalWrite (PinA,a);
  digitalWrite (PinB,b);
  digitalWrite (PinC,c);
  digitalWrite (PinD,d);

}

 void loop() {
        ForwardButtonState = digitalRead(ForwardButton);  
        if(ForwardButtonState == HIGH)   
        }


void Forward(int a,int b,int c,int d){
          digitalWrite(pinA,a);
          digitalWrite(pinB,b);
          digitalWrite(pinC,c);
          digitalWrite(pinD,d);
  }
        
void StepForward(int DELAY){  
        writepins(1,0,0,0);
        delay(DELAY);
        writepins(1,1,0,0);
        delay(DELAY);
        writepins(0,1,0,0);
        delay(DELAY);
        writepins(0,1,1,0);
        delay(DELAY);
        writepins(0,0,1,0);
        delay(DELAY);
        writepins(0,0,1,1);
        delay(DELAY);
        writepins(0,0,0,1);
        delay(DELAY);
        writepins(1,0,0,1);
        delay(DELAY);
}

void Reverse(int d,int c,int b,int a){
          digitalWrite(pinA,a);
          digitalWrite(pinB,b);
          digitalWrite(pinC,c);
          digitalWrite(pinD,d);
  }
  
void StepReverse(int DELAY){ 
          Reverse(1,0,0,0);
          delay(DELAY);
          Reverse(1,1,0,0);
          delay(DELAY);
          Reverse(0,1,0,0);
          delay(DELAY);
          Reverse(0,1,1,0);
          delay(DELAY);
          Reverse(0,0,1,0);
          delay(DELAY);
          Reverse(0,0,1,1);
          delay(DELAY);
          Reverse(0,0,0,1);
          delay(DELAY);
          Reverse(1,0,0,1)
          delay(DELAY);

  }

  };
