/* Mendefinisikan array dan mengisi nilainya dari input yang dibaca */

#include <stdio.h>
#include <conio.h>

int main()
{
	int Tab[5];
	int i;

	for (i = 1; i <= 5; i++) {
		printf("Masukkan Nilai ke %i : ", i);
		scanf_s("%d", &Tab[i]);
	}

	puts("");

	/* menuliskan isi Tab berderet ke kanan*/
	for (i = 1; i <= 5; i++) {
		printf("Tab[%d] = %d; ", i, Tab[i]);
	}

	printf("\n");

	_getch();
	return 0;
}