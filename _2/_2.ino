// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(5, INPUT_PULLUP);

  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
}

// the loop function runs over and over again forever
void loop() {

  if (digitalRead(5) == LOW) {
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);  
  }
}
