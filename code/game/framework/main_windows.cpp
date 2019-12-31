#include "glare/core/common.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "glare/math/vector.h"

using namespace glare;

int WINAPI WinMain(_In_ HINSTANCE application_instance, _In_opt_ HINSTANCE prev_instance, _In_ LPSTR command_line, _In_ int n_show_cmd)
{
	UNUSED(application_instance);
	UNUSED(prev_instance);
	UNUSED(command_line);
	UNUSED(n_show_cmd);

	// Start up
	// #Todo: Load game config XML
	// #Todo: Create Window
	// Init clock
	//g_master_clock = new clock(nullptr);
	// #Todo: Create App

	float32 x = 0.f;
	vec2 a;
	vec2 b;
	a += b;

	while (a.u >= b.x)
	{
	}
	return 0;
}