int data;
int led1=7;
int led2=6;
void setup() {
  pinMode(led1,OUTPUT); 
  pinMode(led2,OUTPUT);
}
void loop() { 
  {
  if (Serial.available()){
   int data = Serial.read();
   delay(100);
   if(data=='A'){
     digitalWrite(led1,1);
     digitalWrite(led2,1);
   }
      if(data=='B'){
     digitalWrite(led1,0);
     digitalWrite(led2,1);
     
     
   }
        if(data=='C') {
          digitalWrite(led1,1);
          digitalWrite(led2,0);
         
        }
        
    
          
   delay(100);
  }}}
