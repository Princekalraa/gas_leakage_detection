const int gasPin = A0;
const int buzzerPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int gasValue = analogRead(gasPin);
  float voltage = (gasValue / 1024.0) * 5.0;
  
  Serial.print("Voltage: ");
  Serial.println(voltage);
  
  if (voltage > 1.0) {
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Gas Leakage Detected!");
  } else {
    digitalWrite(buzzerPin, LOW);
  }
  
  delay(1000);
}
