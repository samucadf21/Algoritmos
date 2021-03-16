/*Leia dois valores interiros e Calcule a somma entre eles
Entrada: Dois valores
Saida: resultado da soma  */

#include<stdio.h>
int main(){
	
	int A, B, SOMA;
	printf("Digite a letra A:\n");
	scanf ("%d", &A);
	printf("Digite a letra B:\n");
	scanf ("%d", &B);
	SOMA = A + B;
	//printf("%d + %d = %d", A, B, SOMA);
	printf("O Resultado da soma: %d", SOMA);
	
	return 0;
}
