// inialisasi konstanta (hanya dapat dibaca) untuk pin sensor, LED,alarm/buzzer dimana terhubung ke arduino
const int pinApi = 8;
const int pinAlarm = 9;
const int pinLED = 10;
const int pinAsap = A0;
// inialisasi variabel data
int dataApi;
int dataAsap;
//Nilai threshold  (penentuan nilai ambang batas) 
//kadar PPM kepekatan asap 
int sensorThres = 600;


// program default/setting awal 
//berjalan sekali saat dimulai
void setup()
{
 // inialisasi status I/O pin 
 // setting agar pin2 sebagai I/O
 pinMode(pinApi, INPUT); // pin sebagai input
 pinMode(pinAsap, INPUT); // pin sebagai input
 pinMode(pinAlarm, OUTPUT); // pin sebagai output
 pinMode(pinLED, OUTPUT);

 //Inisialisasi komunikasi serial (baudrate) 
 //Set serial monitor pada baut 9600
 Serial.begin(9600);
}

// program utama, looping
//di jalankan berulang terus-menerus setelah setup() selesai
void loop()
{
 // variabel data adalah hasil dari pembacaan sensor
 // berupa logic LOW/HIGH
 dataApi = digitalRead(pinApi); //membaca pin 8
 dataAsap = analogRead(pinAsap); //membaca pin A0

 // jika data pada sensor API bernilai logic LOW
 // ada api yang terdeteksi
 if (dataApi == LOW)
 {
 // LED dan alarm dinyalakan
 digitalWrite(pinAlarm,HIGH); 
 digitalWrite(pinLED, HIGH);
 delay(2000); //pause 2000 milisecond = 2 second
Serial.print(" ada API !!! \n ");

 }

// jika data Analog pada sensor Asap lebih besar dari 600
 else if (dataAsap>sensorThres)
  {
    digitalWrite(pinLED, HIGH);
    tone(pinAlarm, 10, 3000); //tone( pin, frekuensi, durasi );
    delay(1000);   //pause 1000 milisecond = 1 second   
 Serial.print(" asap terdeteksi . PPM asap : ");
 Serial.println(dataAsap);
  }

 // jika data tidak bernilai logic LOW
 else
 {
  //Lampu Dimatikan
  digitalWrite(pinLED, LOW);
 // alarm dimatikan
 digitalWrite(pinAlarm, LOW);
 delay(2000);
 }
}
