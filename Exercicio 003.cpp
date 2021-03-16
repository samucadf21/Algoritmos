//Receber 3 notas e calcular a media.
//entrada: 3 notas
//saida: media

#include<stdio.h>
int main(){
	
	double A, B, C, MEDIA;
	printf("Digite a primeira nota:\n");
	scanf ("%lf", &A);
	printf("Digite a segunda nota:\n");
	scanf ("%lf", &B);
	printf("Digite a terceira nota:\n");
	scanf ("%lf", &C);
	MEDIA = (A*2 + B*3 + C*5)/10;
		
	printf("Nota A %.1lf \n", A);
	printf("Nota B %.1lf \n", B);
	printf("Nota C %.1lf \n", C);
	printf(" \n");
	printf("Media: %.1lf", MEDIA);
	
	return 0;
}
