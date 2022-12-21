#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	int s=1,F=1;
	printf("bir N sayisi giriniz :");
	scanf("%d",&N);
	
	while (s<=N)
	{
		F = s * F;
		s++;
	}
	
	printf("N sayisinin faktoriyeli = %d",F);
	
	return 0;
}
