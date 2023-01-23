#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#define max 100

using namespace std;

 int pil,pos=0,b,y;
 string nama[max];
 char loop;
 
 //Variabel Untuk Login
 	char kode[20],u[50],p[50];
    char str [100]="abcdefghijklmnopqrstuvwxyz1234567890";
	char karakter;


int main(){

   cout<<"<----SILAHKAN LOGIN UNTUK MEMULAI APLIKASI---->"<<endl;
   ulangi:
   cout<<"Username  : ";gets(u);
   cout<<"Password  : ";


   for(int a=0;a<50;a++){
       karakter=getch();

      if(karakter=='\r'){
			p[a]=0;
         break;
		}else if(karakter=='\b'){
			if(a!=0)
         cout<<"\b \b";
			p[a]=0;
			p[a-1]=0;
			a-=2;

         if(a<-1)a=-1;
         continue;
		}else if(strchr(strupr(str),karakter)-str<=35&&strchr(strupr(str),karakter)-str>=0){
      	cout<<"*";
         p[a]=karakter;
      }else if(strchr(strlwr(str),karakter)-str<=35&&strchr(strlwr(str),karakter)-str>=0){
      	cout<<"*";
         p[a]=karakter;
      }else{
         if(a>0){
           a-=1;
         }
      }
	}

   if((strcmp(u,"ajiw")==0)&&(strcmp(p,"predator3445")==0)){
      system("cls");
       cout<<"   <---ANDA TELAH BERHASIL LOGIN--->"<<endl;
       cout<<" ....................................."<<endl;
       goto lanjut;
   }else{
   system("cls");
   cout<<"        <---LOGIN....GAGAL--->    "<<endl;
   cout<<"===Silahkan Login Untuk Memulai APP===!"<<endl;
     goto ulangi;

   }
   
    lanjut:
    menu:
    cout<<"========================"<<endl;
    cout<<"MENU FITUR YANG TERSEDIA"<<endl;
    cout<<"========================"<<endl;
    cout<<"1. Tambah Nama"<<endl;
    cout<<"2. Tampilkan Nama"<<endl;
    cout<<"3. Edit Nama"<<endl;
    cout<<"4. Hapus Nama"<<endl;
    cout<<"5. Print Data Nama"<<endl;
    cout<<"6. Keluar"<<endl;
    cout<<"-----------------------"<<endl;
	cout<<"Masukan Kode menu :";
    cin>>pil;
if(pil==1){
	if(pos < max ){
	   system("cls");
	   cout<<"<---Anda Sekarang Masuk di menu Tambah--->"<<endl;
	   cout<<"------------------------------------------"<<endl;
	   cout<<"<---Data Masih Kosong--->"<<endl;
	    ulang:
	    if(pos > 0){
		system("cls");
		cout<<"<---Data Tersimpan--->"<<endl;
		 for(int a=0;a<pos;a++){
		 	cout<<a+1<<". "<<nama[a]<<endl;
		 } 
      }
	  
		cout<<"Input nama \t:";
	    cin>>nama[pos];
	    pos++;
	    if(pos > 0){
		system("cls");
		cout<<"<---Data Tersimpan--->"<<endl;
		 for(int a=0;a<pos;a++){
		 	cout<<a+1<<". "<<nama[a]<<endl;
		 }
      }
      
	   cout<<"Tambah lagi (y/t) :";
	   cin>>loop;
	   if(loop=='y'){
	   	system("cls");
	   	goto ulang;
	   }else{
	   	system("cls");
	   	 goto menu;
	   }
	  	
	  }else{
	  	system("cls");
	  	cout<<"<---Penyimpanan Penuh--->"<<endl;
	  	cout<<"Isikan y untuk ke menu :";
	    cin>>loop;
		goto menu;
		}
		
   }    

else if(pil==2){
	if(pos > 0){
		system("cls");
		cout<<"<---Data Tersimpan--->"<<endl;
		 for(int a=0;a<pos;a++){
		 	cout<<a+1<<". "<<nama[a]<<endl;
		 }
	 cout<<"Kembali ke menu ketik (y) :";
	 cin>>loop;
	 system("cls");
	 goto menu;
	}else{
	    system("cls");
		cout<<"<---Data Masih Kosong--->"<<endl;
		cout<<"Isikan (y) untuk kembali :";
	    cin>>loop;
		goto menu;
	}
	   	
}

else if(pil==3){
	system("cls");
	cout<<"<---Anda Sekarang Masuk di menu Edit---->"<<endl;
	cout<<"-----------------------------------------"<<endl;
	if(pos > 0){
		system("cls");
		cout<<"<---Data Tersimpan--->"<<endl;
		 for(int a=0;a<pos;a++){
		 	cout<<a+1<<". "<<nama[a]<<endl;
	   }
   }   
	
	lagi:
	cout<<"Edit data ke :";
	cin>>b;
	cout<<"Menjadi\t   :";
	cin>>nama[b-1];
if(pos > 0){
		system("cls");
		cout<<"<---Data Tersimpan--->"<<endl;
		 for(int a=0;a<pos;a++){
		 	cout<<a+1<<". "<<nama[a]<<endl;
		 }
	cout<<"Edit lagi (y/t) :";
	cin>>loop;
	  if(loop=='y'||loop=='Y'){
	  	goto lagi;
	  }else{
	  	system("cls");
	  	goto menu;
	  }
}

}

else if(pil==4){
	system("cls");
	cout<<"<---Anda Sekarang Masuk di menu Hapus ---->"<<endl;
	if(pos > 0){
		system("cls");
		cout<<"<---Data Tersimpan--->"<<endl;
		 for(int a=0;a<pos;a++){
		 	cout<<a+1<<". "<<nama[a]<<endl;
		 }
	lop:
	cout<<"Hapus Data Ke :";
	cin>>y;
	if(pos > 0){
		for(int x=y;x<pos;x++){
			nama[x-1]=nama[x];
		}
		pos--;
		
		if(pos > 0){
		system("cls");
		cout<<"<---Data Tersimpan--->"<<endl;
		 for(int a=0;a<pos;a++){
		 	cout<<a+1<<". "<<nama[a]<<endl;
	        }
	}
		cout<<"Hapus lagi (y/t):";
		cin>>loop;
        if(loop=='y'){
        	goto lop;
		}else{
			goto menu;
		}
	}
 }

}


else if(pil==5){
	system("cls");
	cout<<"<---Anda Sekarang Masuk di menu Print---->"<<endl;
}

else if(pil==6){
	system("cls");
	cout<<"<----Anda Telah Logout---->"<<endl;
}

else{
	system("cls");
		cout<<"<---Maaf, Fitur Tidah Tersedia--->"<<endl;
		cout<<"----------------------------------"<<endl;
	    cout<<"Isikan y untuk ke menu :";
	    cin>>loop;
		goto menu;
}
	

getch();

}






