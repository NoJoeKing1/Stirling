

#include <Stirling.h>

class Sandbox : public Stirling::Application
{
public: 
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Stirling::Application* Stirling::CreateApplication()
{
	return new Sandbox();
}