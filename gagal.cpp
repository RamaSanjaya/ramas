#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main ()
{

char ch;
cout<<"===============================\n";
cout<<"Selamat Datang di Form Login\n";
cout<<"===============================\n";

for(i=1;i<=3;i++){
string user = "";
string pass = "";
cout<<"Username:";cin>>user;
cout<<"Password:";

ch =_getch();
while(ch!=13){//character 13 is enter pass.push_back(ch);
cout<<'*';
ch=_getch();
}

if(user=="Rama Sanjaya"&&pass=="12345"){
cout<<"\n\nAnda Berhasil login.\n"<<endl;
return 0;
}else{
cout<<"\n\nMaaf Username & Password anda masukan salah.\n\n";
}
}
while(i<=3);

cout<<"Anda telah 3x memasukan Username & Password yang salah.\n";
cout<<"Mohon maaf akun anda kami blokir untuk sementara.\n";
cout<<"Silahkan hubungi kami melalui e-mail sanjayarama48@gmail.com, Terima Kasih.";
getch();
}
