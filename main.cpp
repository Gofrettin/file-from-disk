using namespace std;
#include "stdafx.h"
#include "injector.h"

int main()
{





	// DEFINE YOUR PATHS
	auto dll_path = XorStr("C:\\Windows\\System32\\injector.exe").c_str();
	auto injector_path = XorStr("C:\\Windows\\System32\\dll.dll").c_str();
	
	// CREATE YOUR FILE FROM MEMORY (BYTES).
	utils::CreateFileFromMemory(dll_path, reinterpret_cast<const char*>(cheat_bytes), sizeof(cheat_bytes));
	utils::CreateFileFromMemory(injector_path, reinterpret_cast<const char*>(injector_bytes), sizeof(injector_bytes));


	
	system(skCrypt("C:\\Windows\\System32\\injector.exe C:\\Windows\\System32\\dll.dll"));
	
	remove(skCrypt("C:\\Windows\\System32\\dll.dll"));
	remove(skCrypt("CC:\\Windows\\System32\\injector.exe"));





}
