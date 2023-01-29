#include <iostream> // digunakan untuk menampilkan input output pada program
#define bunga 0.01

using namespace std; // digunakan untuk mendeklarasikan perintah kepada sebuah kompiler
int main()
{
	
const char nama[]="NAMA : Fajar Budiman";
		char nim[]="NIM : 2230511050";
		char kelas[]="KELAS : REGULAR";
		
	int kode,Kode2,setor,saldo;
	char lagi;
	string pass;
	int tarik[2]={500000,1000000};
	
	
cout<<"\tBIODATA"<<endl;
cout<<"++++++++++++++++++++++++"<<endl;
cout<<nama<<endl;
cout<<nim<<endl;
cout<<kelas<<endl;
cout<<endl;


do{
	
	
	
	cout <<"\t\t\t\tlogin";
	cout << endl;
	cout << endl;
	cout << endl;
	cout <<"Masukan Kata Sandi :";
	cin>>pass;
	system("cls");
	
	while(pass=="123456")
	{
		
		if(lagi=='T' ||lagi=='t')
		goto keluar;
		
		
cout<<"				ATM BANK"<<endl;
cout<<"=========================================="<<endl;
cout<<""<<endl;
cout<<"__________________________________________"<<endl;
cout<<"			   	MENU"<<endl;
cout<<"  "<<endl;
cout<<"1. Cek Saldo				3. Setoran Tunai"<<endl;
cout<<endl;
cout<<"2. Penarikan Tunai		4. Exit"<<endl;
cout<<"_________________________________________"<<endl;
cout<<endl;
cout<<"MASUKAN PILIHAN ANDA : ";
cin>>kode;
system("cls");

switch(kode)

	{
		
		case 1:
		cout<<endl;
		cout << "______________________________" << endl;
		cout << "|  Informasi saldo           |" << endl;
		cout << "|____________________________|" << endl;
		cout << "|" << endl;
		cout << "|  Sisa saldo : Rp. " << saldo <<endl;
		cout << "|____________________________|" << endl;
		cout << "Apakah anda ingin melanjutkan transaksi lagi Y/T ;";
		cin >>lagi;
		system ("cls");
		break ;
		
case 2:
cout<<"				ATM BANK "<<endl;
cout<<"========================================"<<endl;
cout<<""<<endl;
cout<<"__________________________________________"<<endl;
cout<<"			PENARIKAN TUNAI"<<endl;
cout<<" "<<endl;
cout<<"1. Rp. 500.000				2. Rp. 1.000.000"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"________________________________________"<<endl;
cout<<endl;
cout<<"MASUKAN PILIHAN ANDA : ";
cin>>Kode2;
system("cls");

switch (Kode2)
		{
			
			case 1:
			cout<<"\t\tpenarikan berhasil";
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"Anda melakukan penarikan tunai senilai : Rp.500.000,"<<endl;
			saldo=saldo-tarik[0];
			cout<<""<<endl;
			cout<<"Sisa saldo		: Rp. "<<saldo<<",-";
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<"APAKAH INGIM MELAKUKAN TRANSAKSI LAGI Y/T ;";
			cin>>lagi;
			system("cls");
			break;
			
			case 2:
			cout<<"\t\tpenarikan berhasil";
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"Anda melakukan penarikan tunai senilai : Rp.1000.000,"<<endl;
			saldo=saldo-tarik[1];
			cout<<""<<endl;
			cout<<"sisa saldo	: Rp. "<<saldo<<",-";
			cout<<""<<endl;
			cout<<"APAKAH INGIN MELAKUKAN TRANSAKSI LAGI Y/T ; ";
			cin>>lagi;
			system("cls");
			break;
			
			default:
			cout<<"KODE YANG ANDA MASUKAN TIDAK TERSEDIA";
			system("cls");
		}
			break;
case 3:
cout << "setoran tunai " << endl;
cout << endl;
cout << endl;
cout << endl;
cout << "Masukkan jumlah yang anda ingin setorkan :"; cin >>setor;
saldo=setor*bunga+setor+saldo;
cout << endl;
cout << "Jumlah saldo anda sekarang  :" << saldo <<endl;
cout << "apakah anda ingin melanjutkan transaksi lagi Y/T ;";
cin >> lagi;
system("cls");
			
break;
			
case 4:
goto keluar ;
break;
				
default:
cout << "KODE YANG ANDA MASUKKAN TIDAK TERSEDIA"<< endl;
system ("cls");
					
					
			
			
		}
	
	
	}
	
	       cout << "KODE YANG ANDA MASUKKAN SALAH" << endl;
	       cout << endl;
	       cout << "SILAHKAN COBA LAGI Y/T;";
	       cin >> lagi;
	       cout << endl;
	       system ("cls");
	       
	       
	} while (lagi=='Y'||lagi=='y');
	keluar :
		cout << "TERIMA KASIH TELAH MELAKUKAN TRANSAKSI";
		cout << endl;
		
		
		return 0;
		
	
	
}


			
