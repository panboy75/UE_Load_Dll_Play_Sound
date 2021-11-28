// dllmain.cpp : DLL 애플리케이션의 진입점을 정의합니다.
#include "pch.h"

#include <windows.h>
#include <Mmsystem.h>
#include <iostream>

#pragma comment(lib, "winmm.lib")

/*

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

*/

extern "C" _declspec(dllexport) int add(int a, int b)
{
    PlaySound(L"c:\\temp\\a.wav", NULL, SND_FILENAME);
    return a * b;
}