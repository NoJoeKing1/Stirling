#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Stirling::Application* Stirling::CreateApplication();
int main(int argc, char** argv)
{
	printf("Stirling Engine\n");
	auto app = Stirling::CreateApplication();
	app->Run();
	delete app;
}
#endif
