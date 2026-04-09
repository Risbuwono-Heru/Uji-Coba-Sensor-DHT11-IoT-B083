# Uji-Coba-Sensor-DHT11-IoT-B083
Proyek ini merupakan hasil praktikum pembacaan sensor DHT11 menggunakan board ESP8266. Data suhu dan kelembapan ditampilkan pada OLED serta dapat diakses melalui web server.

## Fitur
- Membaca suhu dan kelembapan dari sensor DHT11
- Menampilkan data pada OLED SSD1306
- Menyediakan tampilan web server
- Menampilkan status koneksi WiFi
- Retry koneksi WiFi otomatis

## Komponen
- ESP8266
- Sensor DHT11
- OLED SSD1306
- Kabel jumper
- Breadboard

## Library yang digunakan
- ESP8266WiFi
- ESP8266WebServer
- Wire
- Adafruit_GFX
- Adafruit_SSD1306
- DHT

## Cara kerja
1. ESP8266 terhubung ke WiFi
2. Sensor DHT11 membaca suhu dan kelembapan
3. Data ditampilkan pada OLED
4. Data juga ditampilkan melalui web server

## File utama
- `Uji_Coba_Sensor_DHT11.ino`

## Catatan
Sebelum upload program, sesuaikan SSID dan password WiFi pada kode.
