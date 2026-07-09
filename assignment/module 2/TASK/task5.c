#include<stdio.h>
#include<conio.h>

int main()
{	
	printf("\npress 1 for pizza");
	printf("\npress 2 for burger");
	printf("\npress 3 for dahi-puri");
	printf("\npress 4 for tikhamora ");
	printf("\npress 5 for sevpuri");
	printf("\npress 6 for masala dosa");
	printf("\npress 7 for paubhaji");
	printf("\npress 8 for gulab-jamun ");
	printf("\npress 9 for brownie ");
	printf("\npress 10 for ice-gola ");
	printf("\npress 0 for stop ");
    
    int num;
    int qnt;
    int amount=0;

for(num=1; num<=10; num++)
   {
   
    printf("\n Press A number according to your choice : ");
	scanf("%d",&num);
    
     if (num==0)
     {
         break;
     }
    
        printf("\nEnter quantity of item that you choose : ");
	    scanf("%d",&qnt);
	     
	     if (qnt==0)
     {
         break;
    }
    


	if(num==1)
			{ 
			    amount+=qnt*100;
			}
	
		if(num==2)
			
			
			{
			    amount+=qnt*70;
			}

		if(num==3)
			{
			    amount+=qnt*60;
			}

		if(num==4)
			{
			    amount+=qnt*80;
			}

		if(num==5)
			{
			    amount+=qnt*50;
			}


		if(num==6)
			{
			    amount+=qnt*90;
			}


		if(num==7)
			{
			    amount+=qnt*70;
			}


		if(num==8)
			{
			    amount+=qnt*70;
			}


		if(num==9)
			{
			    amount+=qnt*150;

			}

		if(num==10)
			{
			    amount+=qnt*90;
			}
			
			
	}
	printf("Your Bill is : %d",amount);

	return 0;
}