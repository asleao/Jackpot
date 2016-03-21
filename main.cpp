#include <cstdlib>
#include <iostream>
#include <cstdio>

using namespace std;

/*The input set consists of a positive number N ≤ 10000 , that gives the length of the sequence, followed
by N integers. Each bet is an integer greater than 0 and less than 1000.
The input is terminated with N = 0.*/

int main()
{
	int betAmmount =-1;
	int bets[20];
	int maxWin = 0, auxWin = 0;

	while(betAmmount !=0){
	    	maxWin = 0, auxWin = 0;
	   	scanf("%d",&betAmmount); 	    	                                                                                   
		for (int i = 0; i < betAmmount; i++){		
			scanf("%d",&bets[i]);		
			if(bets[i]>0){
				if(maxWin == 0){
					maxWin = bets[i];	
				} else{
					if (bets[i] > maxWin){
						maxWin = bets[i];
					} else{
						auxWin += bets[i];
						if (auxWin > maxWin){
							maxWin = auxWin;
						}
					}

				}
			}				
		}		

		if(maxWin > 0){
			printf("The maximum winning streak is %d.\n", maxWin);	
		} else{
			if(betAmmount !=0){
				printf("Losing streak.\n");		
			}			
		}		
    	}	       
    return 0;
}
