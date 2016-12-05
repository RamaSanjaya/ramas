#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <iomanip.h>

main()
{
int i;
char nama[5][20];
float nilai_1[5];
float nilai_2[5];
float hasil[5];
clrscr();

for(i=1;i<=2;i++)
{
cout<<"Data Ke - "<<i<<endl;
cout<<"Nama Siswa : "; gets(nama[i]);
cout<<"Nilai MidTest : "; cin>>nilai_1[i];
cout<<"Nilai Final : "; cin>>nilai_2[i];
hasil[i] = (nilai_1[i] * 0.40)+ (nilai_2[i] * 0.60);
cout<<endl;
}
cout<<"------------------------------------------"<<endl;
cout<<"No. Nama Siswa Nilai Nilai ";
cout<<"Hasil"<<endl;
cout<<" MidTest Final ";
cout<<"Ujian"<<endl;
cout<<"------------------------------------------"<<endl;
for(i=1;i<=2;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
cout<<setiosflags(ios::left)<<setw(10)<<nama[i];
cout<<setprecision(2)<<" "<<nilai_1[i];
cout<<setprecision(2)<<" "<<nilai_2[i];
cout<<setprecision(2)<<" "<<hasil[i]<<endl;
}
cout<<"------------------------------------------"<<endl;
getch();
}
