/* PROGRAM TO FIND THE FACTORIAL OF A GIVEN NUMBER */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{int n;
long fact(int n);
int facto;
clrscr();
printf("\n ENTER THE NUMBER : ");
scanf("%d",&n);
facto=fact(n);
printf("\n FACTORIAL OF %d  : %d",n,facto);
getch();}
long fact(int n)
{if((n==0)||(n==1))
return(1);
else
return(n*fact(n-1));}
/*
OUTPUT :

 ENTER THE NUMBER : 10

 FACTORIAL OF 10  : 24320
*/
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
