#pragma once  

#include <string>	//needed for std::string

#define DLL_EXPORT __declspec(dllexport)	//shortens __declspec(dllexport) to DLL_EXPORT

#ifdef __cplusplus		//if C++ is used convert it to C to prevent C++'s name mangling of method names
extern "C"
{
#endif

	float DLL_EXPORT getCircleArea(float radius);
	std::string DLL_EXPORT getAdditionalString(std::string baseString);

#ifdef __cplusplus
}
#endif
