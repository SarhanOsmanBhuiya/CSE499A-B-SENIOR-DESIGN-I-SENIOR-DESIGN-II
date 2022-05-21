#include <VarSpeedServo.h>
//from below to upwards (1-6)
VarSpeedServo servo1;
VarSpeedServo servo2;
VarSpeedServo servo3;





void setup() {
  // put your setup code here, to run once:
  servo1.attach(2);
  servo1.write(90,10,true);
  servo2.attach(4);
  servo2.write(90,10,true);
  servo3.attach(6);
  servo3.write(90,10,true); 
   
  delay(6000);
}

void loop() {
  servo1.write(180,10,true);
  delay(1000);
  servo3.write(30,10,true);
  delay(1000);
  servo2.write(10,20,true);
  delay(1000);
  servo3.write(90,10,true);
  delay(1000);
  servo2.write(90,20,true);
  delay(1000);
  servo1.write(0,10,true);
  delay(1000);
  servo3.write(30,10,true);
  delay(1000);
  servo3.write(90,10,true);
  delay(6000);
  setup();

}
