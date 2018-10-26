
//四只舵机的接口
#define UPPERARM    12  //大臂
#define FOREARM     13  //小臂
#define PEDESTAL   11  //旋转基座
#define GRIPPER     9  //抓爪

//大臂最小值,大臂最大值
#define UPPERARMSTART 500
#define UPPERARMEND   2500

//小臂最小值,小臂最大值
#define FOREARMSTART 500
#define FOREARMEND   2500

//旋转底座最小值,最大值
#define PEDESTALSTART   500
#define PEDESTALEND     2500

//抓爪最小值,最大值
#define GRIPPERSTART  1000
#define GRIPPEREND   1800
#define GRIPPERSPEED  500

//舵机库文件，如果报错可以到 arduino.cc下载
#include <Servo.h>

Servo servo1;  // 
Servo servo2;  // 
Servo servo3;  // 
Servo servo4;  // 

void RotateBase(int angle)
{
    int val;
    val = map(angle, -90, 90, PEDESTALSTART, PEDESTALEND);
    servo3.writeMicroseconds(val);
} 
void setup() 
{ 
//  Serial.begin(9600); 
  
  servo1.attach(UPPERARM); //大臂
  servo2.attach(FOREARM);  //小臂
  servo3.attach(PEDESTAL); //旋转基座
  servo4.attach(GRIPPER);  //抓爪

  // servo2.writeMicroseconds(800);
  // servo1.writeMicroseconds(1500);
//  delay(1000);

} 




void loop() 
{ 
// read the input on analog pin 0:
//int sensorValue1,sensorValue2,sensorValue3,sensorValue4,sensorValue5;
int Gripper = 1,pos; //1打开 0关闭
int Rotate = 0 ,RotateS =90,RotateE=60,RotateG=40;


  for(pos = 140; pos>=25; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    servo4.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(8);                       // waits 15ms for the servo to reach the position 
  } 
 
  delay(500);
   for(pos = 30; pos<=60; pos++)     // goes from 180 degrees to 0 degrees 
  {                                
    servo4.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(8);                       // waits 15ms for the servo to reach the position 
  } 
 



  for(pos = 0; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    servo3.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(8);                       // waits 15ms for the servo to reach the position 
  } 
  delay(200);
  
  for(pos = 180; pos>=10; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    servo3.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(8);                       // waits 15ms for the servo to reach the position 
  } 
  delay(200);
  servo3.write(90); 
  delay(500);
  
  
  
  
  

  for(pos = 50; pos <= 150; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
 //   servo2.write(pos);    
    servo1.write(pos);    // tell servo to go to position in variable 'pos' 
    delay(8);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 150; pos>=50; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
 //   servo2.write(pos); 
    servo1.write(pos);    // tell servo to go to position in variable 'pos' 
    delay(8);                       // waits 15ms for the servo to reach the position 
  } 
    for(pos = 50; pos <= 150; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
 //   servo2.write(pos);    
    servo2.write(pos);    // tell servo to go to position in variable 'pos' 
    delay(8);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 150; pos>=50; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
 //   servo2.write(pos); 
    servo2.write(pos);    // tell servo to go to position in variable 'pos' 
    delay(8);                       // waits 15ms for the servo to reach the position 
  } 
  /*  for(pos = 50; pos <= 180; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    servo1.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(8);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=50; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    servo1.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(8);                       // waits 15ms for the servo to reach the position 
  } */
  
delay(3000);
}
