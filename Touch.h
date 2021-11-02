#pragma once

#include <tchar.h>
#include <sys/timeb.h>
#include <windows.h>

extern bool touch;
extern int monitor;

class Touch : public Menu
{
    public:
        Touch(_TCHAR *inifile): Menu(inifile) {}

        void CreateGui();
        LRESULT CALLBACK WindowCallback(HWND hwnd, UINT msg, 
            WPARAM wParam, LPARAM lParam);
    
    private:
        unsigned int num_programs;
		unsigned int start;
		unsigned int end;
		unsigned int selected;
		launcher_program_t *settings;
		struct timeb beginning;
		struct timeb current;

		launcher_program_t *LoadSettings( _TCHAR *ini_file, unsigned int *final_length );
        
};