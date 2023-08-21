#include <stdio.h>

int main()
{
    int x,y;
    char str[100];

    printf("\nPlease enter a string: \t");
    gets(str);

    printf("\nPlease choose a option:\n");
    printf("\n1. Encryption\n");
    printf("\n2. Decryption\n");
    scanf("%d", &y);

    switch (y) 
    {
    case 1:
        for ( x = 0; (x<100 && str[x] != '\0'); x++)
        {
            str[x]+=3;
        }
        printf("\nEncrypted value: %s\n", str);
        break;

    case 2:
        for ( x = 0; (x<100 && str[x] != '\0'); x++)
        {
            str[x]-=3;
        }
        printf("\nDecrypted value: %s\n", str);
        break;
    
    default:
        printf("\nError!");
        break;
    }
    return 0;
}
