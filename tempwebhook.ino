// This #include statement was automatically added by the Particle IDE.
#include "Adafruit_DHT.h"

//int led = D7;  // The on-board LED
#define DHTPIN 5 
#define DHTTYPE DHT11

int temp;
DHT dht(DHTPIN, DHTTYPE);

void setup() {


	dht.begin();
}

void loop() {
    temp = dht.getTempFarenheit();
    Particle.publish("temp",String(temp), PRIVATE);
    delay(1000);
    
}