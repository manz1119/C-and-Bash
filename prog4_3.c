#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
	int difference;
	difference=atoi(argv[1]);
	int location=0;
	char encodedText[256];
	scanf("%256[^\n]", encodedText);
	char currentChar=encodedText[location];
	char outputText[256];
	while(location<strlen(encodedText))
	{
		int ascii=(int)currentChar;
		int i;
		for(i=1; i<=difference; i++)
		{
			if((ascii==65)||(ascii==97))
			{
				ascii+=25;
			}
			else if((ascii>65)&&(ascii<123))
			{
				ascii=ascii-1;
			}
		}
		currentChar=ascii;
		outputText[location]=currentChar;
		location=location+1;
		currentChar=encodedText[location];
	}
	int length=strlen(outputText);
	int i=0;
	location=0;
	while(i<length)
	{
		currentChar=outputText[location];
		int ascii=(int)currentChar;
		if((ascii<65)||((ascii>90)&&(ascii<97))||(ascii>122))
		{
			outputText[location]=' ';
		}
		location++;
		i++;
	}
	printf("%s", outputText);
	printf("\n");
	return 0;
}
