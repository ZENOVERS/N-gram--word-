#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[1000];
	char *arr[1000] = { NULL, };
	int length, count = 0;

	printf("Please Enter here: ");
	scanf("%[^\n]s", s1);

	length = strlen(s1);

	char *ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		arr[count] = ptr;
		count++;

		ptr = strtok(NULL, " ");
	}

	for (int i = 0; i < count - 3; i++)
	{
		printf("%s %s %s %s\n", arr[i], arr[i + 1], arr[i + 3], arr[i + 4]);
	}

	return 0;
}