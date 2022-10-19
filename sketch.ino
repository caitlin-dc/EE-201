#define LED 2 // LED on Pin 2
#define BUTTON 3 //Button on Pin 2
#define POT A0 //Potentiometer on pin A0

void setup() {
  // put your setup code here, to run once:
  
  //Define whether the pins are inputs or outputs.
  pinMode (LED, OUTPUT);
  pinMode (BUTTON, INPUT);
  pinMode (POT, INPUT);

  //Turn on the LED
  digitalWrite(LED, HIGH);

  //Start the serial monitor for printing
  //6400 baud rate (speed)
  Serial.begin(6400);
}

void loop() {
  // put your main code here, to run repeatedly:

  //Read the BUTTON and POT values
  int buttonStatus = digitalRead(BUTTON);
  int potStatus = analogRead(POT);

  //Read and print the POT reading
  Serial.println("Button and Pot status:");
  Serial.println(buttonStatus);
  Serial.println(potStatus);

  // Delay in milliseconds
  // 500 ms; loop runs ~2 times/sec
  // button may feel a little inconsistent
  // due to this delay; click quickly
  delay (500);
  
}
