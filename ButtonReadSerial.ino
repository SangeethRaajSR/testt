/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/
int buttonState = 0;
const int buttonPin = 2;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  buttonState=LOW;
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    Serial.println("The Button is on");
  } else { 
    Serial.println("The Button is off");
  }

  
  // read the input on analog pin 0:
//  int sensorValue = analogRead(A0);
  // print out the value you read:
  //Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
}
