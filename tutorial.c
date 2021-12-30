#include <stdio.h>
#include <stdlib.h>

struct Persona{int edad; char inicialNombre;}; //LOS STRUCTS LLEVAN ; AL FINAL

int suma(int a, int b){
	return a + b;
}

int main(){
	printf("CASTING 3.14 A INT: %d\n", (int)3.14);
	
	int num = 15;
	int *pnum = &num;
	
	printf("VARIABLE ORIGINAL: %d\n", num);
	printf("PUNTERO CON DIRECCION: %p\n", pnum);
	printf("PUNTERO CON DATO: %d\n", *pnum);
	
	int num1 = 2;
	int num2 = 4;

	printf("SUMA: %d\n", suma(num1,num2));
	
	struct Persona persona1;
	persona1.edad = 26;
	persona1.inicialNombre = 'V';

	printf("%d\n",persona1.edad);
	printf("%c\n",persona1.inicialNombre);

	return 0;
}
