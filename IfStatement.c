#include<stdio.h>

int main(int argc, char const *argv[])
{
    int age;

    printf("\nINGRESAR EDAD:");
    scanf("%d", &age);

    if(age < 18){
        printf("\nNO SE PUEDE CREAR LA CUENTA BANCARIA");
    }
    
    else{
        printf("\nCUENTA CREADA CON EXITO");
    }

    printf("\n\n");

    return 0;
}
