#include"queue.h"
#include<stdio.h>
#include<stdbool.h>

bool isEmpty(address front){
	return front == nil;
}

void enQueue(address *front, address *rear, infotype data){
	address newNode = createNode(data);
	if(isEmpty(*front)){
		*front = *rear = newNode;
	}
	else{
		insertLast(rear, data);
		*rear = Next(*rear);
	}
}

void deQueue(address *front, address *rear){
	if (isEmpty(*front)) {
        printf("Antrian kosong, tidak bisa menghapus elemen.\n");
        return;
    }
    deleteFirst(front);
    if (*front == nil) {
        *rear = nil;  
    }	
}

int countElement(address front){
	int count = 0;
	address cur = front;
    while(cur != nil) {
        count++;
        cur = Next(cur);
    }
    return count;	
}
