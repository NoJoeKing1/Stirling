#pragma once

#include "Core.h"

namespace Stirling {
	
	class STIRLING_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	// To be define in CLIENT
	Application* CreateApplication();
}

