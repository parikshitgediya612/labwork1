#include<stdio.h>
#include<conio.h>
main()
{
    int a=15,b=17,c=20;
    clrscr();
    if(a>b)
    {
	if(a>c)
	{
	    printf("a is maximum");
	}
	else
	{
	    printf("c is maximum");
	}
    }
    else
    {
	if(b>c)
	{
	    printf("b is maximum");
	}
	else
	{
	    printf("c is maximum");
	}
    }
  getch();
}