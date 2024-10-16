#define ENA 9
#define IN1 6
#define IN2 5
#define ENB 10
#define IN3 3
#define IN4 4

#define S1 A2  // Left
#define S2 A1  // Middle
#define S3 A0  // Right

void setup() {
  // put your setup code here, to run once:
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
}

void loop() {
  delay(50);
  // put your main code here, to run repeatedly:
  reset();
  delay(10); 

  int leftSensor = analogRead(S1);
  int middleSensor = analogRead(S2);
  int rightSensor = analogRead(S3);

  if ((leftSensor > 500) && (middleSensor < 500) && (rightSensor > 500)) {
    forward();
  } else if (((leftSensor < 500) && (middleSensor > 500) && (rightSensor > 500)) || ((leftSensor < 500) && (middleSensor < 500) && (rightSensor > 500))){
    move_right();
  } else if (((leftSensor > 500) && (middleSensor > 500) && (rightSensor < 500)) || ((leftSensor > 500) && (middleSensor < 500) && (rightSensor < 500))) {
    move_left();
  } else if ((leftSensor > 500) && (middleSensor > 500) && (rightSensor > 500)) {
    forward();
  } else {}
  delay(100);
}

void move_right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 150);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 100);
}

void move_left() {
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 150);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 100);
}

void forward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 150);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 150);
}

void reset() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
