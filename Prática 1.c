/*
Prática 1 
Exercício 1: Código do nome
Escreva um programa para imprimir o seu primeiro nome em código ASC. Se o seu nome for “Ana”, o seu programa deve imprimir “65 110 97”.
*/

#include <stdio.h>
int main(){

	// nome = Marina
	char c1 = 'M', c2 = 'a', c3 = 'r', c4 = 'i', c5 = 'n';
	printf("O meu nome (Marina) em codigo ASC eh: %d %d %d %d %d %d\n", c1,c2,c3,c4,c5,c2);
	return 0;
	}

/*
Prática 1 
Exercício 2: Troca de valores
Considere o programa abaixo:

#include <stdio.h>
void main() {
float a = 3.14159, b = 2.71828;
printf(“\nPI = %f”, b);
printf(“\nEULER = %f”, a);
}

Note que o programador trocou as variáveis que deveriam ser exibidas em cada printf. 
Assim, altere o programa acima de forma a corrigir o erro do programador. 
O problema é que o programador proibiu que você altere o que ele escreveu e também que digite os valores das constantes novamente. 
Então, faça isso (1) sem alterar nenhuma linha que o programador escreveu e (2) sem escrever novamente as constantes 3.14159 e 2.71828. 
Dica: troque os valores armazenados em cada variável.
*/

#include <stdio.h>
void main() {

	float a = 3.14159, b = 2.71828;
	float aux=0;

	aux = b;								// aux = 2.71 
	b = a;									// b = 3.1414
	printf("\nPI = %f", b); 				

	a = aux;
	printf("\nEULER = %f", a);

}

/*
Exercício 3: Conta Poupança
Uma conta poupança foi aberta com um depósito de R$789,54, com rendimentos de 0.56% de juros ao mês. 
No segundo mês, R$303,20 reais foram depositados nessa conta poupança. 
No terceiro mês, R$58,25 reais foram retirados da conta. 
Implemente um programa que imprime quanto haverá nessa conta no quarto mês.

Resposta: A conta terá R$1050,91 no quarto mês.
*/

#include <stdio.h>
int main(){

	float mes1, mes2, mes3, mes4;
	mes1 = 789.54;
	mes2 = mes1*1.0056 + 303.20; 
	mes3 = mes2*1.0056 - 58.25;  
	mes4 = mes3*1.0056;
	printf("%0.2f\n", mes4); 

	return 0;
	}

/*
Exercício 4: IMC
Brutus e Olívia foram ao médico, que disse a eles que ambos estão fora do peso ideal. 
Ambos discordaram veementemente da afirmação do médico. 
Para provar que estava certo, o médico mostrou o Índice de Massa Corporal (IMC) de ambos, considerando que Brutus tem 1,84m e pesa 122kg e que Olívia tem 1,76m e pesa 45kg. 
Implemente um programa para mostrar o IMC de Brutus e Olívia e qual é a quantidade mínima de quilos que Brutus e Olívia devem perder ou ganhar para atingirem um peso saudável segundo a classificação do IMC. 
Use a seguinte fórmula para cálculo do IMC:

IMC = peso / altura*altura

A tabela abaixo descreve a classificação para as faixas de IMC.

IMC - Classificação
< 16 Magreza grave
16 a < 17 Magreza moderada
17 a < 18.5 Magreza leve
18.5 a < 25 Saudável
25 a < 30 Sobrepeso
30 a < 35 Obesidade grau I
35 a < 40 Obesidade grau II (severa)
≥ 40 Obesidade grau III (mórbida)
*/

#include <stdio.h>
#include <math.h>
int main(){
	
	float imc_brutus, imc_olivia;

	imc_brutus = 122/(1.84 *1.84);
	imc_olivia = 45/(1.76*1.76);

	float ideal_olivia = (18.5*1.76*1.76)-(45);
	float ideal_brutus = (24.9*1.84*1.84)-(122);

	printf("O IMC do Brutus eh %.2f e precisa perder %.2f (kg)\n", imc_brutus, (-1)*ideal_brutus);
	printf("O IMC do Olivia eh %.2f e precisa ganhar %.2f (kg)", imc_olivia, ideal_olivia); 

	return 0;
}
