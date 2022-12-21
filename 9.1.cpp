#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	printf("a sayisi giriniz :");
	scanf("%d",&a);
	printf("b sayisi giriniz :");
	scanf("%d",&b);
	printf("c sayisi giriniz :");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("a en buyuk sayidir.");
	}
	else 
		if(b>a && b>c)
		{
			printf("b en buyuk sayidir.");
		}
		else
			printf("c en buyuk sayidir.");
			
		return 0;
}
