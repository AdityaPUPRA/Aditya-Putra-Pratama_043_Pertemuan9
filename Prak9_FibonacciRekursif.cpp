// Menghitung Bilangan Fibonacci Dengan Rekursif

#include <iostream>

using namespace std;

// m = bilangan
int fibonacci (int m){
	
	// jika nilai m adalah 0 atau 1 maka nilai kembali
	if (m == 0 || m == 1){
		return m;
	}
	else {
		// menjumlahkan nilai awal 0 dan 1 untuk mendapatkan hasil
		return (fibonacci (m-1)+fibonacci(m-2));
	}
}

int main (){
	
	// n = deret bilangan fibonacci, m = bilangan
	int n, m=0;
	cout <<"Masukkan Deret Bilangan Fibonacci : ";
	cin >> n;
	
	cout << "Deret Fibonacci : ";
	
	for (int i = 1; i <= n; i++){
		cout << fibonacci (m) << " "; m++;
	}
	return 0;
}

