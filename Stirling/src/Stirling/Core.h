#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define STIRLING_API __declspec(dllexport)
	#else
		#define STIRLING_API __declspec(dllimport)
	#endif
#else
	#error Stirling only supports Windows!
#endif
