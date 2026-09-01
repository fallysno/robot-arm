#define STEP_PIN 6
#define DIR_PIN 7

void setup() {
  Serial.begin(9600);
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  digitalWrite(DIR_PIN, HIGH);
  Serial.println("Running");
}

void loop() {
  digitalWrite(STEP_PIN, HIGH);
  delayMicroseconds(500);
  digitalWrite(STEP_PIN, LOW);
  delayMicroseconds(500);
}