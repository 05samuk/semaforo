int vermelho = 3;
int amarelo = 4;
int verde = 5;
int tempo_intermitente = 1000;
int botao = 2;

int pedestre_vermelho = 7;
int pedestre_verde = 6;


void setup(){
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(botao, INPUT);
  pinMode(pedestre_vermelho, OUTPUT);
  pinMode(pedestre_verde, OUTPUT);
  
  digitalWrite(amarelo, HIGH);
  delay(550);
  digitalWrite(amarelo, LOW);
  delay(550);
  digitalWrite(amarelo, HIGH);
  delay(550);
  digitalWrite(amarelo, LOW);
  delay(550);
  digitalWrite(amarelo, HIGH);
  delay(550);
  digitalWrite(amarelo, LOW);
  delay(550);   
}

void loop(){
  
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay(5000);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  
  digitalWrite(7, HIGH);
  digitalWrite(5, HIGH);
  delay(5000);
  digitalWrite(5, LOW);
  
  digitalWrite(4, HIGH);
  delay(5000);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
   
}