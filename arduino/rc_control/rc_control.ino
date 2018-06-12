
int ledpin = 13;
int digitalPin3 = 3;
int digitalPin5 = 5;
int digitalPin10 = 10;
int digitalPin11 = 11;
int digitalPin7 = 7;
int digitalPin8 = 8;
int pin0 = 0;
int pin1 = 0;
int pin2 = 0;
int pin5 = 0;
int pin4 = 0;
unsigned long dur7;
unsigned long dur8;



void setup() {

  //initialize pins as outputs
  pinMode(ledpin, OUTPUT);
  pinMode(digitalPin3,OUTPUT);
  pinMode(digitalPin5,OUTPUT);
  pinMode(digitalPin10,OUTPUT);
  pinMode(digitalPin11,OUTPUT);
  pinMode(digitalPin7,INPUT);
  pinMode(digitalPin8,INPUT);

  // note: these greens are not graying out in sublime....
  //Serial.begin(19200);   
  //  setup serial
  // analogReference(INTERNAL);

}



void loop() {
    
  delay(200);  // 200ms loop
  
  dur7 = pulseIn(digitalPin7, HIGH);
//  dur8 = pulseIn(digitalPin8, HIGH);  // Oct 24 '17 commented out
  Serial.println(dur7);   // debug value

// This is channel 1 on the receiver
// dur 7 controls the left vs rigtht turning
// left goes to 955 and right goes to 1772
// the middle is 1370
  if (dur7 >= 1500)
  {
    // turn right
    digitalWrite(3, HIGH);
  }
    
  else if (dur7 < 1200)
  {
   digitalWrite(5, HIGH); 
  }
  else
  {
   digitalWrite(3, LOW); 
   digitalWrite(5, LOW);
  }
  
  // This is channel 2 on the receiver
  // dur 8 controls the forward and reverse movement
  // up goes to 1300 and down goes to 1715
  // the middle is 1510
  
  //if (dur8 < 1400)
 // {
    // go Forward
 //    digitalWrite(4, HIGH); 
 // }
    
//  else if (dur8 > 1625)
//  {
//    digitalWrite(5, HIGH); 
//  }
//  else
//  {
//     digitalWrite(4, LOW); 
//     digitalWrite(5, LOW);
//  }
  
  // file.print(duration);
  
// pin 11 (rear motor) and pin 6 (front motor) move motor forward
// pin 10 (rear motor) and pin 3 (front motor) move motor reverse 

}




