//global timer variables
unsigned long previousMillis = 0;
//long interval = 4000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

}

void loop() {
  setTimer(3000);
}



void setTimer(long interval){
  
  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis > interval) {
   previousMillis = currentMillis;
   Serial.printf("Ticking every %i seconds\n",interval/1000); //3=interval
   
   Serial.println(previousMillis);   
  }
}
