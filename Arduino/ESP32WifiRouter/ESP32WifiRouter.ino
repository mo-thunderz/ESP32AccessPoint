// ---------------------------------------------------------------------------------------
//
// Code to connect ESP32 to a router (device used for tests: ESP32-WROOM-32D).
//
// Written by mo thunderz (last update: 05.12.2021)
//
// ---------------------------------------------------------------------------------------

#include <WiFi.h>                                     // needed to connect to setup an accesspoint

// SSID and password that are going to be used for the Access Point you will create -> DONT use the SSID/Password of your router:
const char* ssid = "TYPE_YOUR_SSID_HERE";
const char* password = "TYPE_YOUR_PASSWORD_HERE";

void setup() {
  Serial.begin(115200);                               // init serial port for debugging             
 
  WiFi.begin(ssid, password);
  Serial.println("Establishing connection to WiFi with SSID: " + String(ssid));
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.print("Connected to network with IP address: ");
  Serial.println(WiFi.localIP());
  
}

void loop() {
  // do something fun :-)
}
