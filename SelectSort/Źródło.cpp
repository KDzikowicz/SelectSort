#include<iostream>	
#include<algorithm>
#include<ctime>
using namespace std;
void SelectSort(int n, int a[]) {
	int pom{}, j{};
	for (int k{};k < n; k++) {
		for (int l = j + 1;l < n;l++) {
			if (a[j] > a[l]) {
				pom = a[j];
				a[j] = a[l];
				a[l] = pom;
			} 
		}
		j++;
	}

	cout << "Po sortowaniu\n";
	for (int x = 0;x < n;x++) {
		cout << a[x] << endl;
	}
}
void InsertSort(int n, int a[]) {
	int pom{}, l{n};
	for (int k{ n }; k > 1;k--) {
		for (int j{ l - 1 };j < n;j++) {
			if (a[j] > a[l]) {
				pom = a[l];
				a[l] = a[j];
				a[j] = a[l];
			}
		}
		l--;
	}	
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
	//SelectSort(n_tab, tab);
	InsertSort(n_tab, tab);
	return 0;
}