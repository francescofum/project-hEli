

const uint64_t pipe = 0xE8E8F0F0E1LL;
int joystick[2];
int throttle[1];


RF24 radio(8,10);

void configure_nRF24(){
  
  radio.begin();
  radio.openReadingPipe(1,pipe);
  radio.startListening();
  
}



