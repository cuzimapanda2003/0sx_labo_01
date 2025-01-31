

#define LED_BUILDIN 13
int brightness = 255;
int fadeness = 17;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(LED_BUILDIN, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  
  light();

  blink();

  fade();

  dark();

}

void light()
{
Serial.println(" Allume - 2168637");

digitalWrite(LED_BUILTIN, HIGH); 
delay(2000);
}

void blink()
{
Serial.println("Clignotement – 2168637");
for(int i = 0; i < 3; i++){
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(250);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(250);   
}

 }

void fade() {

Serial.println("Variation – 2168637 »");
for(int j = 0; j < 15; j++){
   analogWrite(LED_BUILTIN, brightness);
    brightness = brightness - fadeness;

  delay(136);
}
}

void dark(){
  Serial.println("Éteint – 2168637");
  digitalWrite(LED_BUILTIN, LOW);  
delay(2000);
}







