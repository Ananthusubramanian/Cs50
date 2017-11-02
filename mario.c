#include<stdio.h>

int main() 
{
    int n,j,l;
    scanf("%d", &n);
    
    
   for(int i=0;i<n;i++){
      
      
        for (j=n-i;j>1;j--)
        {
            printf(" "); 
        }
 
        for (l=1; l<=i+2;l++)
        {   
            printf("#"); 
        }

        printf("\n");
    }
    
   
return 0;
}
