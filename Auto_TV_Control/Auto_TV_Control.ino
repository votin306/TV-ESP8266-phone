#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

IRsend irsend(D2);
#define BLYNK_PRINT Serial

char auth[] = "код который пришел на почту";
char ssid[] = "название WIFI";
char pass[] = "пароль Wifi";

void setup() {
  irsend.begin();
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
