#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Buku
{
    char judulbuku [50];
    char pengarang[50];
    char kodebuku[4];
    char tahunbuku[4];
    char hargabuku[10];

};

Buku buku[20 ];

unsigned int x,y;
void tambah ()
{

	cout<< "MASUKKAN JUMLAH BUKU :  ";
	cin >>x;
	for (y=0;y<x;y++)
	{
		cout<<"\n============================="<<endl;
		cout<<"buku yang ke-"<<y+1<<endl;
		cout<<"============================="<<endl;

		cout<<"Kode Buku		:";cin>>buku[y].kodebuku;
		cout<<"Judul Buku		:";cin>>buku[y].judulbuku;
		cout<<"Tahun Terbit		:";cin>>buku[y].tahunbuku;
		cout<<"Pengarang		:";cin>>buku[y].pengarang;
		cout<<"Harga Buku		:";cin>>buku[y].hargabuku;
		cout<<" "<<endl;
	}system("cls");
}

void tampilan ()
{
	cout << "No. " << "Kode Buku\t" << "Nama Buku\t" << "Tahun Terbit\t" << "pengarang\t" << "Harga Buku\n" << endl;
			for (y=0;y<x;y++)
			{
				cout << y+ 1 << ". " << "\t" <<buku[y].kodebuku << "\t" <<buku[y].judulbuku << "\t\t" <<buku[y].tahunbuku << "\t\t" <<buku[y].pengarang << "\t\t" << buku[y].hargabuku<<"\n"<< endl;
			}
			cin.get();cout<<"\n"<<endl;
}

void ubah()
{
	unsigned int z;
    cout << "Edit Data Buku yang ke-";
    cin >> z;
    z=z-1;
    cout<<"kode buku		:";cin>>buku[z].kodebuku;
	cout<<"nama buku		:";cin>>buku[z].judulbuku;
	cout<<"tahun terbit		:";cin>>buku[z].tahunbuku;
	cout<<"pengarang		:";cin>>buku[z].pengarang;
	cout<<"harga			:";cin>>buku[z].hargabuku;
	cout<<" "<<endl;
 	tampilan();
    system("cls");

}

void hapus ()
{
    int z,a;
    cout << "Hapus Data Buku ke-";
    cin >> z;
    z=z-1;
    y--;
    for (a=z;a<y;a++)
    {
       buku[y]=buku[y-1];
    }
    x=x-1;
    cout << "\t\t\tData Buku sudah Berhasil Dihapus"<<endl;
    getch();
	system("cls");

}

int main()
{
	int pilihan;
	menu :
    cout << "1. Masukan DATA BUKU"<<endl;
    cout << "2. Hapus DATA BUKU"<<endl;
    cout << "3. Ubah DATA BUKU "<<endl;
    cout << "4. tampilkan DATA BUKU"<<endl<<endl;
    cout << "Masukan pilihan : ";
	cin >> pilihan;
	system("cls");

    switch (pilihan)
    {
        case 1 :
        	tambah ();
			goto menu;
        	break;

        case 2 :
        	hapus();
        	goto menu;
        	break;

		case 3 :
			ubah();
			goto menu;
			break;

        case 4 :
        	tampilan();
        	goto menu;
        	cout<<"\n"<<endl;
			break;

        break;

        default:
            cout << "Maaf pilihan  anda tidak tersedia! Silahkan Coba lagi"<<endl;
    }
    system("cls");
	return 0;
}
