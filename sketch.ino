#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22
#define LEDPIN 8

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    digitalWrite(LEDPIN, LOW);
    Serial.println("Sensor Error");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.println(temperature);

  // TASK 1: Change the threshold to 38
  if (temperature >= 38) {
    digitalWrite(LEDPIN, HIGH);

    // TASK 2: Print a high temperature warning

  } else {
    digitalWrite(LEDPIN, LOW);
    Serial.println("Normal Temperature");
  }

  delay(2000);
}

