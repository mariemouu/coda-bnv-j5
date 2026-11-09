#include <stdio.h>

int add(int nb1, int nb2)
{
    int result = nb1 + nb2;
    return(result);
}

int main()
{
    int nombre_1;
    int nombre_2;

    printf("Donne un nombre :\n");
    scanf("%d", &nombre_1);
    printf("Donne un autre nombre :\n");
    scanf("%d", &nombre_2);

    int resultat = addition (nombre_1, nombre_2);
    printf("Resultat : %d\n", resultat);

    return(0);
}

