#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct film {     
  string nama;
  string tahun;
};

film daftar[10]; 
int n,i,pilih;  

int main () {
  A: 
  cout<<"\n====================\n";
  cout<<"         Movie\n";
  cout<<"======================\n";
  cout<<"1.Masukkan Daftar Film\n2.Tampilkan Data Film\n3.Keluar\n";
  cout<<"Masukkan Pilihan anda (1,2,3)= ";
  cin>>pilih;
  switch (pilih) { 
    case 1:
      cout<<"\n====================\n";
      cout<<"Masukkan banyak data : ";
      cin>>n;
      cout<<"Daftar Film :"<<endl;
      for (i=1; i<=n; i++) {
        cout<<"\nData ke- "<<i<<endl;
        cout<<"Nama film :";
        cin>>daftar[i].nama;
        cout<<"Masukkan Tahun :";
        cin>>daftar[i].tahun;
      }
      getch();
      goto A; 

    case 2:
      cout<<"\n====================\n";
      cout<<"Daftar Film : \n";
      cout<<"\n====================\n";
      for (i=1; i<=n; i++) {
        cout<<endl<<endl<<"Data Film ke-  "<<i<<endl;
        cout<<"Nama Film:"<<daftar[i].nama<<endl;
        cout<<"Tahun :"<<daftar[i].tahun<<endl;
      }
      cout<<"\n";
      getch();
      goto A;

    default:
      cout<<"\nSelamat Menonton"<<endl;
      break;
  }

}
