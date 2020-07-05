#include <uvw.hpp>
#include <spdlog/spdlog.h>

int main()
{
	spdlog::info("Test");
	auto loop = uvw::Loop::getDefault();
	loop->run();
	return 0;
}
