#include <stdio.h>
#include <stdlib.h>
#include "claudio.h"
	
int main(int argc, char *argv[])
{
  int res,res2,res3;
  distanciaMessage();
  res = getDistancia();
  consumoMessage();
  res2 = getConsumo();
  cotacaoMessage();
  res3 = getCotacaoPosto();
  res = calcularValor(res, res2, res3);
  returnValue(res);

  
  
	return 0;
}
