#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string new = GetString();
    
    printf("%c", toupper(new[0]));
    n = strlen(new);
    for(int i = 0; i<n; i++) {
       
       if(new[i] == ' ' && new[i+1] != '\0') {
        printf("%c", toupper(new[i+1]));
        i++;
       }
   }
  
}
