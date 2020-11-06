#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {


	/* Test your linked list in here! */
TYPE temp;
printf("Hello from test code!\n");

printf("Testing Deque Implementation\n");
struct linkedList * deque = createLinkedList();
printf("Linked list deque created\n");
addFrontList(deque, 3);
printf("Added first element\n");
addFrontList(deque, 8);
_printList(deque);
printf("Added second element\n");
addBackList(deque, 2);
_printList(deque);
printf("Added third element\n");
temp = frontList(deque);
printf("The front of the list is %d, it should be 8\n", temp);
printf("the back of the list is %d, it should be 2\n",backList(deque));
_printList(deque);
printf("removed front\n");
removeFrontList(deque);
_printList(deque);
printf("removed back\n");
removeBackList(deque);
_printList(deque);
printf("deleted and freed deque\n");

//_printList(deque);


printf("isemptylist");
printf("it should be 0   %i",isEmptyList(deque));


printf("free");
deleteLinkedList(deque);
//freeLinkedList(deque);
//_printList(deque);


printf("Testing Bag Implementation\n");
struct linkedList * bag = createLinkedList();
printf("linked list created\n");
printf("added first link\n");
addList(bag, 4);
_printList(bag);



printf("added second link\n");
addList(bag, 6);
_printList(bag);

temp = containsList(bag, 6);
printf("checked if list contains 6. temp should be 1, is %d\n", temp);
containsList(bag, 6);
temp = containsList(bag, 9);
printf("checked if list contains 9. temp should be 0, is %d\n", temp);

containsList(bag, 9);

printf("removed 6\n");
removeList(bag, 6);
_printList(bag);
deleteLinkedList(bag);
printf("DONE!!!\n");
	return 0;
}
