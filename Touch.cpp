#include <stdio.h>

#include "Touch.h"
#include "Menu.h"
#include "Debug.h"


LRESULT CALLBACK Touch::WindowCallback(HWND hwnd, UINT msg, 
    WPARAM wParam, LPARAM lParam)
{
    switch( msg )
    {
        case WM_CREATE:
            DEBUG_PRINTF( "Creating Buttons\n" );
            break;
        
        case WM_COMMAND:
            /* TODO: selected = LOWORD(wParam); */
            // https://zetcode.com/gui/winapi/controls/
            break;
    }
}
