// Menghitung Bilangan Fibonaci Melalui Looping

#include <iostream>

using namespace std;

int main ()
{
	// n = jumlah bilangan, f1 = bilangan pertama, f2 = bilangan kedua.
	int n, f1 = 0, f2 = 1, berikutnya = 0; 
	
	cout << "Masukkan Batas Deret Bilangan Fibonacci : ";
	cin >> n;
	cout << endl;
	cout << "Deret Fibonacci : ";
	
	for (int i = 1; i <=n; ++i)
	{
		//Mencetak dua deret bilangan fibonacci pertama.
		if(i==1)
		{
			cout << " " << f1<< " ";
			continue;
		}
		berikutnya = f1 + f2;
		f1 = f2;
		f2 = berikutnya;
		
		//Mencetak deret bilangan fibonacci berikutnya.
		cout << berikutnya <<" ";
	}
	return 0;
}
