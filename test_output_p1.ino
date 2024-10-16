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
  // put your main code here, to run repeatedly:
  move_right();
  delay(2000);
}

void move_right() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 150);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 100);
}
