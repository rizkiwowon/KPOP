#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>


using namespace std;

void gotoxy(),kpop(),pertama(),kedua(),menu_utama(),header(),keluar(),keluar_langsung(),salah();
int nama(),login(),loading(),pil;

main()
{
    system("color 79");
    login();
    nama();
    while(3)
    {
        menu_utama();
        switch(pil)
        {
            case 1:
                pertama();
                break;

            case 2:
                kedua();
                break;

            case 3:
                keluar_langsung();
                break;

            default:
                salah();
                getch();
                break;
        }
    }
}


void gotoxy(int x, int y)       //fungsi untuk membuat titik kordinat
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	dwCursorPosition.X=x;
	dwCursorPosition.Y=y;
	hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void salah()
{
    gotoxy(40,22); cout<<"INPUT YANG ANDA MASUKAN SALAH!!!";
}

void kpop()				    //SUBPROGRAM nama kelompok
{
	gotoxy(35,4);  cout<<"============================================="<<endl;Sleep(300);
	gotoxy(35,5);  cout<<"| ||  //       ======      ==      ======   |"<<endl;Sleep(300);
	gotoxy(35,6);  cout<<"| || //       ||     |  ||    ||  ||     |  |"<<endl;Sleep(300);
	gotoxy(35,7);  cout<<"| ||<<    ==  ||=====   ||    ||  ||=====   |"<<endl;Sleep(300);
	gotoxy(35,8);  cout<<"| || ||       ||        ||    ||  ||        |"<<endl;Sleep(300);
	gotoxy(35,9);  cout<<"| || ||       ||           ==     ||        |"<<endl;Sleep(300);
	gotoxy(35,10); cout<<"============================================="<<endl;Sleep(300);
}

int login()
{
    string user, pass ;
    gotoxy(37,2);cout<<"  ==================================="<<endl;
    gotoxy(37,3);cout<<"  |          Silakan Login          |"<<endl;
    gotoxy(37,4);cout<<"  ==================================="<<endl;
    gotoxy(48,5);cout<<"-----------------"<<endl;
    gotoxy(48,5);cout<<" Username : ";
                  cin>>user;
    gotoxy(48,6);cout<<"-----------------"<<endl;
    gotoxy(48,6);cout<<" Password : ";
                  cin>>pass;


    if(user=="admin" && pass=="admin")
    {
                    gotoxy(48,7);cout<<"==Login Berhasil==";Sleep(1000);
        system("cls");
        loading();
    }
        else
        {
        gotoxy(36,7);cout<<"!!Login Gagal,Username atau Password Salah!!";Sleep(1000);
            system("cls");
            login();
        }

}

int loading()
{						//SUBPROGRAM fungsi untuk loading
    int n,j;
    for(n=0;n<45;n++)
    {
        gotoxy(50,5);cout<<"Please Wait ";
        gotoxy(35,6);cout<<"";
        for(j=0;j<n;j++)
        {
            cout<<"=";
        }

    system("cls");
    }

}

int nama()
{
    kpop();
	gotoxy(25,12);cout<<"Anggota Kelompok:\n";
	gotoxy(25,13);cout<<"\t   Rizki Windiawan          1810631170108\n";Sleep(300);  //Sleep untuk delay time
	gotoxy(25,14);cout<<"\t   Yayu Pratiwi H           1810631170186\n";Sleep(300);
	gotoxy(25,16);cout<<"Press any key to continue...";
	cin.get();
	getch();
}

void header()                  //SUBPROGRAM Header
{
    gotoxy(30,2);cout<<"=========================================================";
    gotoxy(30,3);cout<<"|||              WELCOME K-POP LOVERS                 |||";
    gotoxy(30,4);cout<<"|||     PEMESANAN KHUSUS UNTUK TIKET KONSER K-POP     |||";
    gotoxy(30,5);cout<<"=========================================================";
}

