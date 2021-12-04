#include <Red.h>

class App : public Red::Application
{

public:
	App()
	{

	}

	~App()
	{

	}


};

Red::Application* Red::CreateApplication()
{
	return new App();
}
