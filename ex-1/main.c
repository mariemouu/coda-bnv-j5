#include <stdio.h>

void print_str(char *str)
{
    printf("%s", str);
}

int main()
{
    char *message = "coucou !\n";

    print_str(message);
    return(0);
}

