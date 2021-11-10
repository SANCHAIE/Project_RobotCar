#include <ESP8266_Lib.h>

#define BLYNK_PRINT Serial
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>

char auth[] = "usDk7mSVLg_gugfGavOyugs5zLS5QY6A";

char ssid[] = "oppof11pro";
char pass[] = "sttcr2001";

#include <SoftwareSerial.h>
SoftwareSerial EspSerial(2, 3); // RX, TX

#define ESP8266_BAUD 9600

ESP8266 wifi(&EspSerial);

void setup()
{
  // Debug console
  Serial.begin(9600);

  // Set ESP8266 baud rate
  EspSerial.begin(ESP8266_BAUD);
  delay(10);

  Blynk.begin(auth, wifi, ssid, pass);
}

void loop()
{
  Blynk.run();
}
