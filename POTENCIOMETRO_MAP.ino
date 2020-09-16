/**
 * Criado por Paçoca Tech
 * 
 * Youtube: https://www.youtube.com/channel/UCW6OP5j28zFsnKxpQ2v9CsA
 * Instagram: http://instagram.com/pacocatech
 * Github: http://github.com/pacocatech
 * E-mail: pacocatech@gmail.com
 * 
 * 
 * Leitura básica do potenciometro e conversão de dados com função MAP
 * 
 * Mais sobre a função MAP: https://www.arduino.cc/reference/pt/language/functions/math/map/
 */
void setup() {
  //iniciando o monitor serial
  Serial.begin(9600);

  //definindo que iremos utilizar a porta analógica 1 para leitura dos dados do potenciometro
  pinMode(A1, INPUT);
}

void loop() {

  //efetuamos a leitura do potenciometro adicionado na porta A1
  int valorPotenciometro = analogRead(A1);

  //efetuamos a conversão do valor recebido
  valorPotenciometro = map(valorPotenciometro, 0, 1023, 0, 180);
  
  //Escrevemos o valor do potenciometro no monitor serial
  Serial.println(valorPotenciometro);
  
}
