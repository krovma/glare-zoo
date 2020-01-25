#include "glare/core/common.h"
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "glare/math/vector.h"
#include "glare/core/window.h"

using namespace glare;

bool RUN = true;

bool game_windows_message_handling_procedure(void* hwnd, unsigned long int message_code, unsigned long long int wparam, long long int lparam)
{
	if (message_code == WM_CLOSE) {
		RUN = false;
		return true;
	}
	return false;
}

int WINAPI WinMain(_In_ HINSTANCE application_instance, _In_opt_ HINSTANCE prev_instance, _In_ LPSTR command_line, _In_ int n_show_cmd)
{
	UNUSED(application_instance);
	UNUSED(prev_instance);
	UNUSED(command_line);
	UNUSED(n_show_cmd);
	DEFAULT_WINDOW_EVENT_PROC = game_windows_message_handling_procedure;
	// Start up
	// #Todo: Load game config XML
	// #Todo: Create Window
	window* m_window = new window();
	m_window->create("Glare Zoo", 1.0f, 0.9f, DEFAULT_WINDOW_EVENT_PROC);
	// Init clock
	//g_master_clock = new clock(nullptr);
	// #Todo: Create App

	while (RUN)
	{
		m_window->begin_frame();
		m_window->end_frame();
	}

	delete m_window;
	return 0;
}