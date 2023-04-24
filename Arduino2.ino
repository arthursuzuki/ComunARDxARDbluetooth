#include <SoftwareSerial.h>
void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);

}

void loop() {
  if (bluetooth.available()) { // Se houver dados disponíveis
    mensagem = bluetooth.readString(); // Lê a mensagem recebida
    Serial.print("Mensagem recebida: "); // Imprime uma mensagem de debug
    Serial.println(mensagem); // Imprime a mensagem recebida no monitor serial
  }