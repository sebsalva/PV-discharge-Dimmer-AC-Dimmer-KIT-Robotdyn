#ifndef CONFIG
#define CONFIG

/**
 * MQTT credentials
 */


// #define MQTT_SEND true  //// set to false if not MQTT server is present ( automatic false on AP mode )---> configuration in web page --> to delete 01/23
//#define MQTT_USER ""   //// not used, use mqtt.json file  --> to delete 01/23
//#define MQTT_PASSWORD ""  //// not used, use mqtt.json file --> to delete 01/23

#define VERSION "Version 2023-01-19"

/// default configuration for Dimmer with Power supply and D1 Mini on the board ( default : D0 - D1 )
#ifdef  POWERSUPPLY
#define outputPin  D0
#define zerocross  D1 // for boards with CHANGEBLE input pins
//#define outputPin  4
//#define zerocross  5 // for boards with CHANGEBLE input pins
#endif

/*
/// default configuration for Dimmer with Power supply and D1 Mini on the board
#ifdef  POWERSUPPLY
#define outputPin  D6
#define zerocross  D5 // for boards with CHANGEBLE input pins
#endif
*/

//// configuration for Standalone boards ( personnalisation )
#ifdef  STANDALONE
#define outputPin  D5
#define zerocross  D6 // for boards with CHANGEBLE input pins
#endif

//// configuration for Dimmer with Power supply and D1 Mini on the board and need TTL USB ( https://fr.aliexpress.com/item/1005003365062050.html )
#ifdef  POWERSUPPLY2022
#define outputPin  4
#define zerocross  5 // for boards with CHANGEBLE input pins
/// Dallas
#define ONE_WIRE_BUS 12
#define GND_PIN 14
#define POS_PIN 02

#endif

#ifdef  SSR
#define JOTTA  D5 // for boards with CHANGEBLE input pins
#define ONE_WIRE_BUS D2 // dallas
#define GRIDFREQ 90 ///PWM frequency
#define outputPin  D0
#define zerocross  D1
#endif

//// Dallas Configuration for Dimmer with Power supply and D1 Mini on the board
#ifdef  POWERSUPPLY
#define ONE_WIRE_BUS D2 // previously D2 was not working on old robotdyn card
#endif

//// Dallas Configuration for Standalone boards ( personnalisation )
#ifdef  STANDALONE
#define ONE_WIRE_BUS D7
#endif

/// Trigger for temp limit in percent
#define TRIGGER 10   ///

//// pins for cooler
#define COOLER  D7   /// 0 : off  -> 1 : On --> need a dry contact or opto
#define TIMERDELAY 5 // delay before switch off

#define RELAY1 D3  // Spécial pour relay commandé
#define RELAY2 D8  //

#define LIMITRECO 2 // NB MQTT connection attempts then state_topic

#define TIMERPING 90 // delay during which a connection should be received.
                     //Otherwise stop

// nom mDNS pour accès http://xxx.local
#define M_DNS "dimmer1"

#endif
