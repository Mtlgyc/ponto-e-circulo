#include "Ponto.h"
#include <stdio.h>

int main(){
  Ponto *p1, *p2, *p3;

  printf("Digite as coordenadas do primeiro ponto: ");
  float x1, y1;
  scanf("%f %f", &x1, &y1);
  p1 = pto_cria(x1, y1);

  printf("Digite as coordenadas do segundo ponto: ");
  float x2, y2;
  scanf("%f %f", &x2, &y2);
  p2 = pto_cria(x2, y2);

  p3 = pto_soma(p1, p2);
  printf("A soma dos pontos eh: (%.2f, %.2f)\n", p3->x, p3->y);

  p3 = pto_subtrai(p1, p2);
  printf("A subtra��o dos pontos eh: (%.2f, %.2f)\n", p3->x, p3->y);

  pto_distancia(p1, p2);
  printf("A distancia eh: %.2f", pto_distancia);
  pto_libera(p1);
  pto_libera(p2);
  pto_libera(p3);

  return 0;
}
