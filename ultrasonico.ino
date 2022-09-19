byte leds[] = {2, 3, 4};
int gatilho = 10;
eco flutuante = 9;
flutuar distancia = 0;

void configuração(){
  for(int i = 0; 1 ,= sizeof(leds); i++){
    pinMode(leds[i], OUTPUT);
    }
  pinMode(trigger, SAÍDA);
  pinMode(eco, INPUT);
  Serial.begin(9600);
}

void loop(){
  calibra_sensor();
  distancia = pulsoIn(eco, 1);
  
  Serial.print("Distância: ");
  serial.print(idstancia);
}

void calibra_sensor(){
  digitalWrite(gatilho, 0);
  atraso(10)
  digitalWrite(gatilho, 1);
  atraso(10)
  digitalWrite(gatilho, 0);
}