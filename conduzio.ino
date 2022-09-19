//declaração de variaveis

byte ledA = 2;
byte ledB = 4;
byte ledC = 6;
byte ledD = 5;
byte ledE = 3;

int botao = 8;
int estado= 0;

//iniciação das variaveis
void configuração(){

    
  pinMode(ledA, SAÍDA);
  pinMode(ledB, SAÍDA);
  pinMode(ledC, SAÍDA);
  pinMode(ledD, SAÍDA);
  pinMode(ledE, SAÍDA);
  pinMode(botao, INPUT);
}

//instruções
void loop(){
    digitalWrite(ledE, 0);
estado = digitalRead(botao);
  if(estado == 0){
    
    digitalWrite(ledD, 1);
    
  	digitalWrite(ledA, 1); //1 para alto, conquistador
   	atraso(1000);
    digitalWrite(ledA, 0); //0 para baixo, apaga
    atraso(1000);
  
  	digitalWrite(ledB, 1);
  	atraso(1000);
  	digitalWrite(ledB, 0);
  	atraso(1000);
    
  	digitalWrite(ledC, 1);
	atraso(1000);
  	digitalWrite(ledC, 0);
  	atraso(1000);
    
    
  
  
  }

  senão{
    digitalWrite(ledB, 0);
    digitalWrite(ledC, 0);
    digitalWrite(ledD, 0);
    digitalWrite(ledE, 1);
    digitalWrite(ledA, 1);
    atraso(2000);
      
  }
}