#include <Arduino.h>
#include <WiFi.h>

/*ADD YOUR PASSWORD BELOW*/
const char *ssid = "main xfinity";
const char *password = "magistra59";

WiFiClient client;

/*
* Connect your controller to WiFi
*/
void connectToWiFi() {
//Connect to WiFi Network
   Serial.println();
   Serial.println();
   Serial.print("Connecting to WiFi");
   Serial.println("...");
   WiFi.begin(ssid, password);
   int retries = 0;
while ((WiFi.status() != WL_CONNECTED) && (retries < 15)) {
   retries++;
   delay(500);
   Serial.print(".");
}
if (retries > 14) {
    Serial.println(F("WiFi connection FAILED"));
}
if (WiFi.status() == WL_CONNECTED) {
    Serial.println(F("WiFi connected!"));
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}
    Serial.println(F("Setup ready"));
}

/*
 * call connectToWifi() in setup()
 */
void setup(){
Serial.begin (115200);
 connectToWiFi();
}

void loop() {
  // put your main code here, to run repeatedly:
}