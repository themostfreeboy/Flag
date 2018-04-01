#include <stdio.h>
#include <stdlib.h>
#include "flag.h"

int main()
{
	int a=0,b=0;

	//a=WriteFlag_One_ASC("1.txt", "2.txt", 'J');
    //b=CheckFlag_One_ASC("2.txt", "3.txt", 'J');

	//a=WriteFlag_One_Int("1.txt", "2.txt", 97);
    //b=CheckFlag_One_Int("2.txt", "3.txt", 97);

	//a=WriteFlag_One_Int("1.txt", "2.txt", 0x30);
    //b=CheckFlag_One_Int("2.txt", "3.txt", 0x30);

	//a=WriteFlag_Two_ASC("1.txt", "2.txt", 'J', 'X');
    //b=CheckFlag_Two_ASC("2.txt", "3.txt", 'J', 'X');

	//a=WriteFlag_Two_Int("1.txt", "2.txt", 97, 98);
    //b=CheckFlag_Two_Int("2.txt", "3.txt", 97, 98);

	//a=WriteFlag_Two_Int("1.txt", "2.txt", 0x30, 0x31);
    //b=CheckFlag_Two_Int("2.txt", "3.txt", 0x30, 0x31);

	//a=WriteFlag_Three_ASC("1.txt", "2.txt", 'J', 'X', 'L');
    //b=CheckFlag_Three_ASC("2.txt", "3.txt", 'J', 'X', 'L');

	//a=WriteFlag_Three_Int("1.txt", "2.txt", 97, 98, 99);
    //b=CheckFlag_Three_Int("2.txt", "3.txt", 97, 98, 99);

	//a=WriteFlag_Three_Int("1.txt", "2.txt", 0x30, 0x31, 0x32);
    //b=CheckFlag_Three_Int("2.txt", "3.txt", 0x30, 0x31, 0x32);

	//char char_Multi[6]={'0','1','2','3','4','5'};
	//a=WriteFlag_Multi_ASC("1.txt", "2.txt", 6, char_Multi);
    //b=CheckFlag_Multi_ASC("2.txt", "3.txt", 6, char_Multi);

	//int int_Multi[6]={48,49,50,51,52,53};
	//a=WriteFlag_Multi_Int("1.txt", "2.txt", 6, int_Multi);
    //b=CheckFlag_Multi_Int("2.txt", "3.txt", 6, int_Multi);
	
	printf("a=%d,b=%d\n",a,b);

	system("pause");
	return 0;
}