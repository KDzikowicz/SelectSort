#include<iostream>	
#include<algorithm>
#include<ctime>
using namespace std;
void selectsort(int n, int a[]) {
	int k{}, pom{}, j{};
	do {
		j++;
		for (int l = j + 1;l < n;l++) {
			if (a[j] > a[l]) {
				pom = a[j];
				a[j] = a[l];
				a[l] = pom;
				k++;
			} 
		}
	} while (k != (n - 1));
	cout << "Po sortowaniu\n";
	for (int x = 0;x < n;x++) {
		cout << a[x] << endl;
	}
}
int main() {
	srand(time(NULL));
	int tab[10] = {};
	for (int i = 0; i<10;i++) {
		tab[i] = rand() % 100;
		cout << tab[i] << endl;
	}
	int n_tab = sizeof(tab) / sizeof(int);
	selectsort(n_tab, tab);
	return 0;
}