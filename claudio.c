#include "claudio.h"

void distanciaMessage(){
  printf("###########################################\n");
  printf("DIGITE A DISTANCIA DA VIAGEM EM QUILOMETROS\n");
  printf("###########################################\n");
}

void consumoMessage(){
  printf("####################################\n");
  printf("DIGITE O CONSUMO DO CAMINHAO EM KM/L\n");
  printf("####################################\n");
}

void cotacaoMessage(){
  printf("#########################\n");
  printf("DIGITE A COTACAO DO POSTO\n");
  printf("#########################\n");
}

int getDistancia(){
  int distancia;
  scanf("%d",&distancia);
  return distancia;
}

int getConsumo(){
  int consumo;
  scanf("%d",&consumo);
  return consumo;
}

int getCotacaoPosto(){
  int cotacao;
  scanf("%d",&cotacao);
  return cotacao;
}

int calcularValor(int quilometrosInformados, int consumoCaminhao, int cotacaoPosto){
  int valor;
  valor = (cotacaoPosto/consumoCaminhao)*quilometrosInformados;
  return valor;
}

int returnValue(int value){
  printf("%d",value);
}
