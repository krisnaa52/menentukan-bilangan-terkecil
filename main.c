/*Krisna Agustian
stt pelita bangsa*/
#include<stdio.h>
#include<conio.h>

int terkecil(int a, int b, int c);
int main()
{
    int a,b,c,x;
    printf("masukan bilangan 1 = "); scanf("%d",&a);
     printf("masukan bilangan 2 = "); scanf("%d",&b);
      printf("masukan bilangan 3 = "); scanf("%d",&c);
      x= terkecil(a,b,c);
      printf("bilangan terkecil adalah = %d",x);
    getch();
}
int terkecil(int a, int b, int c)
{
    int x;
    if (a<b && a<c){x=a;}
     if (b<a && b<c){x=b;}
      if (c<b && c<a){x=a;}
      return(x);
}


