#include <stdio.h>
#include <conio.h>


int main() 
{
	
	int  sayi ,yuzb,onb,birb  ;
	printf("3 basamakli bir sayi giriniz:");
	scanf("%d" , &sayi);
	yuzb=sayi/100;
	onb=sayi/10%10;
	birb=sayi%10;
	printf("%d\n%d\n%d\n" , yuzb, onb, birb);
	 

  

	
	getch();
}
