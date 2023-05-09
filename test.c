#include<stdio.h>

void printSquares(int N, int M)
{
	if(N == M)
	{
		printf("%dx%d ", N, M);
	}
	else
	{
		if(N>M)
		{
			while(N>M)
			{
				printf("%dx%d ", M, M);
				N -= M;
			}
			printSquares(M, N);
		}
		else
		{
			while(M>N)
			{
				printf("%dx%d ", N, N);
				M -= N;
			}
			printSquares(N, M);
		}
	}	
}

int main()
{
	int N = 0, M = 0;
	printf("Enter length and breadth of a rectangle: ");
	scanf("%d %d",&N, &M);
        printf("Possible squares are:\n");
	printSquares(N,M);
	printf("\n");
	return 0;
}	
	
