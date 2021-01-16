#import paket
# Download the helper library from https://www.twilio.com/docs/python/install
from twilio.rest import Client
import serial #menggunakan paket/modul pyserial
import time

#membuat koneksi serial komunikasi dengan mendeteksi arduino melalu port COM3 dengan baudrate 9600 (sama dengan yang digunakan arduino)
#bautrate - seberapa cepat COM port beroperasi
#Port - nama port yang digunakan 
ser = serial.Serial('COM3', 9600) 

## SID dan Token Autentikasi Akun Twilio Anda dari Konsol Twilio
account_sid = 'ACcde4a1bb8cc7135a7113c8a14da42f80'
auth_token = '94f7982eebe8e9fd694d86bca572df80'
client = Client(account_sid, auth_token)

while True:
    while ser.inWaiting(): # menahan bytes di buffer
        cek = ser.readline().decode() #membaca baris data (byte string) dari serial port
        messageTosend="bahaya nih "+str(cek)
        message = client.messages.create(
                              body=messageTosend, 
                              from_='whatsapp:+14155238886', #nomor dari akun twilio
                              to='whatsapp:+6282291452354' #nomor tujuan untuk notif
                          )
        time.sleep(1) #wait (sleep) 1 second

print(message.sid)
