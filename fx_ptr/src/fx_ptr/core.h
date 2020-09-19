#pragma once

 
#ifdef FX_PLATFORM_WINDOWS
     #ifdef FX_BUILD_DLL
              #define FX_API __declspec(dllexport)

     #else 
            #define FX_API __declspec(dllimport)

    #endif // FX_BUILD_DLL
#else 
  #error fx_ptr only support windows!
#endif // FX_PLATFORM_WINDOW
