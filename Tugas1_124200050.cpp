#include <iostream>
using namespace std;
main()
{
	char name [25], nim[16];
	float n1, n2, R;
	
	cout << "Nama Mahasiswa 	: ";
	cin.getline (name, sizeof (name));
	cout << "NIM 		: ";
	cin >> nim;
	cout << "Masukkan Nilai UTS : ";
	cin >> n1;
	cout << "Masukkan Nilai UAS : ";
	cin >> n2;
	R = (n1+n1)/2;
	cout <<  "Rata rata nilai " << name << " Adalah " << R;
	return 0;
}
	
	
	
