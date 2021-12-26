#include <stdio.h>

int main(int argc, char const *argv[])
{
    //SWITCH = ALTERNATIVA MAS EFICIENTE QUE PONER MUCHOS ELSE IF
    int nota;

    printf("\nINGRESE LA NOTA DEL ALUMNO: ");
    scanf("%d", &nota);

    switch (nota) //RECIBE UN DATO Y SEGUN ESO DA UNA RESPUESTA DIFERENTE
    {
    case 10:
        printf("\nBUENA CAPO TE SACASTE UN 10!");
        break;

    case 4:
        printf("\nAPROBASTE CON LO JUSTO, UN 4");
        break;

    case 1:
        printf("\nDESAPROBASTE CON UN 1 NOOOO");
        break;

    default: //SI NO UCURRE NADA DE LO DE ARRIBA SE EJECUTA ESTO, ES COMO UN "ELSE"
        printf("\nNI IDEA CAPO NI GANAS DE PROGRAMAR LAS DEMAS NOTAS");
        break;
    }

    printf("\n\n");

    return 0;
}
