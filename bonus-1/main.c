#include <stdio.h>
#include "operations.h"

int main()
{
    char operateur;
    int nombre_1;
    int nombre_2;

    printf("Bienvenue dans la mini calculatrice !\n");

    printf("Choisissez un opérateur (+, -, *, /, %%) :\n");
    scanf(" %c", &operateur);

    printf("Choisissez un premier nombre :\n");
    scanf("%d", &nombre_1);

    printf("Choisissez un second nombre :\n");
    scanf("%d", &nombre_2);

    if (operateur == '+')
    {
        int resultat = add(nombre_1, nombre_2);
        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    }
    else if (operateur == '-')
    {
        int resultat = subtract(nombre_1, nombre_2);
        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    }
    else if (operateur == '*')
    {
        int resultat = multiply(nombre_1, nombre_2);
        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    }
    else if (operateur == '/')
    {
        if (nombre_2 == 0)
        {
            printf("Impossible de diviser par 0\n");
        }
        else
        {
            float resultat = divide(nombre_1, nombre_2);
            printf("%d %c %d = %.2f\n", nombre_1, operateur, nombre_2, resultat);
        }
    }
    else if (operateur == '%')
    {
        if (nombre_2 == 0)
        {
            printf("Impossible de diviser par 0\n");
        }
        else
        {
            int resultat = modulo(nombre_1, nombre_2);
            printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
        }
    }
    else
    {
        printf("Opérateur non reconnu\n");
    }

    return 0;
}
