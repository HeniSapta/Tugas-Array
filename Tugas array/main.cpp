#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string nama[10],status[10];
	int nilai[10];

	cout<<"Masukan Jumlah Data = ";
	cin>>n;
	cout<<endl;

	for (int i=0; i<n; i++) {
		cout<<endl;

		getline(cin, nama[i]);
		cout<<"Data ke-"<<i+1<<endl;
		cout<<"Masukan Nama = ";
		getline(cin, nama[i]);

		cout<<"Masukan Nilai = ";
		cin>>nilai[i];

		if (nilai[i]<=50) {
		 	status[i]="Tidak Lulus";
		} else {
			status[i]="Lulus";
		}
	}
	cout<<endl;
	cout<<"DAFTAR NILAI MAHASISWA"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"No      Nama           Nilai           Status         "<<endl;
	cout<<"-------------------------------------------"<<endl;

	for (int i=0; i<n;i++) {
	cout<<i+1<<"    "<<nama[i]<<"            "<<nilai[i]<<"          "<<status[i]<<endl;
	cout<<"-------------------------------------------"<<endl;
	}

    return 0;
}
