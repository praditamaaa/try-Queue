#ifndef LINKEDLISTBETA_H
#define LINKEDLISTBETA_H

#define nil NULL
#define Data(P) (P)->info
#define Next(P) (P)->next

typedef char infotype[15];
typedef struct tElmtList *address;
typedef struct tElmtList {
    infotype info;
    address next;
} ElmtList;

//--------------------Deklarasi Prosedur--------------------------//
address createNode(infotype data); // Membuat node baru
void insertLast(address *head, infotype data); // Menyisipkan node di akhir
void deleteFirst(address *head); // Menghapus node pertama

#endif
