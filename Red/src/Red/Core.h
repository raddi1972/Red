#pragma once

#ifdef RED_PLATFORM_WINDOWS
	#ifdef RED_BUILD_DLL
		#define RED_API __declspec(dllexport)
	#else
		#define RED_API __declspec(dllimport)
	#endif // RED_BUILD_DLL
#else
	#error Red engine only supports Windows

#endif // !RED_PLATFORM_WINDOWS

