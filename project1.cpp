#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;
main()
{
int bil1,bil2,n; char a;
long double hasil;
cout<<endl;
cout<<"\t\t\t\PROGRAM CALCULATOR"<<endl<<endl;
cout<<"pilih operator : "<<endl;
cout<<"                     ===================================="<<endl<<endl;
cout<<" Masukan bil 1\t\t= ";cin>>bil1;
cout<<"operator = tambah[+],kurang[-],kali[x],bagi[:] "<<endl;
cout<<" Masukan operator\t= ";cin>>a;
cout<<" Masukan bil 2\t\t= ";cin>>bil2;
if (a=='+')
 hasil = bil1+bil2;
else if (a=='-')
 hasil = bil1-bil2;
else if (a=='x')
 hasil = bil1*bil2;
else if (a==':')
 hasil = bil1/bil2;
else {printf("anda salah memasukan perintah");}
cout<<"\n\n Hasil \t\t\t= "<<hasil<<endl;
cout<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\tAnang pracetyo"<<endl;
getch();
system("pause");
}