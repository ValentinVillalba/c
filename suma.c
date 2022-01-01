#include <stdio.h>

int suma(int a, int b){
	return a + b;
}

int resta(int a, int b){
	return a - b;
}

int multiplicacion(int a, int b){
	return a * b;
}

int division(int a, int b){
	return a / b;
}

int main(){
	int num1;
        int num2;
	char tipo;

	printf("INGRESE EL TIPO DE CALCULO: ");
	scanf("%c",&tipo);
	printf("\n");

	printf("INGRESE EL PRIMER NUMERO: ");
	scanf("%d",&num1);
	printf("\n");

	printf("INGRESE EL SEGUNDO NUMERO: ");
	scanf("%d",&num2);
	printf("\n");

	switch(tipo){
		case 'S':
			printf("EL RESULTADO DE LA SUMA ES: %d\n", suma(num1,num2));
			break;
		case 'R':
			printf("EL RESULTADO DE LA RESTA ES: %d\n", resta(num1,num2));
			break;
		case 'M':
			printf("EL RESULTADO DE LA MULTI ES: %d\n", multiplicacion(num1,num2));
			break;
		case 'D':
			if(num2 == 0){
				printf("NO SE PUEDE DIVIDIR POR 0\n");
				break;
			}
			printf("EL RESULTADO DE LA DIV ES: %d\n", division(num1,num2));
			break;
		default:
			printf("TIPO ERRONEO\n");
			break;
	}

	return 0;
}
