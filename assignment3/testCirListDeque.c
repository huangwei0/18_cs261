#include "cirListDeque.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {


	/* Test your linked list in here! */
  TYPE temp;
	printf("Hello from test code!\n");
  printf("Testing cirListDeque Implementation\n");
  struct cirListDeque* deque = createCirListDeque();
  printf("Linked list deque created\n");
  addFrontCirListDeque(deque, 3);
  printf("Added first element\n");
  addFrontCirListDeque(deque, 8);
  printCirListDeque(deque);

  addBackCirListDeque(deque, 2);
  printCirListDeque(deque);

  temp = frontCirListDeque(deque);
  printf("The front of the list is %.0lf, it should be 8\n", temp);
  printf("the back of the list is %.0lf, it should be 2\n",backCirListDeque(deque));

  printf("removed front\n");
  removeFrontCirListDeque(deque);
  printCirListDeque(deque);

  printf("removed back\n");
  removeBackCirListDeque(deque);
  printCirListDeque(deque);

  printf("isemptylist");
  printf("it should be 0   %i",isEmptyCirListDeque(deque));


  printf("free");
  deleteCirListDeque(deque);

	return 0;
}
