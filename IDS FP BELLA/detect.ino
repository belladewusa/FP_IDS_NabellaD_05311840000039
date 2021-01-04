// inialisasi pin sensor dan alarm/buzzer
const int pinApi = 8;
const int pinAlarm = 9;
const int pinLED = 10;
const int pinAsap = A0;
// inialisasi variabel data
int dataApi;
int dataAsap;
//Nilai threshold
int sensorThres = 600;


// ----------- program default/setting awal ----------- //
void setup()
{
 // inialisasi status I/O pin
 pinMode(pinApi, INPUT); // pin sebagai input
 pinMode(pinAsap, INPUT); // pin sebagai input
 pinMode(pinAlarm, OUTPUT); // pin sebagai output
 pinMode(pinLED, OUTPUT);
 Serial.begin(9600);
}

// ----- program utama, looping/berulang terus-menerus ----- //
void loop()
{
 // variabel data adalah hasil dari pembacaan sensor
 // berupa logic LOW/HIGH
 int dataApi = digitalRead(pinApi);
 int dataAsap = analogRead(pinAsap);
 
 //Serial.print("Pin A0: ");
 //Serial.println(dataAsap);


 // jika data pada sensor API bernilai logic LOW
 if (dataApi == LOW)
 {
 // alarm dinyalakan
 digitalWrite(pinAlarm,HIGH);
 digitalWrite(pinLED, HIGH);
 delay(2000);
 }

// jika data Analog pada sensor Asap lebih besar dari batas
 else if (dataAsap>sensorThres)
  {
    digitalWrite(pinLED, HIGH);
    tone(pinAlarm, 10, 3000); //tone( pin, frekuensi, durasi );
    delay(1000);     
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
