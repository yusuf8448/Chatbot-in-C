#pragma once
#include <stdio.h>
#pragma once



// these libraires are used for user input, to scan keywords and base a reply off of them
// they could easily be expanded upon but upon some research only the main or most common phrases are used here
// makes code run faster on machines 



int isGood(char *input)
{
	char good[6][256] = { " yes, good, great, okay, alright, nice, sweet" };
	{

		for (int i = 0; i < 6; i++) {
			if (strcmp(input, good[i])) {
				return 1;
			}
		}
	}
	return 0;
}

int isBad(char *input)
{
	char bad[4][256] = { "bad, horrible, awful, no, boring " };
	{

		for (int i = 0; i < 4; i++) {
			if (strcmp(input, bad[i])) {
				return 1;
			}
		}
	}
	return 0;
}

int isHobby(char *input)
{
	char Hobby[12][256] = { "Drawing, Photography, Origami, Languages, Writing, Cooking, Astronomy, Cooking, Football, Cricket, Coding, Rugby" };
	{

		for (int i = 0; i < 12; i++) {
			if (strcmp(input, Hobby[i])) {
				return 1;
			}
		}
	}
	return 0;
}

int isTheirStatement(char *input)
{
	char isTheirStatement[4][256] = { "bad, horrible, awful, no, boring " };
	{

		for (int i = 0; i < 4; i++) {
			if (strcmp(input, isTheirStatement[i])) {
				return 1;
			}
		}
	}
	return 0;
}





