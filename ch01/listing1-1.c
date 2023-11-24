#include <stdio.h>
int main(void)
{
	int dogs;

	printf("How many dogs do you have?\n");
	scanf("%d", &dogs);
	printf("So you have %d dog(s)!\n", dogs);
	// $ ./a.out
	// How many dogs do you have?
	// 5
	// So you have 5 dog(s)!
	// $ ./a.out
	// How many dogs do you have?
	// 11111111111111111111111111111111111111111111111111111
	// So you have -1 dog(s)!
	// $

	return 0;
}
