#ifndef CONFIG_H
#define CONFIG_H

// your wifi name
const char *ssid = "my_wifi";

// wifi passwd
const char *password = "password";

// mqtt server - where it should send the data
const char *mqtt_server = "broker.emqx.io";

// mqtt user account - username and passwd
const char *mqtt_user = "esp32_sensor";
const char *mqtt_pass = "your_password";

#endif
