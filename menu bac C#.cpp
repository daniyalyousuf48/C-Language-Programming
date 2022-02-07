#include <stdio.h>
int main(){	
		printf("---------------------------------Menu---------------------------------\n");
		printf("No Items						                   Prices\n");
		
		printf("1) Sausage						                   Rs:220\n");
		printf("2) Cheese and Mushroom Omelet				       Rs:50\n");
		printf("3) Paratha						                   Rs:25\n");
		printf("4) French Toast						               Rs:45\n");
		printf("5) Coffee						                   Rs:120\n");
		printf("6) Tea							                   Rs:40\n");
		printf("7) Pan cake with Nutella serving			       Rs:395\n");
		
		char s1[10];
		int Od;
		int Q;
	
		
		printf( "\ncustomer name: ");
		scanf("%s", &s1);
		
	    printf(	"\nWhat is your order no: ");
		scanf("%d", &Od);
		
		printf("\nEnter your quantity: ");
		scanf("%d", &Q);
		
		
		
		printf( "============================\n");
		printf( "\nYour name is : %s", s1 );
		printf("\nYour quantity is : %d", Q);
			
			if (Od== 1){
					printf("\nYour Order Is Sausage and Total Price is : %d", 220*Q );
			}else if (Od== 2){
					printf("\nYour Order Is Cheese and Mushroom Omelet and Total Price is : %d", 50*Q);
			}else if (Od== 3){
					printf("\nYour Order Is Paratha and Total Price is : %d", 25*Q);
			}else if (Od== 4){
					printf("\nYour Order Is French Toast and Total Price is : %d", 45*Q);
			}else if (Od== 5){
					printf("\nYour Order Is coffe and Total Price is : %d", 120*Q);
			}else if (Od== 6){
					printf("\nYour Order Is Tea and Total Price is : %d", 40*Q);
			}else if (Od== 7){
					printf("\nYour Order Is Pan cake with Nutella serving and Total Price is : %d", 395*Q);
			}else{
				printf("Not Avaliable");
			}
		
	return 0;
}
	
	
		

