#pragma once
#include "Core.h"

namespace Red {

	class RED_API Application
	{
	public:

		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined by client
	Application* CreateApplication();

}

