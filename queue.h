#ifndef QUEUE_H
#define QUEUE_H

#include"LinkedListBeta.h"

bool isEmpty(address front);
void enQueue(address *front, address *rear, infotype data);
void deQueue(address *front, address *rear);
int countElement(address front);

#endif
