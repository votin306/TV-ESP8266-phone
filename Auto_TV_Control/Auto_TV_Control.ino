#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

IRsend irsend(D2);
#define BLYNK_PRINT Serial

char auth[] = "tii3OGxe8_uQ46jjapLPLYblJK9caY9U";
char ssid[] = "ASUS_60";
char pass[] = "3369aef687cd";

void setup() {
  irsend.begin();
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
