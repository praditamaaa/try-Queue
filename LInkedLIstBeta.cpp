#include"LInkedListBeta.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

address createNode(infotype data){
	address newNode = (address)malloc(sizeof(ElmtList));
    if (newNode == NULL) {
        printf("Alokasi memori gagal.\n");
        exit(1);
    }
    strcpy(Data(newNode), data);
    Next(newNode) = nil;
    return newNode;
}

void insertLast(address *head, infotype data){
	address newNode = createNode(data);
    if (*head == nil) {
        *head = newNode;
    } else {
        address temp = *head;
        while (Next(temp) != nil) {
            temp = Next(temp);
        }
        Next(temp) = newNode;
    }
}

void deleteFirst(address *head){
	if (*head == nil) {
        printf("Linked list kosong, tidak ada yang dihapus.\n");
        return;
    }
    address temp = *head;
    *head = Next(*head);
    free(temp);
}

