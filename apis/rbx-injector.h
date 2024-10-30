#include <Windows.h>
#include <string>

// use as const char* dllPath, const char* callbackName

HMODULE hModule = LoadLibraryA("rbx-injector.dll");

typedef int (*inj_type)(const char*, const char*);

namespace rbx_injector
{
    inj_type inject = (inj_type)GetProcAddress(hModule, "rbx_inject");
}