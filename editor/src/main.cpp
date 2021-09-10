#include "engineCore/App.hpp"
#include <memory>
#include <iostream>

class myApp : public Engine::App
{
	virtual void on_update() override
	{
		std::cout << "Update frame: " << frame++ << std::endl;
	}
	int frame = 0;
};


int main()
{
	auto MyApp = std::make_unique<myApp>();

	int returnCode = MyApp->start(1024, 768, "my first app");

	return returnCode;
}