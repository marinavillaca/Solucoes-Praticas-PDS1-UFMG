/* Um estatístico lhe procurou pois precisa de uma implementação em C de funções de densidade de probabilidade de três distribuições: 
Cauchy padrão, Gumbel e distribuição de Laplace.

Exercício 1
Crie uma função que retorna a função de densidade de probabilidade  para cada uma dessas distribuições, de acordo com as fórmulas abaixo.
a) Cauchy padrão:
b) Gumbel:
c) Laplace:

Considere usar as funções exp(x) para calcular  e fabs(x) para calcular , ambas funções encontradas na biblioteca math.h. 

Exemplos:
fabs(-5.3) retorna 5.3 
exp(3) retorna a 

Além disso, considere que  ou então use a constante M_PI da biblioteca math.h. 
Por fim, note que além de , as funções podem ter outros parâmetros de entrada. 
A função densidade de probabilidade da distribuição de Laplace, por exemplo, tem como parâmetros de entrada entrada x, u, b.
*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592
#include "estatistica.h"

float cauchypadrao (float num){
	return 1/(PI*(1+(num*num)));
}

float gumbel (float x, float u, float b){
	float z = (x-u)/b;
	return ((1/b)* exp((-1)*(z+exp(z*(-1))))); 
}

float laplace (float x, float u, float b){

	return (1/(2*b))* exp(fabs((x-u)/b)*(-1)) ;
}

// Exercício 2
// Crie e compile um módulo que contenha as funções estatísticas implementadas no exercício anterior.

float cauchypadrao (float num);

float gumbel (float x, float u, float b);

float laplace (float x, float u, float b);

/*
Exercício 3

Implemente um programa que use o módulo criado do exercício anterior para calcular e exibir a função densidade de probabilidade nos seguintes pontos:

cauchy(x=-2) [resultado para conferência: 0.063662]
gumbel(x=0, $\mu$=0.5, $\beta$=2) [resultado para conferência: 0.177786]
laplace(x=-6, $\mu$=-5, $b$=4) [resultado para conferência: 0.097350]
*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592
#include "estatistica.h"

int main(){

	int xc = -2, xg = 0, xl = -6;
	int b_g=2, mu_l=-5, b_l=4;
	float mu_g = 0.5; 

	printf("Cauchy Padrao: %f\n", cauchypadrao(xc));
	printf("Gumbel: %f\n", gumbel(xg,mu_g, b_g));
	printf("Laplace: %f\n", laplace(xl,mu_l, b_l));

	return 0;
}
