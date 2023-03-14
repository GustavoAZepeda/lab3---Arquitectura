// Define the pins for the buttons and LEDs
const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int redLed = 5;
const int yellowLed = 6;
const int greenLed = 7;

// Define the pin for the potentiometer
const int potentiometer = A3;

// Variable to store the value of the potentiometer
int valuePotentiometer;

void setup() {
  // Configure the pins for the buttons and LEDs as inputs and outputs
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);

  // Configure the serial port at a baud rate of 9600
  Serial.begin(9600);
}

void loop() {
  // Read the state of the buttons and turn on and off the required button
  if (digitalRead(button1) == LOW) {
    digitalWrite(redLed, HIGH);
  } else {
    digitalWrite(redLed, LOW);
  }
  if (digitalRead(button2) == LOW) {
    digitalWrite(yellowLed, HIGH);
  } else {
    digitalWrite(yellowLed, LOW);
  }
  if (digitalRead(button3) == LOW) {
    digitalWrite(greenLed, HIGH);
  } else {
    digitalWrite(greenLed, LOW);
  }

  // Read the value of the potenciometer and print it on the serial monitar
  valuePotentiometer = analogRead(valuePotentiometer);
  Serial.print("Potentiometer value: ");
  Serial.println(valuePotentiometer);
  delay(1000); 
}