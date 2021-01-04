# Download the helper library from  https://www.twilio.com/docs/python/install

from twilio.rest import Client

# koneksiuno = serial.Serial('com3' ,9600)

# Your Account Sid and Auth Token from twilio.com/console

account_sid = 'ACcde4a1bb8cc7135a7113c8a14da42f80'

auth_token = 'd22f2e82c27b8c3fdbacd5b334e453fe'# Download the helper library from  https://www.twilio.com/docs/python/install
  
client = Client(account_sid, auth_token)

  
message = client.messages.create( body='segera cek , ada asap atau api terdeteksi',from_='whatsapp:+14155238886', to='whatsapp:+6282291452354')
  
print(message.sid)