void menu_utama()  			    //SUBPROGRAM untuk main menu
{
    system("cls");
    header();
	gotoxy(40,6); cout<<"=================================";
	gotoxy(40,7); cout<<"|    M A I N     M E N U        |";
	gotoxy(40,8); cout<<"=================================";
    gotoxy(40,9); cout<<"|                               |";
	gotoxy(40,10);cout<<"| 1. List Konser/Jadwal/Paket   |";
    gotoxy(40,11);cout<<"|                               |";
    gotoxy(40,12);cout<<"|-------------------------------|";
    gotoxy(40,13);cout<<"|                               |";
	gotoxy(40,14);cout<<"| 2. Pembelian Tiket            |";
    gotoxy(40,15);cout<<"|                               |";
    gotoxy(40,16);cout<<"|-------------------------------|";
    gotoxy(40,17);cout<<"|                               |";
	gotoxy(40,18);cout<<"| 3. Exit                       |";
    gotoxy(40,19);cout<<"|                               |";
	gotoxy(40,20);cout<<"=================================";
	gotoxy(40,21);cout<<"Pilihan Anda : ";cin>>pil;
	fflush(stdin);

}

void pertama()
{
    system("cls");
    header();
    gotoxy(0,6); cout<<"====================================\n";
    gotoxy(0,7); cout<<"| NO.|   Konser  |  Jadwal Konser  |\n";
    gotoxy(0,8); cout<<"====================================\n";
    gotoxy(0,9); cout<<"|    |           | Siang Jam 11:00 |\n";
    gotoxy(0,10);cout<<"| 1. | NCT       | Sore  Jam 17:00 |\n";
    gotoxy(0,11);cout<<"|    |           | Malam Jam 23:00 |\n";
    gotoxy(0,12);cout<<"|----------------------------------|\n";
    gotoxy(0,13);cout<<"|    |           | Siang Jam 11:00 |\n";
    gotoxy(0,14);cout<<"| 2. | SNSD      | Sore  Jam 17:00 |\n";
    gotoxy(0,15);cout<<"|    |           | Malam Jam 23:00 |\n";
    gotoxy(0,16);cout<<"|----------------------------------|\n";
    gotoxy(0,17);cout<<"|    |           | Siang Jam 11:00 |\n";
    gotoxy(0,18);cout<<"| 3. | BLACKPINK | Sore  Jam 17:00 |\n";
    gotoxy(0,19);cout<<"|    |           | Malam Jam 23:00 |\n";
    gotoxy(0,20);cout<<"|----------------------------------|\n";
    gotoxy(0,21);cout<<"|    |           | Siang Jam 09:00 |\n";
    gotoxy(0,22);cout<<"| 4. | Hime-Hime | Sore  Jam 15:00 |\n";
    gotoxy(0,23);cout<<"|    |           | Malam Jam 16:00 |\n";
    gotoxy(0,24);cout<<"====================================\n";
    gotoxy(40,6);  cout<<"===============================================================================\n";
    gotoxy(40,7);  cout<<"| Paket Konser |    Harga    |                      Benefit                   |\n";
    gotoxy(40,8);  cout<<"|-----------------------------------------------------------------------------|\n";
    gotoxy(40,9);  cout<<"|              |             |                                                |\n";
    gotoxy(40,10); cout<<"| PLATINUM     | Rp1.000.000 | Tempat khusus,Totebag,Snack,Lightstick,T-Shirt |\n";
    gotoxy(40,11); cout<<"|              |             |                                                |\n";
    gotoxy(40,12); cout<<"|-----------------------------------------------------------------------------|\n";
    gotoxy(40,13); cout<<"|              |             |                                                |\n";
    gotoxy(40,14); cout<<"| GOLD         | Rp750.000   | Tempat khusus,Totebag,Snack,T-Shirt            |\n";
    gotoxy(40,15); cout<<"|              |             |                                                |\n";
    gotoxy(40,16); cout<<"|-----------------------------------------------------------------------------|\n";
    gotoxy(40,17); cout<<"|              |             |                                                |\n";
    gotoxy(40,18); cout<<"| SILVER       | Rp500.000   | Totebag,Snack,T-Shirt                          |\n";
    gotoxy(40,19); cout<<"|              |             |                                                |\n";
    gotoxy(40,20); cout<<"===============================================================================\n";
    gotoxy(0,25);cout<<"\nPress any key to back to the menu...";
	cin.get();
}

