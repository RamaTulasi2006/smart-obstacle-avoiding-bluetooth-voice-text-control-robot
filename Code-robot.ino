#define trigPin 9
#define echoPin 10

#define motor1A 2
#define motor1B 3
#define motor2A 4
#define motor2B 5

char command;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  // 🔹 Obstacle detection
  long duration;
  int distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  // 🔹 If obstacle detected
  if(distance < 20) {
    stopRobot();
    delay(500);
    turnRight();
    delay(500);
  }

  // 🔹 Bluetooth control
  if(Serial.available()) {
    command = Serial.read();

    if(command == 'F') forward();
    else if(command == 'B') backward();
    else if(command == 'L') left();
    else if(command == 'R') right();
    else if(command == 'S') stopRobot();
  }
}

// 🔧 Functions

void forward() {
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, HIGH);
  digitalWrite(motor2B, LOW);
}

void backward() {
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, HIGH);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, HIGH);
}

void left() {
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, HIGH);
  digitalWrite(motor2A, HIGH);
  digitalWrite(motor2B, LOW);
}

void right() {
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, HIGH);
}

void stopRobot() {
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, LOW);
}
