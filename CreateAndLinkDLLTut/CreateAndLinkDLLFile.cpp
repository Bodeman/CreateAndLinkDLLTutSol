#pragma once

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "CreateAndLinkDLLFile.h"


//Exported method that invertes a given boolean
bool DLL_EXPORT getInvertedBool(bool boolState)
{
	return bool(!boolState);
}

//Exported method that iterates a given int value
int DLL_EXPORT getIntPlusPlus(int lastInt)
{
	return int(++lastInt);
}

//Exported method that calculates the are of a circle by a given radius
float DLL_EXPORT getCircleArea(float radius)
{
	return float(3.1416f * (radius * radius));
}

char DLL_EXPORT *getCharArray(char* parameterText)
{
	char* additionalText = " world!";
	
	if (strlen(parameterText) + strlen(additionalText) + 1 > 256)
	{
		return "Error: Maximum size of the char array is 256 chars.";
	}

	char combinedText[256] = "";
	
	strcat_s( combinedText, 256, parameterText);
	strcat_s( combinedText, 256, additionalText);
	
	return combinedText;
}
