String command;

void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);  // IN1
  pinMode(6, OUTPUT);  // IN2
  pinMode(9, OUTPUT);  // IN3
  pinMode(10, OUTPUT); // IN4
}

void loop() {
  if (Serial.available()) {
    command = Serial.readStringUntil('\n');

    if (command == "FORWARD") {
      digitalWrite(5, HIGH); digitalWrite(6, LOW);
      digitalWrite(9, HIGH); digitalWrite(10, LOW);
    } else if (command == "BACKWARD") {
      digitalWrite(5, LOW); digitalWrite(6, HIGH);
      digitalWrite(9, LOW); digitalWrite(10, HIGH);
    } else if (command == "LEFT") {
      digitalWrite(5, LOW); digitalWrite(6, HIGH);
      digitalWrite(9, HIGH); digitalWrite(10, LOW);
    } else if (command == "RIGHT") {
      digitalWrite(5, HIGH); digitalWrite(6, LOW);
      digitalWrite(9, LOW); digitalWrite(10, HIGH);
    } else {
      digitalWrite(5, LOW); digitalWrite(6, LOW);
      digitalWrite(9, LOW); digitalWrite(10, LOW);
    }
  }
}