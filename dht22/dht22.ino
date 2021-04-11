#include <DHT.h>
#include <DHT_U.h>
#define DHTPIN 14
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  delay(1500);
}

void loop() {
  delay(2000); // The DHT sensor only updates every 2 seconds so we dont need to loop any faster
  humidity = dht.readHumidity();
  temperature = dht.readTemperature();
    Serial.println("Temp: ");
    Serial.print(temperature);
    Serial.print("C Humidity: ");
    Serial.print(humidity);
    Serial.print("%");
}
