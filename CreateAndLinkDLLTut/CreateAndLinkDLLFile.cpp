#pragma once

#include "CreateAndLinkDLLFile.h"

// a sample exported function
float DLL_EXPORT getCircleArea(float radius)
{
	return 3.1416f * (radius * radius);
}
