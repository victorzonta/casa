#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "Casa.h"

#define S D4 
#define G D2
#define Q D5
#define E D6

#define SSID ""
#define SENHA ""

ESP8266WebServer servidor;

void quarto(){
  digitalWrite(Q, HIGH);
}
void quartooff(){
  digitalWrite(Q, LOW);
}
void garagem(){
  digitalWrite(G, HIGH);
  }
void garagemoff(){
  digitalWrite(G, LOW);
  }
void escritorio(){
  digitalWrite(E, HIGH);
  }
void escritoriooff(){
  digitalWrite(E, LOW);
}
void sala(){
  digitalWrite(S, HIGH);
  }
void salaoff(){
  digitalWrite(S, LOW);
}
void casa(){
  digitalWrite(Q, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(S, HIGH);
  }
void casaoff(){
  digitalWrite(Q, LOW);
  digitalWrite(G, LOW);
  digitalWrite(E, LOW);
  digitalWrite(S, LOW);
}


void setup() {
 pinMode(S,OUTPUT);
 pinMode(G,OUTPUT);
 pinMode(Q,OUTPUT);
 pinMode(E,OUTPUT);

 WiFi.begin(SSID,SENHA);
Serial.begin(115200);

while(WiFi.status()!=WL_CONNECTED)//Enquanto a conexão não é realizada
{
  Serial.print(".");
  delay(500);
}

Serial.print("IP Address: ");
Serial.println(WiFi.localIP());//Ip onde tenho que me conectar

servidor.on("/quarto",quarto);
servidor.on("/quartooff",quartooff);
servidor.on("/garagem",garagem);
servidor.on("/garagemoff",garagemoff);
servidor.on("/escritorio",escritorio);
servidor.on("/escritoriooff",escritoriooff);
servidor.on("/sala",sala);
servidor.on("/salaoff",salaoff);
servidor.on("/casa",casa);
servidor.on("/casaoff",casaoff);
servidor.begin();
}

void loop() {
  servidor.send(200,"text/html", Casa);//Imprime a página web no servidor
  servidor.handleClient();  

}