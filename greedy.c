#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    
    int coins, money=0;
	  float bal;
   
    do
    {
        printf("How much change is owed?\n");
        bal = GetFloat();
	  }while (bal < 0);
	
    money = (int) round(bal * 100);
    money = money + money / 25;
    money =  money%25;
    coins = coins + money / 10;
    money = money%10;
    coins = coins + money / 5;
    money = money % 5;
    coins = coins+money;
	
   
    printf("%i\n", coins);
	
    return 0;
}
