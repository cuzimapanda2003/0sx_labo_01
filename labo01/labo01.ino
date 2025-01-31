
#define LED_BUILDIN 13



void setup() {
  // put your setup code here, to run once:

  pinMode(LED_BUILDIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(" Allume - 2168637");
  light();

  Serial.print("Clignotement – 2168637");
  blink();

  Serial.print("Variation – 2168637")




}

void light(){
digitalWrite(LED_BUILTIN, HIGH); 
delay(2000);
}

void blink(){
  // avant dernier chiffre = 3 

for(int i = 0; i < 3; i++){
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(250);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(250);   
}
}
