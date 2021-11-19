/*

*/

void setup() {
  Serial.begin(9600); 
  /*Why baud rate is 9600?
  The baud rate is the rate at which information is transferred in a communication channel.
  Baud rate is commonly used when discussing electronics that use serial communication.
  In the serial port context, "9600 baud" means that the serial port is
  capable of transferring a maximum of 9600 bits per second.
*/
}

void loop() {
 char val =  Serial.read();
 Serial.print(val);
}
