#include <stdio.h>

int main(int argc, char *argv[])
{
	char codedChar;
	int codedLetter;
	int decodedLetter;
	int difference;

	scanf("%c", &codedChar);
	codedLetter=(int)codedChar;
	decodedLetter=(int) *argv[1];

	difference=codedLetter-decodedLetter;
	printf("%d", difference);
	printf("\n");

	return 0;
}
