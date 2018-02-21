/* FSR simple testing sketch. 
 
Connect one end of FSR to power, the other end to pin 2.
Then connect one end of a 0.1uF capacitor from pin 2 to ground 
 
For more information see www.ladyada.net/learn/sensors/fsr.html */
 
int fsrPin1 = 2;     // the FSR and cap are connected to pin2
int fsrReading1;     // the digital reading
int ledPin1r = 12;    // you can just use the 'built in' LED
int ledPin1b = 13;

int fsrPin2 = 3;     // the FSR and cap are connected to pin2
int fsrReading2;     // the digital reading
int ledPin2r = 10;    // you can just use the 'built in' LED
int ledPin2b = 11;

int fsrPin3 = 4;     // the FSR and cap are connected to pin2
int fsrReading3;     // the digital reading
int ledPin3r = 8;    // you can just use the 'built in' LED
int ledPin3b = 9;

int fsrPin4 = 5;     // the FSR and cap are connected to pin2
int fsrReading4;     // the digital reading
int ledPin4r = 6;    // you can just use the 'built in' LED
int ledPin4b = 7;

void turnBlue(int pin){ //this turns on the blue light
  digitalWrite(pin,HIGH); //we put in pin to be able to call what ever pin we want and will be able to change it later
  }
void turnBlueOff(int pin){//this turns the blue light off 
  digitalWrite(pin,LOW);
  }
void turnRed(int pin){
  digitalWrite(pin,HIGH);
  }
void turnRedOff(int pin){
  digitalWrite(pin,LOW);
  }
void turnPurpleBb (){
  turnBlue(13);

  turnBlue(9);
  turnBlue(7);
  turnRed(12);

  turnRed(8);
  turnRed(6);
}
void turnPurpleC (){
  turnBlue(13);
  turnBlue(7);

  turnRed(12);
  turnRed(6);
  }
void turnPurpleA () {
  turnBlue(13);
  turnBlue(7);
  turnBlue(11);

  turnRed(12);
  turnRed(6);
  turnRed(10);
  }
void turnLightsOff () {
  turnBlueOff(13);
  turnBlueOff(11);
  turnBlueOff(9);
  turnBlueOff(7);

  turnRedOff(12);
  turnRedOff(10);
  turnRedOff(8);
  turnRedOff(6);
}


//void turnPurpleOff(int pin){
  //turnBlueOff(int pin);
  //turnRedOff(int pin);
//}
 
void setup(void) {
   delay(100);
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);   
  pinMode(ledPin1r, OUTPUT);  // have an LED for output 
  Serial.begin(9600);   
  pinMode(ledPin2r, OUTPUT);
  Serial.begin(9600);   
  pinMode(ledPin3r, OUTPUT);  // have an LED for output 
  Serial.begin(9600);   
  pinMode(ledPin4r, OUTPUT);
  Serial.begin(9600);   
  pinMode(ledPin1b, OUTPUT);  // have an LED for output 
  Serial.begin(9600);   
  pinMode(ledPin2b, OUTPUT);
  Serial.begin(9600);   
  pinMode(ledPin3b, OUTPUT);  // have an LED for output 
  Serial.begin(9600);   
  pinMode(ledPin4b, OUTPUT);

  turnRed(12);
  turnRed(10);
  turnRed;
  Serial.println("Welcome to Illuminote! Get excited to learn how to play the flute!");
  Serial.println("Before we begin, please make sure none of your fingers are touching any of the keys.");
  delay(5000);(8);
  turnRed(6);
  
  
  }

 /* ******************************* A ********************************************** */
  bool A(){
   delay(100);

  bool A1 = false;
  bool A2 = false;
  bool A3 = false; 
  bool A4 = false;
  
  // read the resistor using the RCtime technique
  fsrReading1 = RCtime(fsrPin1);
 
  if (fsrReading1 == 30000) {
    // if we got 30000 that means we 'timed out'
    turnRed(12);
    turnBlueOff(13);
  } else {
    turnRedOff(12);
    turnBlue(13);
    A1 = true;
  }
  
  fsrReading2 = RCtime(fsrPin2);

 if (fsrReading2 == 30000) {
    // if we got 30000 that means we 'timed out'
    turnRed(10);
    turnBlueOff(11);
  } else {
    turnRedOff(10);
    turnBlue(11);
    A2 = true;
  }
  
  
  fsrReading3 = RCtime(fsrPin3);

  turnRedOff(8);
  if (fsrReading3 == 30000) {
    // if we got 30000 that means we 'timed out'
    A3 = true;
  } else {
    A3 = false;
  }
  
  
  fsrReading4 = RCtime(fsrPin4);
 
  if (fsrReading4 == 30000) {
    // if we got 30000 that means we 'timed out'

    turnRed(6);
    turnBlueOff(7);
  } else {    
    turnRedOff(6);
    turnBlue(7);
    A4 = true;
  }
  if (A1 && A2 && A3 && A4) {
    turnPurpleA();
    delay(2000);
    Serial.println("That's an A! On fleek!");
    delay(3000);
    turnLightsOff();
    return true;
  }
  return false;
  }
