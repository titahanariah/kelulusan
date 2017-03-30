#include <iostream>
using namespace std;

//prototype
void prosesBaca () ;
int isWithinRange(float ip, int max, int min) ;
void prosesTampil ();

//variabel global
float ip, nilai_ip, total_ip;
int max, min, jml_mhs, jml_lulus, jml_tidak_lulus;

//program utama
int main () {
	prosesBaca () ;
	prosesTampil ();
	return 0;
}

//proses baca
void prosesBaca () {
 do {
	cout << "Masukan IP = ";
	cin >> ip ;
	if (isWithinRange(ip, 4, 0)){
	jml_mhs ++ ;
		if(ip>=2.75) {
		jml_lulus ++;
		}
		else {
		jml_tidak_lulus ++;
		}
	total_ip = total_ip + ip ; //total IP lulus dan tidak lulus, IP yang diluar jangkauan diabaikan
	}		
	else {
	cout << "Tidak ada data " <<endl <<endl;
	}
 }
 while (ip  != -999);
}

//fungsi valid
int isWithinRange(float IP, int max, int min) {
	return max>=ip==ip>=min ;
}


//proses tampil
void prosesTampil () {
cout << "Jumlah mahasiswa = " << jml_mhs <<endl;
cout << "Jumlah Lulus = " << jml_lulus <<endl;
cout << "Jumlah Tidak Lulus = " << jml_tidak_lulus <<endl;
cout << "Nilai Rata - Rata = " << total_ip / jml_mhs;
}