#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int c = 0, count[26] = {0}, x;

    printf("enter a string\n");
    gets(str);

    while(str[c] != '\0') {

        if(str[c] >= 'a' && str[c] <= 'z'){
            x = str[c] - 'a';
            count[x]++;
        }
        c++;
    }
    for(c = 0; c < 26; c++)
        printf("% c occurs %d times in the str. \n", c+'a', count[c]);
    return 0;
}
