# Download the helper library from https://www.twilio.com/docs/python/install
from twilio.rest import Client
import serial
import time
ser = serial.Serial('COM3', 9600)

# Your Account Sid and Auth Token from twilio.com/console
account_sid = 'ACcde4a1bb8cc7135a7113c8a14da42f80'
auth_token = '2ad58fc2037cbb322785528df45f50d8'
client = Client(account_sid, auth_token)

while True:
    while ser.inWaiting():
        cek = ser.readline().decode()
        messageTosend="Alert!!! ada "+str(cek)
        message = client.messages.create(
                              body=messageTosend,
                              from_='whatsapp:+14155238886',
                              to='whatsapp:+6282291452354'
                          )
        time.sleep(1)


print(message.sid)
