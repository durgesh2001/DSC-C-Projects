#include <stdio.h>
#include <Windows.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    
    printf("           ---------------------\n");
    printf("           |      STOPWATCH     |\n");
    printf("           ---------------------\n\n\n");

       int h=0,m=0,s=0;
       printf("\n\n");
       while(1)
       {
       	printf("\r \t %d : %d : %d ",h,m,s);
       	s++;
       	Sleep(1000);
       	if(s==59)
       	{
       		m++;
       		s=0;
		   }
		   if(m==59)
		   {
		   	h++;
		   	m=0;
		   	s=0;
		   }
		   if(h==24)
		   {
		   	h=0;
		   	m=0;
		   	s=0;
		   }
	   }
       return 0;
}
