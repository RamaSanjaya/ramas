#include <iostream.h>
#include <stdio.h>
#include <conio.h>

main()
{

int a,b;
char lagi;
atas:
clrscr();
cout<<"Masukkan Bilangan=";
cin>>a;
b=a%2;
printf("Nilai%d%%2 adalah=%d",a,b);
printf("\n\nlngin Hitung Lagi[Y/T]:");
lagi=getche();
if(lagi=='Y'||lagi=='y')
goto atas;
getch();
}