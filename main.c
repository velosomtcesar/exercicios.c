#include <stdio.h>

int main() {

  float premioTotal;
  float valorTotalApostado;
  float aposta1, aposta2, aposta3;
  float premio1, premio2, premio3;

  float porc1, porc2, porc3;

  scanf("%f", &aposta1);
  scanf("%f", &aposta2);
  scanf("%f", &aposta3);

  valorTotalApostado = (aposta1 + aposta2 + aposta3);

  porc1 = (aposta1 / valorTotalApostado) * 100;
  porc2 = (aposta2 / valorTotalApostado) * 100;
  porc3 = (aposta3 / valorTotalApostado) * 100;

  printf("Porcentagens: %.2f %.2f %.2f\n", porc1, porc2, porc3);

  printf("Prêmio total: "); scanf("%f", &premioTotal);

  premio1 = (porc1/100) * premioTotal;
  premio2 = (porc2/100) * premioTotal;
  premio3 = (porc3/100) * premioTotal;

  printf("Prêmio 1: %.2f\n", premio1);
  printf("Prêmio 2: %.2f\n", premio2);
  printf("Prêmio 3: %.2f\n", premio3);
  
  return 0;
} 