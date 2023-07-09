#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = malloc(sizeof(char) * 500);
    
    strcpy(str, "Hello World !");
    printf("%s\n", str);
    return 0;
}
