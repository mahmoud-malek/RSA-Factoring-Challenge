#include <stdlib.h>
#include <stdio.h>

void factorize(long num)
{
	long factor;

	for (factor = 2; factor * factor <= num; factor++)
	{
		if (num % factor == 0)
		{
			printf("%ld=%ld*%ld\n", num, factor, num / factor);
			return;
		}
	}

	printf("%ld=%ld*%ld\n", num, 1L, num);
}

int main(int argc, char **argv)
{
	FILE *file;
	long num;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: factors <file>\n");
		return 1;
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "ERROR: Cannot open file %s\n", argv[1]);
		return 1;
	}

	while (fscanf(file, "%ld", &num) == 1)
	{
		factorize(num);
	}

	fclose(file);
}

