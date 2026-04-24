#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
// daftar NPM
String npm[] = {

"NPM: 23083010017",
"NPM: 23083010057",
"NPM: 23083010091",
"NPM: 23083010104"
};
int totalNPM = 4;
void setup() {
Wire.begin(4,5); // SDA = D2 , SCL = D1
if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)){
for(;;);
}
display.clearDisplay();
}
void loop() {
// tampilkan judul
display.clearDisplay();
display.setTextSize(2);
display.setTextColor(WHITE);
display.setCursor(5,5);
display.println("SMART");
display.setCursor(15,25);
display.println("ID CARD");
display.display();
delay(2000);
// tampilkan NPM satu per satu
for(int i=0; i<totalNPM; i++){
display.clearDisplay();

display.setTextSize(1);
display.setCursor(15,5);
display.println("SMART ID CARD");
display.setTextSize(2);
display.setCursor(0,30);
display.println(npm[i]);
display.display();
delay(2000);
}
}