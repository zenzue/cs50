#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string str = GetString();
    printf("%c", toupper(str[0]));
   for(int i = 0, n = strlen(str); i < n; i++) {
       
       if(str[i] == ' ' && str[i+1] != '\0') {
        printf("%c", toupper(str[i + 1]));
        i++;
       }
   }
   printf("\n");
}

