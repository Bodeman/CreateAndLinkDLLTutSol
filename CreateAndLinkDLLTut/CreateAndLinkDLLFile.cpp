#pragma once

#include "CreateAndLinkDLLFile.h"

//Exported method that calculates the are of a circle by a given radius
float DLL_EXPORT getCircleArea(float radius)
{
	return float(3.1416f * (radius * radius));
}

//Exported method that adds a string to a given string
std::string DLL_EXPORT getAdditionalString(std::string baseString)
{
	std::string additionalString = " + AdditionalStringFromDLL";
	baseString = baseString + additionalString;

	return std::string(baseString);
}