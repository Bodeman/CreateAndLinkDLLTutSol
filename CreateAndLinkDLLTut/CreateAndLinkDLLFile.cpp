#pragma once

#include "CreateAndLinkDLLFile.h"

// a sample exported function
float DLL_EXPORT getCircleArea(float radius)
{
	return 3.1416f * (radius * radius);
}

std::string DLL_EXPORT getCircleString(std::string baseString)
{
	std::string additionalString = std::string("AdditionalStringFromDLL");
	baseString = std::string(baseString + additionalString);

	return baseString;
}