void kedua()
{
    long int ksr,wkt,klm,kls,jum,harga,menu_utama;
    char stj,nama[50];

    menu:
        system("cls");
        header();
        gotoxy(20,6);cout<<"Masukkan Nama Anda\t : ";cin>>nama;
        fflush(stdin);
        system("cls");

    klm:
        header();
        gotoxy(40,6); cout<<"================================="<<endl;
        gotoxy(40,7); cout<<"| NO.|      Jenis Kelamin       |"<<endl;
        gotoxy(40,8); cout<<"================================="<<endl;
        gotoxy(40,9); cout<<"| 1. |   Laki-Laki              |"<<endl;
        gotoxy(40,10);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,11);cout<<"| 2. |   Perempuan              |"<<endl;
        gotoxy(40,12);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,13);cout<<"| 3. |   Kembali                |"<<endl;
        gotoxy(40,14);cout<<"================================="<<endl;
        gotoxy(40,15);cout<<"Pilih [1-3]: ";cin>>klm;
        fflush(stdin);
        system("cls");
        if (klm<=2)
        {
            goto ksr;
        }
        else if  (klm==3)
        {
            goto menu;
        }
        else
        {
            gotoxy(40,16);cout<<"INPUT YANG ANDA MASUKAN SALAH !!!"<<endl;
            goto klm;
        }

    ksr:
        header();
        gotoxy(40,6); cout<<"================================="<<endl;
        gotoxy(40,7); cout<<"| NO.|         Konser           |"<<endl;
        gotoxy(40,8); cout<<"================================="<<endl;
        gotoxy(40,9); cout<<"| 1. |   NCT                    |"<<endl;
        gotoxy(40,10);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,11);cout<<"| 2. |   SNSD                   |"<<endl;
        gotoxy(40,12);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,13);cout<<"| 3. |   BLACKPINK              |"<<endl;
        gotoxy(40,14);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,15);cout<<"| 4. |   Hime-Hime              |"<<endl;
        gotoxy(40,16);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,17);cout<<"| 5. |   Kembali                |"<<endl;
        gotoxy(40,18);cout<<"================================="<<endl;
        gotoxy(40,19); cout<<"Pilih [1-5]: ";cin>>ksr;
        fflush(stdin);
        system("cls");
        if (ksr<=4)
        {
            goto wkt;
        }
        else if (ksr==5)
        {
            goto klm;
        }
        else
        {
            gotoxy(40,20);cout<<"INPUT YANG ANDA MASUKAN SALAH !!!"<<endl;
            goto ksr;
        }

    wkt:
        header();
        gotoxy(40,6); cout<<"================================="<<endl;
        gotoxy(40,7); cout<<"| NO.|          Waktu           |"<<endl;
        gotoxy(40,8); cout<<"================================="<<endl;
        gotoxy(40,9); cout<<"| 1. |   Siang                  |"<<endl;
        gotoxy(40,10);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,11);cout<<"| 2. |   Sore                   |"<<endl;
        gotoxy(40,12);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,13);cout<<"| 3. |   Malam                  |"<<endl;
        gotoxy(40,14);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,15);cout<<"| 4. |   Kembali                |"<<endl;
        gotoxy(40,16);cout<<"================================="<<endl;
        gotoxy(40,17);cout<<"Pilih [1-4]: ";cin>>wkt;
        fflush(stdin);
        system("cls");
        if (wkt<=3)
        {
            goto kls;
        }
        else if  (wkt==4)
        {
            goto klm;
        }
        else
        {
            gotoxy(40,18);cout<<"INPUT YANG ANDA MASUKAN SALAH !!!"<<endl;
            goto wkt;
        }

    kls:
        header();
        gotoxy(40,6); cout<<"================================="<<endl;
        gotoxy(40,7); cout<<"| NO.|          Kelas           |"<<endl;
        gotoxy(40,8); cout<<"================================="<<endl;
        gotoxy(40,9); cout<<"| 1. |   Platinum               |"<<endl;
        gotoxy(40,10);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,11);cout<<"| 2. |   Gold                   |"<<endl;
        gotoxy(40,12);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,13);cout<<"| 3. |   Silver                 |"<<endl;
        gotoxy(40,14);cout<<"|-------------------------------|"<<endl;
        gotoxy(40,15);cout<<"| 4. |   Kembali                |"<<endl;
        gotoxy(40,16);cout<<"================================="<<endl;
        gotoxy(40,17);cout<<"Pilih [1-4]: ";cin>>kls;
        fflush(stdin);
        system("cls");
        if (kls<=3)
        {
            goto psnn;
        }
        else if (kls==4)
        {
            goto klm;
        }
        else
        {
            gotoxy(40,18);cout<<"INPUT YANG ANDA MASUKAN SALAH !!!"<<endl;
            goto kls;
        }

    psnn:
    header();
    gotoxy(20,6);cout<<"Masukkan Jumlah Pemesanan   : ";cin>>jum;
    fflush(stdin);
    system("cls");
    header();
    gotoxy(20,7);cout<<"Jumlah Tiket Yang di Pesan : "<<jum<<" Tiket";
    {
        if (kls==1)
        {
            gotoxy(20,8);cout<<"Kelas Yang Dipilih         : Platinum";
            gotoxy(20,9);cout<<"Harga Satuan Tiket         : Rp 1.000.000";
        }
        else if (kls==2)
        {
            gotoxy(20,8);cout<<"Kelas Yang Dipilih         : Gold";
            gotoxy(20,9);cout<<"Harga Satuan Tiket         : Rp 750.000";
        }
        else if (kls==3)
        {
            gotoxy(20,8);cout<<"Kelas Yang Dipilih         : Silver";
            gotoxy(20,9);cout<<"Harga Satuan Tiket         : Rp 500.000";
        }
    }
    gotoxy(20,11);cout<<"====================================================";
    {
        if (kls==1)
        {
            harga=jum*1000000;
            gotoxy(20,12);cout<<"Total Harga = Rp"<<harga;
        }
        else if (kls==2)
        {
            harga=jum*750000;
            gotoxy(20,12);cout<<"Total Harga = Rp"<<harga;
        }
        else
        {
            harga=jum*500000;
            gotoxy(20,12);cout<<"Total Harga = Rp"<<harga;
        }
    }
    gotoxy(20,14);cout<<"Apakah Anda Setuju [Y/T]: ";cin>>stj;
    system("cls");

    if (stj=='y')
    {
        loading();
        goto rekap;
    }
    else
    {
        goto menu;
    }


    rekap:
    header();
    gotoxy(20,7);cout<<"===============================================================================";
    gotoxy(20,8);cout<<"                         TIKET KONSER YANG ANDA PESAN                          ";
    gotoxy(20,9);cout<<"-------------------------------------------------------------------------------";
    gotoxy(20,10);cout<<"Nama\t\t : "<<nama;

    switch(klm)
    {
        case 1:
        gotoxy(20,11);cout<<"Jenis Kelamin\t : Laki-Laki ";
        break;

        default:
        gotoxy(20,11);cout<<"Jenis Kelamin\t : Perempuan ";
        break;
    }

    switch(ksr)
    {
        case 1:
        gotoxy(20,12);cout<<"Konser\t\t : NCT ";
        break;

        case 2:
        gotoxy(20,12);cout<<"Konser\t\t : SNSD ";
        break;

        case 3:
        gotoxy(20,12);cout<<"Konser\t\t : BLACKPINK ";
        break;

        case 4:
        gotoxy(20,12);cout<<"Konser\t\t : Hime-Hime ";
        break;
    }

    switch(kls)
    {
        case 1:
        gotoxy(20,13);cout<<"Kelas\t\t : Platinum ";
        break;

        case 2:
        gotoxy(20,13);cout<<"Kelas\t\t : Gold ";
        break;

        default:
        gotoxy(20,13);cout<<"Kelas\t\t : Silver ";
    }

