#include <stdio.h>
#include <string.h>
#define str_size 100

void main()
{
    char str[100], sstr[100];
    int pos, l, c = 0;

        printf("Input the string : ");
        fgets(str, sizeof str, stdin);

        printf("Input the position to start extraction :");
        scanf("%d", &pos);

        printf("Input the length of substring :");
        scanf("%d", &l);

        while(c < l)
        {
            sstr[c] = str[pos+c-1];
            c++;
        }
        sstr[c] = '\0';

        printf("The substring retrieve from the string is : \" %s\" ",sstr);

}
