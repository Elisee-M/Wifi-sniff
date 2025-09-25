#include <ESP8266WiFi.h>

struct SnifferPacket {
  signed rssi;
  uint8_t mac[6];
};

void showMac(const uint8_t *mac) {
  for (int i = 0; i < 6; i++) {
    if (i > 0) Serial.print(":");
    Serial.printf("%02X", mac[i]);
  }
}

void snifferCallback(uint8_t *buf, uint16_t len) {
  if (len == 12) { // management frame header length
    struct SnifferPacket *snifferPacket = (struct SnifferPacket*) buf;
    Serial.print("RSSI: ");
    Serial.print(snifferPacket->rssi);
    Serial.print(" dBm, MAC: ");
    showMac(snifferPacket->mac);
    Serial.println();
  }
}

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();          // Ensure it doesn't connect anywhere
  wifi_set_promiscuous_rx_cb(snifferCallback);
  wifi_promiscuous_enable(1); // Start sniffing
  Serial.println("Sniffer started... brrrrrrr");
}

void loop() {
  delay(100);
}