switch(ksr)
    {
        case 1:

            if(kls==1)
                {gotoxy(20,15);cout<<"Bonus per-Tiket\t : Tempat Khusus,Totebag,Snack,Lightstick,T-Shirt Eksklusif ";}
            else if(kls==2)
				{gotoxy(20,15);cout<<"Bonus per-Tiket\t : Tempat Khusus,Totebag,Snack,T-Shirt Eksklusif ";}
            else if(kls==3)
				{gotoxy(20,15);cout<<"Bonus per-Tiket\t : Totebag,Snack,T-Shirt Eksklusif ";}
            break;

        case 2:

            if(kls==1)
                {gotoxy(20,15);cout<<"Bonus per-Tiket\t : Tempat Khusus,Totebag,Snack,Lightstick,T-Shirt Eksklusif ";}
            else if(kls==2)
				{gotoxy(20,15);cout<<"Bonus per-Tiket\t : Tempat Khusus,Totebag,Snack,T-Shirt Eksklusif ";}
            else if(kls==3)
				{gotoxy(20,15);cout<<"Bonus per-Tiket\t : Totebag,Snack,T-Shirt Eksklusif ";}
            break;

        case 3:

            if(kls==1)
                {gotoxy(20,15);cout<<"Bonus per-Tiket\t : Tempat Khusus,Totebag,Snack,Lightstick,T-Shirt Eksklusif ";}
            else if(kls==2)
				{gotoxy(20,15);cout<<"Bonus per-Tiket\t : Tempat Khusus,Totebag,Snack,T-Shirt Eksklusif ";}
            else if(kls==3)
				{gotoxy(20,15);cout<<"Bonus per-Tiket\t : Totebag,Snack,T-Shirt Eksklusif ";}
            break;

        case 4:

            if(kls==1)
                {gotoxy(20,15);cout<<"Bonus per-Tiket\t : Totebang,Snack,Hardisk Eksternal berisi Koleksi Anime ";}
            else if(kls==2)
				{gotoxy(20,15);cout<<"Bonus per-Tiket\t : Totebag,Snack,Flashdisk berisi Koleksi Anime ";}
            else if(kls==3)
				{gotoxy(20,15);cout<<"Bonus per-Tiket\t : Totebag,Snack ";}
            break;
             }

