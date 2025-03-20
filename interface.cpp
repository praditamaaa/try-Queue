#include"interface.h"
#include"queue.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void banner(){
	printf("-----------------------------------------------------\n");
	printf("- Antrian Bank Polban(Implementasi Queue Sederhana) -\n");
	printf("-----------------------------------------------------\n\n");
}

void tambahQueue(address *front, address *rear){
	banner();
	infotype data;
	printf("Masukkan nama pelanggan (maksimal 14 karakter): ");
	scanf("%s", data);
	enQueue(front, rear, data);
	printf("Pelanggan %s telah ditambahkan ke antrian.\n", data);	
}

void prosesQueue(address *front, address *rear){
	banner();
	if (isEmpty(*front)) {
        printf("Antrian kosong, tidak ada yang diproses.\n");
    } else {
        infotype data;
        deQueue(front, rear);
        printf("Pelanggan %s telah diproses.\n", data);
    }
}

void displayQueue(address front){
	banner();
	if (isEmpty(front)) {
        printf("Antrian kosong.\n");
    }
    int i = 1;
    address cur = front;
    printf("Daftar antrian:\n");
    while(cur != nil){
    	printf("%d. %s\n",i, Data(cur));
    	cur = Next(cur);
    	i++;
	}	
}

void menuAwal(){
	int opsi;
	address front = nil;
	address rear = nil;
	
	while(1){
		
		system("cls");
		
		banner();
		printf("\n1. Tambah Queue");
		printf("\n2. Proses Queue");
		printf("\n3. Cetak Queue");
		printf("\n4. Keluar Program");
		
		printf("\nPilih Opsi: ");
		scanf("%d", &opsi);
		
		switch(opsi){
			case 1:
				tambahQueue(&front, &rear);
				break;
			case 2:
				prosesQueue(&front, &rear);
				break;
			case 3:
				displayQueue(front);
				break;
			case 4:
				printf("Selamat Tinggal!!");
				exit(0);
			default:
				printf("Tolong masukkan angka 1 - 4 saja!");
		}
		
		if (opsi >= 1 && opsi <= 3) {
            printf("\nTekan Enter untuk kembali ke menu utama...");
            getchar();
            getchar();  
        }
        
	}
}
