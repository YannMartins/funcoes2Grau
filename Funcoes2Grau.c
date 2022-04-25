#include <stdio.h>
#include <math.h>

float Delta(float a, float b, float c){
	float delta;
	
	delta = b*b - 4*a*c;
	
	return delta;
}

float RaizX1(float a, float b, float delta){
	return (-b + sqrt(delta)) / (2*a);
}
 
float RaizX2(float a, float b, float delta){
	return (-b - sqrt(delta)) / (2*a);
}

int main(void){
	float a, b, c;
	float delta, x1, x2;
	
	printf("Digite o coeficiente a: ");
	scanf("%f", &a);
	printf("Digite o coeficiente b: ");
	scanf("%f", &b);
	printf("Digite o coeficiente c: ");
	scanf("%f", &c);
	
	delta = Delta(a, b, c);
	
	if(a == 0){
		printf("\nOs coeficientes nao formam uma equacao do segundo grau.\n");
		return 1;
	}if(delta < 0){
		printf("\nA equacao nao possui raizes reais.\n");
		return 2;
	}if(a > 0){
		printf("\nPrimeira raiz: %.2f\nSegunda raiz: %.2f\n", RaizX1(a, b, delta), RaizX2(a, b, delta));
		if(delta == 0){
			printf("\nRaiz unica: %.2f", RaizX1(a, b, delta));
		}
	}
	
	return 0;
}
