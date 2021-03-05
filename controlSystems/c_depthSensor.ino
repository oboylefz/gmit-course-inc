
// CLASS DEFINITION

class DepthSensor{

  private:
  int Pin_Input;
  int Sample_Time;
  int sensorValue;
  float voltage;
   
  public:
   DepthSensor(byte Pin_Input,int Sample_Time){
    this->Pin_Input = Pin_Input;
   }
   void DataConvert(){
      
    unsigned long currentTime = millis(); { 
     this->sensorValue = analogRead(Pin_Input);
     this-> voltage = sensorValue * (5.0 / 1023.0);
    }
  }
   float getvoltage(){
      return voltage;
    }
    int getsensorValue(){
      return sensorValue;
      delay(10);
    }
  
 };
