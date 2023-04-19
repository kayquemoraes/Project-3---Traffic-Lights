// Project 3 - Traffic Lights
int ledDelay = 5000; // delay in between changes
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;
void setup() {
 pinMode(redPin, OUTPUT);
 pinMode(yellowPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
}
void loop() {

 // turn the red light on
 digitalWrite(redPin, HIGH);
 delay(ledDelay); // wait 5 seconds
  
 digitalWrite(redPin, LOW); // turn red off
 digitalWrite(greenPin, HIGH); // turn green on
 delay(ledDelay); // wait 5 seconds

 digitalWrite(greenPin, LOW); // turn green off
 digitalWrite(yellowPin, HIGH); // turn yellow on
 delay(2000); // wait 2 seconds

 digitalWrite(yellowPin, LOW); // turn yellow off
 // now our loop repeats

}