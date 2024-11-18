#define BLYNK_TEMPLATE_NAME "ESP32"
#define BLYNK_AUTH_TOKEN "kUbgBkHKbnxr4Rfw2vGQcTjyn0b-ejXE"
#define BLYNK_TEMPLATE_ID "TMPL36LJJ4rwV"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
// WiFi Credentials
const char* ssid = "ROBOLIX";
const char* password = "asdfghjkl";

const int LED_Pin = 2;

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, password); 
  pinMode(LED_Pin, OUTPUT);
}

void loop()
{
  Blynk.run();
}
