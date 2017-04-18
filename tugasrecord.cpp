#include <iostream>
using namespace std;

	typedef struct 
	{
		string noKA;
		string namaKA;
	} kereta;
	
	typedef struct 
	{
		string nama;
		string ktp;
	} penumpang;
	
	typedef struct 
	{
		string jam;
		string menit;
		string detik;
		string zona;
	} jam;
	
	typedef struct 
	{
		string hari;
		string bulan;
		string tahun;
	} tanggal;
	
	typedef struct 
	{
		string kotaAsalKA;
		string kotatujuanKA;
		jam waktuBerangkat;
		jam waktuTiba;
		tanggal tanggalBerangkat;
		tanggal tanggalTiba;
		string harga;
	} jadwalKA;
	

int main (){
	penumpang irpanmulyana;
	kereta KA;
	jadwalKA tiket;
	
	KA.noKA = "BDO-Parahyangan-0103";
	KA.namaKA = "Parahyangan";
	
	cout << "Masukan Nama 	 	: ";
	cin >> irpanmulyana.nama ;
	cout << "Masukan No KTP 		: ";
	cin >> irpanmulyana.ktp;
	cout << "Tujuan			: ";
	cin >> tiket.kotatujuanKA;
	cout << "Asal			: ";
	cin >> tiket.kotaAsalKA;
	cout << "Hari Berangkat   	: ";
	cin>>tiket.tanggalBerangkat.hari;
	cout << "Bulan Berangkat  	: ";	
	cin>>tiket.tanggalBerangkat.bulan;
	cout << "Tahun Berangkat  	: ";
	cin>>tiket.tanggalBerangkat.tahun;
	cout << "Hari Tiba  	  	: ";
	cin>>tiket.tanggalTiba.hari;
	cout << "Bulan Tiba  	  	: ";	
	cin>>tiket.tanggalTiba.bulan;
	cout << "Tahun Tiba       	: ";
	cin>>tiket.tanggalTiba.tahun;
	
	tiket.waktuBerangkat.jam = "10";
	tiket.waktuBerangkat.menit = "15";
	tiket.waktuBerangkat.detik = "17";
	tiket.waktuBerangkat.zona = "WIB";
	tiket.waktuTiba.jam = "01";
	tiket.waktuTiba.menit = "17";
	tiket.waktuTiba.detik = "33";
	tiket.waktuBerangkat.zona = "WIB";
	tiket.waktuTiba.zona = "WIB";
	
	if (tiket.kotatujuanKA == "Jogjakarta" && tiket.kotaAsalKA == "Bandung"){
		tiket.harga = "Rp. 137.000";
	
	}
	else if (tiket.kotatujuanKA == "Jogjakarta" && tiket.kotaAsalKA == "Jakarta"){
		tiket.harga = "Rp. 157.000"; 
	}
	else if (tiket.kotatujuanKA == "Jakarta" && tiket.kotaAsalKA == "Surabaya"){
		tiket.harga = "Rp. 300.000"; 
	}
	else if (tiket.kotatujuanKA == "Surabaya" && tiket.kotaAsalKA == "Garut"){
		tiket.harga = "Rp. 400.000"; 
	}
	else {
			tiket.harga = "Rp. 0"; 
	}
	
	
	cout << endl; 
	cout << "=========== DATA PERJALANAN ===========" << endl;
	cout << "---------------------------------------" << endl;
	
	cout << "No Kereta Api 	 	: " << KA.noKA << endl;
	cout << "Nama Kereta Api 	: " << KA.namaKA << endl << endl;
	
	cout << "Nama Penumpang  	: " << irpanmulyana.nama << endl;
	cout << "No KTP 		 	: " << irpanmulyana.ktp << endl << endl;
	
	cout << "Tujuan  	 	: " << tiket.kotatujuanKA << endl;
	cout << "Asal			: " << tiket.kotaAsalKA << endl << endl;
	
	cout << "Biaya 	 		: " << tiket.harga << endl << endl; 
	
	cout << "Tanggal Berangkat	: " << tiket.tanggalBerangkat.hari <<", "<<  tiket.tanggalBerangkat.bulan <<" "<<  tiket.tanggalBerangkat.tahun  << endl;
    cout << "waktu			: " << tiket.waktuBerangkat.jam <<" : "<<  tiket.waktuBerangkat.menit <<" :"<<  tiket.waktuBerangkat.detik<<" " <<tiket.waktuBerangkat.zona << endl;	
	cout << "Tanggal Tiba	        : " << tiket.tanggalTiba.hari; cout <<", "<<  tiket.tanggalTiba.bulan; cout <<" "<< tiket.tanggalTiba.tahun  << endl; 
	cout << "waktu			: " << tiket.waktuTiba.jam <<" : "<<  tiket.waktuTiba.menit <<" :"<<  tiket.waktuTiba.detik <<" "<<tiket.waktuTiba.zona<< endl;
	 return 0; 
}
