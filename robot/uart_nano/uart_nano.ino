void setup() {

  pinMode(LED_BUILTIN, OUTPUT);      // set LED pin as output

  digitalWrite(LED_BUILTIN, LOW);    // switch off LED pin


  Serial.begin(9600);            // initialize UART with baud rate of 9600

}

void loop() {
  while (Serial.available() >= 0) {
    char receivedData = Serial.read();   // read one byte from serial buffer and save to receivedData

    if (receivedData == '1') {
      digitalWrite(LED_BUILTIN, HIGH); // switch LED On
    }
    else if (receivedData == '2') {
      digitalWrite(LED_BUILTIN, LOW);  // switch LED Off
    }
  }
}