/* ***************************************** C ************************** */
bool C (){
 
  delay(100);

  bool C1 = false;
  bool C2 = true;
  bool C3 = true;
  bool C4 = false;
  
  // read the resistor using the RCtime technique
  fsrReading1 = RCtime(fsrPin1);
 
  if (fsrReading1 == 30000) {
    // if we got 30000 that means we 'timed out'
    turnRed(12);
    turnBlueOff(13);
  } else {
    turnRedOff(12);
    turnBlue(13);
    C1 = true;
  }
  
  fsrReading2 = RCtime(fsrPin2);
 
  turnRedOff(10);
     if (fsrReading2 == 30000) {
    // if we got 30000 that means we 'timed out'
    C2 = true;
  } else {
    C2 = false;
  }
  fsrReading3 = RCtime(fsrPin3);
 
  turnRedOff(8);

    if (fsrReading3 == 30000) {
    // if we got 30000 that means we 'timed out'
    C3 = true;
  } else {
    C3 = false;
  }
  
  fsrReading4 = RCtime(fsrPin4);
 
  if (fsrReading4 == 30000) {
    // if we got 30000 that means we 'timed out'
    turnRed(6);
    turnBlueOff(7);
  } else {
    turnRedOff(6);
    turnBlue(7);
    C4 = true;
  }
  if (C1 && C2 && C3 && C4){
    turnPurpleC();
    delay(2000);
    Serial.println("That's a C! Purrfect! :3");
    delay(3000);
    turnLightsOff();
    return true;
  }

return false;
}
/* **************************** Bb **************************** */
bool Bb(){
   delay(100);
  bool Bb1 = false;
    bool Bb2 = true;
      bool Bb3 = false;
      bool Bb4 = false;
  // read the resistor using the RCtime technique
  fsrReading1 = RCtime(fsrPin1);

  if (fsrReading1 == 30000) {
    // if we got 30000 that means we 'timed out'
    turnRed(12);
    turnBlueOff(13);
  } else {
    turnRedOff(12);
    turnBlue(13);
    Bb1 = true;
  }

  
  fsrReading2 = RCtime(fsrPin2);
 
  turnRedOff(10);
   
    if (fsrReading2 == 30000) {
    // if we got 30000 that means we 'timed out'
    Bb2 = true;
  } else {
    Bb2 = false;
  }
  
  fsrReading3 = RCtime(fsrPin3);
 
  if (fsrReading3 == 30000) {
    // if we got 30000 that means we 'timed out'
    turnRed(8);
    turnBlueOff(9);
  } else {
    turnRedOff(8);
    turnBlue(9);
    Bb3 = true;
  }
  
  fsrReading4 = RCtime(fsrPin4);
 
  if (fsrReading4 == 30000) {
    // if we got 30000 that means we 'timed out'
    turnRed(6);
    turnBlueOff(7);
  } else {
    turnRedOff(6);
    turnBlue(7);
    Bb4 = true;
  }
  if(Bb3 && Bb2 && Bb1 && Bb4){
    turnPurpleBb();
    delay(2000);
    Serial.println("That's a B flat! Awesome sauce!");
    delay(3000);
    turnLightsOff();
    return true;
  }
  return false;
 }



void loop(void){

Serial.println("These notes make up a B-flat!");
bool BbDone = Bb();
while(BbDone == false){
  BbDone = Bb();
}
Serial.println("Please remove your fingers from the keys.");
Serial.println("These notes make up a C natural!");
bool CDone = C();
while (CDone == false){
  CDone = C();
} 
Serial.println("Please remove your fingers from the keys.");
Serial.println("These notes make up an A natural!");
bool ADone = A();
while (ADone == false){
  ADone = A();
}
Serial.println("Please remove your fingers from the keys.");
Serial.println("These notes make up a C natural!");
bool CDone1 = C();
while (CDone1 == false){
  CDone1 = C();
}
Serial.println("Your flute skills are #goals!");
delay(3000);
Serial.println("Please remove your fingers from the keys.");
}
  
   
 



 
// Uses a digital pin to measure a resistor (like an FSR or photocell!)
// We do this by having the resistor feed current into a capacitor and
// counting how long it takes to get to Vcc/2 (for most arduinos, thats 2.5V)
int RCtime(int RCpin) {
 int reading = 0;  // start with 0
 
  // set the pin to an output and pull to LOW (ground)
  pinMode(RCpin, OUTPUT);
  digitalWrite(RCpin, LOW);
 
  // Now set the pin to an input and...
  pinMode(RCpin, INPUT);
  while (digitalRead(RCpin) == LOW) { // count how long it takes to rise up to HIGH
    reading++;      // increment to keep track of time 
 
    if (reading == 30000) {
      // if we got this far, the resistance is so high
      // its likely that nothing is connected! 
      break;           // leave the loop
    }
  }
  // OK either we maxed out at 30000 or hopefully got a reading, return the count
 
  return reading;
}
