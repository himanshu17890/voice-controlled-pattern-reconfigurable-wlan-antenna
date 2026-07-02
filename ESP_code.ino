#include <BluetoothSerial.h>
#include <SPI.h>
#include <RF24.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// OLED
Adafruit_SSD1306 display(128, 64, &Wire, -1);

// Bluetooth
BluetoothSerial SerialBT;

// NRF
RF24 radio(4, 5);
const byte address[6] = "00001";

// Relays
#define RELAY1 25
#define RELAY2 26

// Modes
String mode = "right";  // default

void setup() {
  Serial.begin(115200);
  SerialBT.begin("Smart_Antenna");

  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);

  digitalWrite(RELAY1, LOW);
  digitalWrite(RELAY2, LOW);

  // NRF
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_HIGH);
  radio.stopListening();

  // OLED
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED init failed");
  }

  display.clearDisplay();
  display.setTextColor(WHITE);

  // Startup Screen
  display.setTextSize(1);
  display.setCursor(0,20);
  display.println("Electronic Switch");
  display.setCursor(0,35);
  display.println("Based Antenna");
  display.display();

  Serial.println("System Starting...");
  delay(5000);

  display.clearDisplay();
  display.display();
}

void loop() {

  // Read Bluetooth
  if (SerialBT.available()) {
    String cmd = SerialBT.readString();
    cmd.trim();
    cmd.toLowerCase();

    Serial.print("Command: ");
    Serial.println(cmd);

    if (cmd == "left") {
      mode = "left";
      showDisplay("LEFT");
      Serial.println("Mode: LEFT");
    }
    else if (cmd == "right") {
      mode = "right";
      showDisplay("RIGHT");
      Serial.println("Mode: RIGHT");
    }
    else if (cmd == "center" || cmd == "centre") {
      mode = "center";
      showDisplay("CENTER");
      Serial.println("Mode: CENTER");
    }
    else {
      Serial.println("Invalid Command");
    }
  }

  // MODE EXECUTION

  if (mode == "left") {
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, LOW);
    sendRF("LEFT");
  }

  else if (mode == "right") {
    digitalWrite(RELAY1, LOW);
    digitalWrite(RELAY2, HIGH);
    sendRF("RIGHT");
  }

  else if (mode == "center") {
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, HIGH);
    sendRF("CENTER");
  }
}

// OLED DISPLAY
void showDisplay(String text) {
  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0,0);
  display.println("Smart Antenna");

  display.setTextSize(2);  
  display.setCursor(10,25);
  display.println(text);

  display.display();
}

// NRF SEND FUNCTION
void sendRF(const char* msg) {
  radio.write(msg, strlen(msg) + 1);
}