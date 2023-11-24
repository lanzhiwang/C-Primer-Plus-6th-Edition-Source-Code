#include <stdio.h>

int main(void)
{
	printf("signed char: %ld\n", sizeof(signed char));
	printf("unsigned char: %ld\n", sizeof(unsigned char));
	// signed char: 1
	// unsigned char: 1

	printf("short: %ld\n", sizeof(short));
	printf("short int: %ld\n", sizeof(short int));
	printf("signed short: %ld\n", sizeof(signed short));
	printf("signed short int: %ld\n", sizeof(signed short int));
	printf("unsigned short: %ld\n", sizeof(unsigned short));
	printf("unsigned short int: %ld\n", sizeof(unsigned short int));
	// short: 2
	// short int: 2
	// signed short: 2
	// signed short int: 2
	// unsigned short: 2
	// unsigned short int: 2

	printf("int: %ld\n", sizeof(int));
	printf("signed: %ld\n", sizeof(signed));
	printf("signed int: %ld\n", sizeof(signed int));
	printf("unsigned: %ld\n", sizeof(unsigned));
	printf("unsigned int: %ld\n", sizeof(unsigned int));
	// int: 4
	// signed: 4
	// signed int: 4
	// unsigned: 4
	// unsigned int: 4

	printf("long: %ld\n", sizeof(long));
	printf("long int: %ld\n", sizeof(long int));
	printf("signed long: %ld\n", sizeof(signed long));
	printf("signed long int: %ld\n", sizeof(signed long int));
	printf("unsigned long: %ld\n", sizeof(unsigned long));
	printf("unsigned long int: %ld\n", sizeof(unsigned long int));
	// long: 8
	// long int: 8
	// signed long: 8
	// signed long int: 8
	// unsigned long: 8
	// unsigned long int: 8

	printf("long long: %ld\n", sizeof(long long));
	printf("long long int: %ld\n", sizeof(long long int));
	printf("signed long long: %ld\n", sizeof(signed long long));
	printf("signed long long int: %ld\n", sizeof(signed long long int));
	printf("unsigned long long: %ld\n", sizeof(unsigned long long));
	printf("unsigned long long int: %ld\n", sizeof(unsigned long long int));
	// long long: 8
	// long long int: 8
	// signed long long: 8
	// signed long long int: 8
	// unsigned long long: 8
	// unsigned long long int: 8

	return 0;
}
