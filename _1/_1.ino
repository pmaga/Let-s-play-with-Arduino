// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(1000);
}
