#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
main()
{     
      float a,b,c;
      int i,d,n,dummy;char ch;
      printf("+++++++++++++++++++++++++++++++++++++++");
      printf("         !!! CALCULATOR !!!\n");
      printf("+++++++++++++++++++++++++++++++++++++++");
      do{
	  printf("\nenter no. what you want\n");
      printf("1.add\n");																
      printf("2.subtraction\n");
      printf("3.multiply\n");
      printf("4.divide\n");
      printf("5.squareroot\n");
      printf("6.square\n");
      printf("7.exit\n");
      scanf("%d",&n);
switch(n)
   {
   case 1:printf("\nenter 1st and 2nd no.\n");
	  scanf("%f%f",&a,&b);
	  c=a+b;
	  printf("the addition is %.2f.\n",c);break;
   case 2:printf("\nenter 1st and 2nd no.\n");
	  scanf("%f%f",&a,&b);
	  c=a-b;
	  printf("\nthe subtraction is %.2f.\n",c);break;
  case 3: printf("\nenter 1st and 2nd no.\n");
	  scanf("%f%f",&a,&b);
	  c=a*b;
	  printf("the multiplication is %.2f\n",c);break;
  case 4: printf("\nenter 1st and 2nd no.\n");
	  scanf("%f%f",&a,&b);
	  c=a/b;
	  printf("the quotient is %.2f \n",c,d);break;
  case 5: printf("enter  no.\n");
	  scanf("%f",&a);
	  c=sqrt(a);
	  printf("the root is  %.2f.\n",c);break;
  case 6: printf("\nenter no.");
	  scanf("%f",&a);
	  c=a*a;
	  printf("\nthe square  is %.2f.\n",c); break;
  case 7: exit(0);
  default: printf("\n wrong input\n");break;
  }
  printf("do you want to enter more?\n y/Y for yes \n any key for no\n");   
    scanf("%d",&dummy);  
    scanf("%c",&ch);  
  }while(ch=='y'||ch=='Y');
 return 0;
}

