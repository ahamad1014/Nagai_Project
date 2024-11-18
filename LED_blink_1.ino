const int Led_Pin = 15;

void setup() {
  pinMode(Led_Pin, OUTPUT);
}

void loop() {
  digitalWrite(Led_Pin, HIGH);  // turn the LED on
  delay(1000);                      // wait for a second
  digitalWrite(Led_Pin, LOW);   // turn the LED off
  delay(1000);                      // wait for a second
}