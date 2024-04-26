#include <WiFi.h>
#include <Arduino.h>
#include <PubSubClient.h>
#include <LiquidCrystal_I2C.h>
#include <ArduinoJson.h>


//Wifi credentials
const char* ssid = "IoTExperiment";
const char* password = "iotexperiment303ab";
//mqtt credentials
const char* mqtt_server = "mqtt.iotserver.uz"; // MQTT broker address
const int mqtt_port = 1883; // MQTT broker port
const char* mqtt_username = "userTTPU"; // Your unique MQTT username
const char* mqtt_password = "mqttpass"; // Your unique MQTT username
//mqtt client unique ID
const char *mqtt_cleint_id = "ttpuIoTwiebeer"
//mqtt topics
const char *globalLedTopic = "ttpu/iot/global/led"
const char *btnPressTopic = "ttpu/iot/wiebeer/led"
//pinouts
const int redPin = 32;
const int yellowPin = 33;
const int greenPin = 25;
const int buttonPin = 25;