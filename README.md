# Grade 9 Temperature Alert

A Smart Temperature Monitoring System. The LED will turn on when the temperature reaches the threshold **38°C**.

 [Wokwi Project](https://wokwi.com/projects/478633842103770113)

 Warning Threshold: 38°C
The code reads real-time temperature data from the DHT22 sensor and evaluates it using a conditional statement:

< 38°C → Normal temperature range; the LED remains OFF.

≥ 38°C → Elevated temperature; the LED turns ON to signal a warning.

## Parts
- Arduino Uno
- DHT22 temperature sensor
- Red LED
- 220Ω resistor
- Jumper wires

  ## Test Results

| Temperature | Expected LED | Result |
|---|---|---|
| 30°C | OFF | / |
| 37°C | OFF | / |
| 38°C | ON | / |
| 42°C | ON | / |
  ## Files

- `sketch.ino`: Arduino code
- `README.md`: documentation

  
