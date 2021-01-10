#pragma warning(disable:4996)

/* -------------------------------- */
/* Selection sort dengan C++ */
/* -------------------------------- */

#include <stdio.h>
#include <conio.h>

/* Created by Rizky Khapidsyah */

int main() {
	int i, j, iMin;
	int n, Urut;
	int Tmp;
	int Arr[100];

	printf("\nInputkan banyak data yang akan diurutkan : ");
	scanf("%i", &n);
	
	Urut = 1;
	
	for (i = 0; i < n; i++) {
		printf("Masukan data ke %i : ", i + 1);
		scanf("%i", &Arr[i]);
	}
	
	for (i = 0; i < n - 1; i++) {
		iMin = i;

		for (j = Urut; j < n; j++) {
			if (Arr[j] < Arr[iMin]) {
				iMin = j;
				if (Arr[i] != Arr[iMin]) {
					Tmp = Arr[i];
					if (Arr[i] > Arr[iMin]) {
						Arr[i] = Arr[iMin];
						Arr[iMin] = Tmp;
					}
				}
			}
		}

		Urut = Urut + 1;
	}
	printf("\nSetelah Pengurutan\n");

	for (i = 0; i < n; i++) {
		printf("Elemen ke %i : %i\n", i + 1, Arr[i]);
	}

	_getch();

	for (i = 0; i < n - 1; i++) {
		iMin = i;
		for (j = Urut; j < n; j++) {
			if (Arr[j] < Arr[iMin]) {
				iMin = j;
				if (Arr[i] != Arr[iMin]) {
					Tmp = Arr[i];
					if (Arr[i] > Arr[iMin]) {
						Arr[i] = Arr[iMin];
						Arr[iMin] = Tmp;
					}

				}
			}
			Urut = Urut + 1;
		}
		printf("\nSetelah Pengurutan\n");
		for (i = 0; i < n; i++) {
			printf("Elemen ke %i : %i\n", i + 1, Arr[i]);
		}
		getch();
	}
}

