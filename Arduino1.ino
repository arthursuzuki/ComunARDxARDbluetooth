#include <SoftwareSerial.h>
#define botaor 4
#define botaog 6
#define botaoy 5
int ag = 0;
int ay = 0;
int ar = 0;
int estadobotao = 0;
SoftwareSerial bluetooth(9,8);
void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);
  pinMode(botaoy, INPUT); // define o pino do botao como entrada
  pinMode(botaor, INPUT);
  pinMode(botaog,INPUT);
}
void loop() {
  if (bluetooth.available()) {
    Serial.write(bluetooth.read());
  }
  if (Serial.available()) {
    bluetooth.write(Serial.read());
  }
  ag=(digitalRead(botaog));
  ar=(digitalRead(botaor));
  ay=(digitalRead(botaoy));
  if(ag==LOW){
    bluetooth.print("verde");
    delay(100);
  }
  if(ar==LOW){
    bluetooth.print("vermelho");
    delay("100");
  }
  if(ay==LOW){
    bluetooth.print("amarelo");
    delay(100);
  }
}