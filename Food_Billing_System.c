// Food Billing System

#include<stdio.h>
main()
{
	int n,amt,q,total_amt=0;
	char ch;
	do
	{
		printf("\n\n\t---------------Menu-----------------");
		printf("\n\n\t 1.Pizza\t\tPrice = 180rs/pcs");
		printf("\n\n\t 2.Burger\t\tPrice = 100rs/pcs");
		printf("\n\n\t 3.Dosa\t\t\tPrice = 120rs/pcs");
		printf("\n\n\t 4.Idli\t\t\tPrice = 50rs/pcs");
	
		printf("\n\n\t Please Enter Your Choise: ");
		scanf("%d",&n);
	
		switch(n)
		{
			case 1:
				printf("\n\n\t You have selected Pizza.");				
				printf("\n\n\t Enter the quantity: ");
				scanf("%d",&q);
				amt=180*q;
				break;
			case 2:
				printf("\n\n\t You have selected Burger.");
				printf("\n\n\t Enter the quantity: ");
				scanf("%d",&q);
				amt=100*q;
				break;
			case 3:
				printf("\n\n\t You have selected Dosa.");
				printf("\n\n\t Enter the quantity: ");
				scanf("%d",&q);
				amt=120*q;
				break;
			case 4:
				printf("\n\n\t You have selected Idli.");
				
				printf("\n\n\t Enter the quantity: ");
				scanf("%d",&q);
				amt=50*q;
				break;
			default:
				printf("\n\n\t Invalid Choise.");
		}
		total_amt=total_amt+amt;
		
		printf("\n\n\t Amount : %d",amt);
		printf("\n\n\t Total Amount : %d",total_amt);
		printf("\n\n\t Do you Want place more order y/n: ");
		scanf("%s",&ch);
	}while(ch=='y');
	return(0);
	
	
	
}
