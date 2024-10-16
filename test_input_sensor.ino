int leftPin = 2;
int centrePin = 3;
int rightPin = 4;
int leftReading, centreReading, rightReading = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(leftPin, INPUT);
  pinMode(centrePin, INPUT);
  pinMode(rightPin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  leftReading = digitalRead(leftPin);
  centreReading = digitalRead(centrePin);
  rightReading = digitalRead(rightPin);

  if (leftReading == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
  };
  if (centreReading == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
  };
  if (rightReading == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    digitalWrite(LED_BUILTIN, HIGH);
  };
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(750);
}
