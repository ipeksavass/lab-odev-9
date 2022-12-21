#include <stdio.h>
int main()
{
	int n,x,e,sum=0;
	printf("bir n sayisi giriniz :");
	scanf("%d",&n);
	e=n;
	for (;e>0;)
	{
		x = e % 10;
		sum = sum * 10 + x;
		e = e / 10;
	}
	if (sum == n)
	{
		printf("girdiginiz sayi bir polindrome sayidir");
	}
	else
	{
	printf("girdiginiz sayi bir polindrome sayi degildir");
	}
	return 0;
}
