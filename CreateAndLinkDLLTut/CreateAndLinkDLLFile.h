#pragma once  

#include <string>

#define DLL_EXPORT __declspec(dllexport)

#ifdef __cplusplus
extern "C"
{
#endif

	float DLL_EXPORT getCircleArea(float radius);
	std::string DLL_EXPORT getCircleString(std::string baseString);

#ifdef __cplusplus
}
#endif
