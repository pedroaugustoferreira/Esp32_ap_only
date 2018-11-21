#include <Esp32_ap_only.h>


void setup() {
  Serial.begin(115200);
  // Connect to Wi-Fi network with SSID and password
  Serial.print("Setting AP (Access Point)…");
  // Remove the password parameter, if you want the AP (Access Point) to be open
 wifi_ap("w2017","123456789");

}

void loop() {
  

}
