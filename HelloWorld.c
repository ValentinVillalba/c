#include <stdio.h> //IMPORTAR CADENAS DE CARACTERES
#include <stdbool.h> //IMPORTAR BOOL
#include <string.h> //IMPORTAR STRINGS
#include <math.h> //FUNCIONES MATEMATICAS

int main() {

  //COMENTARIO

  /*
    COMENTARIO
    MULTI
    LINEA
  */

  //CREAR VARIABLES TIENE DOS PASOS:
  int x; //DECLARACION
  x = 300; //INICIALIZACION
  
  //TAMBIEN SE PUEDE HACER EN UNO:
  int y = 500;

  //TIPOS:
  int edad = 21;
  float flotante = 2.5;
  double doble = 2.1524367894912; //TIENE MAS PRECISION QUE FLOAT
  char caracter = 'C'; //VAN CON COMILLA SIMPLE, NUMEROS PUEDEN REPRESENTAR CARACTERES ASCII (-128 a +127)
  char nombre[] = "VILLAL"; //SIMULA UN STRING
  bool booleano = true;

  //CONSTANTE:
  const int NUMERO = 100; //ES BUENA PRACTICA ESCRIBIRLAS EN MAYUSCULA, NO SE PUEDEN MODIFICAR EN RUNTIME

  /*
    ESPECIFICADOR DE FORMATO: % (DEFINE Y DA FORMATO AL TIPO DE DATO PARA SER MOSTRADO)

    %c = CARACTER
    %s = STRING (CADENA DE CARACTERES)
    %f = FLOTANTE
    %lf = DOBLE
    %d = ENTERO (DECIMAL)
    
    %.1 = DECIMAL CON PRECISION
    %1 = MINIMO CAMPO DE ALCANCE
    %- = ALINEACION A LA IZQUIERDA
  */

  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("ITEM 1: $%.2f\n", item1);
  printf("ITEM 2: $%.2f\n", item2);
  printf("ITEM 3: $%.2f\n", item3);

  //FORMATO
  printf("ME LLAMO %s \n", nombre); //%s ES PARA CADENAS DE CARACTERES
  printf("TENGO %d AÑOS \n", edad); //%d ES PARA DECIMALES (Y PUEDE SER PARA BOOL)
  printf("ESTE ES EL LENGUAJE %c DE PROGRAMACION \n",caracter);
  printf("EL FLOTANTE ES: %f \n",flotante);
  printf("VERDADERO O FALSO: %d \n", booleano); //EN ESTE CASO SE USA %d PARA BOOL

  //GRILLA CREADA CON "ESCAPE SEQUENCES"
  //printf("1\t2\t3\n4\t5\t6\n7\t8\t9");

  //OPERADORES
  // + - * / % ++ --
  int numero1 = 5;
  int numero2 = 2;

  int resultado = numero1 - numero2;

  printf("EL RESULTADO DE LA RESTA ES: %d \n", resultado);

  resultado += numero1; //UNA VEZ DECLARADO YA NO HACE FALTA ESPECIFICAR EL TIPO DE DATO

  printf("LA SUMA ES: %d \n", resultado);

  //USER INPUT
  int age;
  char name[25]; //CANTIDAD DE BYTES PRE ASIGNADA

  printf("\nCUAL ES TU NOMBRE?:");
  //scanf("%s", name);
  fgets(name, 25, stdin); //CON ESTO SE PUEDEN LEER ESPACIOS EN BLANCO (VARIABLE, TAMAÑO, STANDAR INPUT)
  name[strlen(name)-1] = '\0'; //CANCELA LA NUEVA LINEA

  printf("\nCUANTOS AÑOS TENES?:");
  scanf("%d", &age);

  printf("\nBIENVENIDO %s \n",name);
  printf("TENES %d AÑOS \n",age);

  //FUNCIONES MATEMATICAS
  double A = sqrt(9); //RAIZ DE 9
  double B = pow(2, 4); //2 A LA 4
  int C = round(3.14); //REDONDEAR
  int D = ceil(3.14); //REDONDEAR HACIA ARRIBA
  int E = floor(3.99); //REDONDEAR HACIA ABAJO
  double F = fabs(-100); //VALOR ABSOLUTO
  double G = log(3); //LOGARITMO DE 3
  double H = sin(45); //SENO
  double I = cos(45); //COSENO
  double J = tan(45); //TANGENTE

  printf("\n\n");
  return 0;

}
