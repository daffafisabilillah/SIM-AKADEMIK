#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		string username;
		string password;
		cout << "LOGIN\n";
		cout << "Username : " ; 
		cin >> username;
		cout << "Password : " ; 
		cin >> password;
		if(username == "admin"){
			if(password == "password")
			{
				cout << "Selamat datang di Universitas C++" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga Pendidik" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan\n" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) 
		{
			case 1:
				{
					string id, nama, nrp, departemen;
					int dd, mm, yy, tahunmasuk;
					cout << "Masukkan id 			: ";
					cin >> id;
					cout << "Masukkan nama 			: ";
					cin >> nama;
					cout << "Masukkan nrp 			: ";
					cin >> nrp;
					cout << "Masukkan departemen	: ";
					cin >> departemen;
					cout << "Masukkan hari			: ";
					cin >> dd;
					cout << "Masukkan bulan 		: ";
					cin >> mm;
					cout << "Masukkan tahun 		: ";
					cin >> yy;
					cout << "Masukkan tahun masuk 	: ";
					cin >> tahunmasuk;
					
					mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(mhs);
				}
				break;
			case 2:
				{
					string id, nama, npp, departemen;
					int dd, mm, yy, pendidikan;
					cout << "Masukkan id 			: ";
					cin >> id;
					cout << "Masukkan nama 			: ";
					cin >> nama;
					cout << "Masukkan nrp 			: ";
					cin >> npp;
					cout << "Masukkan departemen	: ";
					cin >> departemen;
					cout << "Masukkan hari 			: ";
					cin >> dd;
					cout << "Masukkan bulan 		: ";
					cin >> mm;
					cout << "Masukkan tahun 		: ";
					cin >> yy;
					cout << "Masukkan tahun masuk 	: ";
					cin >> pendidikan;	
					dosen dsn(id, nama, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(dsn);
				}
				break;
			case 3:
				{
					string id, nama, unit, npp;
					int dd, mm, yy;
					cout << "Masukkan id 	: ";
					cin >> id;
					cout << "Masukkan nama 	: ";
					cin >> nama;
					cout << "Masukkan npp	: ";
					cin >> npp;
					cout << "Masukkan hari 	: ";
					cin >> dd;
					cout << "Masukkan bulan : ";
					cin >> mm;
					cout << "Masukkan tahun : ";
					cin >> yy;
					cout << "Masukkan unit 	: ";
					cin >> unit;
					tendik tdk(id, nama, dd, mm, yy, npp, unit);
					recTendik.push_back(tdk);
				}
				break;
			case 4:
				{
					for (size_t i = 0; i < recMhs.size(); i++)
					{
						cout << "Nama 			: " << recMhs[i].getNama() << endl;
						cout << "NRP 			: " << recMhs[i].getNRP() << endl;
						cout << "Id				: " << recMhs[i].getId() << endl;
						cout << "Departemen 	: " << recMhs[i].getDepartemen() << endl;
						cout << "Tahun Masuk	: " << recMhs[i].getTahunmasuk() << endl;
						cin.ignore();
						cin.ignore();
					}
				}
				break;
			case 5:
				{
					for (size_t i = 0; i < recDosen.size(); i++)
					{
						cout << "Nama 			: " << recDosen[i].getNama() << endl;
						cout << "NRP 			: " << recDosen[i].getNpp() << endl;
						cout << "Id 			: " << recDosen[i].getId() << endl;
						cout << "Departemen 	: " << recDosen[i].getDepartemen() << endl;
						cout << "Pendidikan 	: " << recDosen[i].getPendidikan() << endl;
						cin.ignore();
						cin.ignore();
					}
				}
				break;
			case 6:
				{
					for (size_t i = 0; i < recTendik.size(); i++)
					{
						cout << "Nama		: " << recTendik[i].getNama() << endl;
						cout << "Id 		: " << recTendik[i].getId() << endl;
						cout << "Unit 		: " << recTendik[i].getUnit() << endl;
						cin.ignore();
						cin.ignore();
					}
				}
				break;
		}
			}else{
				cout << "Invalid Password !" << endl;
			}
		}else{
			cout << "Invalid Username !" << endl;
		}
	}
	return 0;
}
