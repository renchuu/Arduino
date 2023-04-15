/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-button
 */

// constants won't change. They're used here to set pin numbers:
const int BU1 = 13;
const int BU2 = 12;          // the number of the pushbutton pin
const int LED = 6; 

// Variables will change:
int lastState = LOW;
int lastState2 = LOW;  // the previous state from the input pin
int currentState;                // the current reading from the input pin
int currentState2; 

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialize the pushbutton pin as an pull-up input
  // the pull-up input pin will be HIGH when the switch is open and LOW when the switch is closed.
  pinMode(BU1, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
  pinMode(BU2, INPUT_PULLUP);
}

void loop() {
  // read the state of the switch/button:
  currentState = digitalRead(BU1);
  currentState2 = digitalRead(BU2);

  if(lastState == HIGH && currentState == LOW){
    Serial.println("The button 1 is pressed");
    analogWrite(LED, 200);}

    if(lastState2 == HIGH && currentState2 == LOW){
    Serial.println("The button 2 is pressed");
    analogWrite(LED, LOW);}

  // save the the last state
  lastState = currentState;
  lastState2 = currentState2;
}