switch(ksr)
    {
        case 1:
            if(wkt==1)
                {gotoxy(20,16);cout<<"Jadwal Konser Siang ";}
            else if(wkt==2)
				{gotoxy(20,16);cout<<"Jadwal Konser Sore ";}
            else if(wkt==3)
				{gotoxy(20,16);cout<<"Jadwal Konser Malam ";}
            break;

        case 2:

            if(wkt==1)
                {gotoxy(20,16);cout<<"Jadwal Konser Siang ";}
            else if(wkt==2)
				{gotoxy(20,16);cout<<"Jadwal Konser Sore ";}
            else if(wkt==3)
				{gotoxy(20,16);cout<<"Jadwal Konser Malam ";}
            break;

        case 3:

            if(wkt==1)
                {gotoxy(20,16);cout<<"Jadwal Konser Siang ";}
            else if(wkt==2)
				{gotoxy(20,16);cout<<"Jadwal Konser Sore ";}
            else if(wkt==3)
				{gotoxy(20,16);cout<<"Jadwal Konser Malam ";}
            break;

        case 4:

            if(wkt==1)
                {gotoxy(20,16);cout<<"Jadwal Konser Siang ";}
            else if(wkt==2)
				{gotoxy(20,16);cout<<"Jadwal Konser Sore ";}
            else if(wkt==3)
				{gotoxy(20,16);cout<<"Jadwal Konser Malam ";}
            break;
             }

    gotoxy(20,17);cout<<"Jumlah Tiket Yang Dipesan "<<jum<<endl;
    gotoxy(20,18);cout<<"-------------------------------------------------------------------------------"<<endl;
    gotoxy(20,19);cout<<"Total Harga     :                                                 Rp"<<harga<<",00"<<endl;
    gotoxy(20,20);cout<<"==============================================================================="<<endl;
    gotoxy(20,22);cout<<"Terimakasih Telah Memesan Tiket Pada Kami"<<endl;
    gotoxy(20,23);cout<<"Apakah Anda Ingin Memesan Tiket Lagi?[y/t] : ";cin>>stj;

    if (stj=='y'||stj=='Y')

    {
        system("cls");
        goto menu;
    }
    else
    system("cls");
    {
    keluar();
    getch();
    ExitProcess(0);
    }

}

void keluar()
{
	header();			//header program
	char x[]={".:Terima Kasih Atas Pesanannya,Selamat Menonton:."};			//Ucapan Selamat
		int a,b,i,n;
		n=strlen(x);
		for(i=0;i<n;i++)
		{	for(a=0;a<=99999;a++){
				for(b=0;b<=120;b++){
				}
			}
			gotoxy(33+i,7);cout<<x[i];
		}
	Sleep(1000);
    exit (0);

}

void keluar_langsung()
{
	system("cls");
	header();			//header program
	char x[]={".:Terima Kasih:."};			//Ucapan Selamat
		int a,b,i,n;
		n=strlen(x);
		for(i=0;i<n;i++)
		{	for(a=0;a<=99999;a++){
				for(b=0;b<=120;b++){
				}
			}
			gotoxy(50+i,7);cout<<x[i];
		}
	Sleep(1000);
    exit (0);

}
