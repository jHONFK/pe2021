#include <stdio.h>
#ifndef CLAUDIO_H_INCLUDED
#define CLAUDIO_H_INCLUDED

void distanciaMessage();
void consumoMessage();
void cotacaoMessage();
int getDistancia();
int getConsumo();
int getCotacaoPosto();
int calcularValor(int quilometrosInformados, int consumoCaminhao, int cotacaoPosto);
int returnValue(int value);


#endif

