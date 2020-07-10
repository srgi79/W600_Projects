#include <Arduino.h>
#include <W600WiFi.h>

#define LED1        PB_14
#define LED2        PB_15
#define LED_RED     PB_16
#define LED_GREEN   PB_17
#define LED_BLUE    PB_18

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_GREEN, HIGH);
  digitalWrite(LED_BLUE, HIGH);
  delay(30);
  Serial.println("TEST");
  Serial.begin(115200);    // Initialize the UART0 TX PA4 RX PA5
  delay(30);
}

// the loop function runs over and over again forever
void loop() {
  /////// GO ON //////////
  digitalWrite(LED1, LOW);
  delay(1000);
  digitalWrite(LED2, LOW);
  delay(1000);
  digitalWrite(LED_RED, LOW);
  delay(1000);
  digitalWrite(LED_GREEN, LOW);
  delay(1000);
  digitalWrite(LED_BLUE, LOW);
  delay(1000);
  /////// GO OFF //////////
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED2, HIGH);
  delay(1000);
  digitalWrite(LED_RED, HIGH);
  delay(1000);
  digitalWrite(LED_GREEN, HIGH);
  delay(1000);
  digitalWrite(LED_BLUE, HIGH);
  delay(1000);
}
