# FINAL PROJECT IDS
# Nabella Desyawulansari
# 05311840000039

## IDE :

Untuk mendeteksi aktifitas mencurigakan atau aktifitas yang dianggap berbahaya kebanyakan orang akan berpikir jika itu berasal dari internal seperti jaringan computer. Padahal hal lain yang membahayakan bisa berasal dari lingkungan fisik dimana kita menyimpan database/server/dan peralatan lainnya yang dianggap sebagai sumber daya fisik seperti dalam pengoperasian jaringan computer. Jika semua itu tidak dilindungi tentu akan menyebabkan kerusakan fisik yang dapat menghambat operasional penggunaannya. Salah satu problem yang memungkinkan adalah kebakaran. Oleh karena itu dalam final project kali ini saya akan membawa topik tersebut. Output dari project ini berbentuk prototype


## ALAT DAN BAHAN :

1. Arduino Uno
2. Flame Sensor
3. MQ 2 ( Digunakan untuk Pendeteksi Asap)
4. Buzzer
5. LED
6. Resistor 470
7. Kabel Jumper Secukupnya (male-female , male-male)
8. Board
9. Kabel USB printer


## TUTORIAL :

1. Rangkai mq2 sensor , flame sensor, buzzer , LED , resistor, board dan Arduino dengan menghubungkannya menggunakan jumper .
  a. Pemasangan berturut-turut dihubungkan MQ2 (A0,GND,vcc) – Arduino (A0,GND,5V)
  b. Pemasangan  berturut-turut dihubungkan flame sensor (D0,GND,VCC) – arduino (8,GND,5V)
  c. Pemasangan  berturut-turut dihubungkan buzzer (+,-) – arduino (9,GND)
  Pemasangan LED (+, -) (10, GND)
2. Menyusun algoritma program menggunakan Bahasa C pada IDE Arduino di laptop agar alat berjalan sesuai input dan output yang diinginkan
3. Menyambungkan Arduino dengan laptop menggunakan kabel USB
4. Mendaftarkan akun twilio dan verifikasi WA
    a. Buka www.twilio.com.
    b. Daftar akun.
    c. Verifikasi nomor.
    d. Kemudian navigasikan ke chatbot SMS.
    e. Beri nama proyek .
    f. Buka WhatsApp.
    g. Aktifkan sandbox dengan masuk sandbox.
    h. Kemudian Anda akan diberi nomor WhatsApp dan kode, Anda harus mengirim SMS dengan kode itu ke nomor tersebut.
    i. Nomor Anda akan ditambahkan dan kemudian Anda harus pergi ke konsol dan menyalin SID Akun dan token autentikasi Anda.
5. Membuat program python dengan fasilitas twilio untuk mengirimkan notifikasi melalui WA
6. Install PySerial dan buat koneksi pada program python dengan arduino


## TESTING :

Dari hasil percobaan Ketika Arduino dihubungkan dengan laptop , lalu program di compile dan diupload maka seluruh sensor yang terhubung siap untuk menerima input . 
Ketika flame sensor diberikan input api , maka buzzer akan berbunyi dan LED akan menyala. 
Ketika MQ2 sensor diberikan input berupa asap, maka buzzer akan berbunyi dan LED akan menyala.
Ketika tidak ada input yang didekatkan dengan sensor maka buzzer dan LED akan mati.

ketika testing menggunakan serial monitor, maka output yang ditampilkan dilengkapi dengan notifikasi adanya api ataukah asap. jika asap yang terdeteksi, maka outputnya diikuti dengan hasil pengukuran kepekatannya.
ketika testing menggunakan python agar notifikasi terkirim melalui whatsapp , maka output notifikasi sama seperti pada serial monitor tersebut.

