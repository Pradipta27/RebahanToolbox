#define _WIN32_WINNT 0x0501
#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>
#include <sstream>
#include <Lmcons.h>
#include <chrono>
#include <thread>
#include <time.h>
using namespace std;

//--BAGIAN SYSTEM----BAGIAN SYSTEM--BAGIAN SYSTEM--BAGIAN SYSTEM--BAGIAN SYSTEM--BAGIAN SYSTEM//
//--BAGIAN SYSTEM----BAGIAN SYSTEM--BAGIAN SYSTEM--BAGIAN SYSTEM--BAGIAN SYSTEM--BAGIAN SYSTEM//
//--BAGIAN SYSTEM----BAGIAN SYSTEM--BAGIAN SYSTEM--BAGIAN SYSTEM--BAGIAN SYSTEM--BAGIAN SYSTEM//
void Color(int color)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void windowSize()
{
	HWND console = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console, &ConsoleRect); 
	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 800, 600, TRUE);
}
void motd()
{
	Color(2);
	string motd1 ="STAY HOME!, ";
	int x=0;
	while (motd1[x] != '\0')
	{
		cout << motd1[x];
		Sleep(20);
		x++;
	}
	Color(13);
	string motd2 ="STAY SAFE!. ";
	x=0;
	while (motd2[x] != '\0')
	{
		cout << motd2[x];
		Sleep(20);
		x++;
	}
	Color(4);
	string motd3 ="#COVID19 ";
	x=0;
	while (motd3[x] != '\0')
	{
		cout << motd3[x];
		Sleep(20);
		x++;
	}
	Color(9);
	string motd4 ="- xyzToolbox";
	x=0;
	while (motd4[x] != '\0')
	{
		cout << motd4[x];
		Sleep(20);
		x++;
	}
	//this_thread::sleep_for(chrono::seconds(4));
	//while (kbhit())
	//{
	getch();	
//	};
	
	system("cls");
	Color(7);
}
void line()
{
	Color (2);
	cout <<" =============================================================================================="<<endl;;
	
}
void computername()
{
	Color (15);
	char computerName[UNLEN+1];
	DWORD computerName_len = UNLEN+1;
	GetComputerName(computerName, &computerName_len);
	Color(7); cout<<" | Computer Name: ";
	Color(4); cout << computerName;
}
void username()
{
	Color (12);
	char username[UNLEN+1];
	DWORD username_len = UNLEN+1;
	GetUserName(username, &username_len);
	Color(7); cout<< " | Username: ";
	Color(4); cout << username;
}
void version()
{
	Color (7);
	cout << "  REBAHAN TOOLBOX";
	Color (6);
	cout << " 0.1.4";
}
void time()
{
	Color (11);
	time_t curtime;
	time(&curtime);
	Color(7);cout << "\n  CURRENT TIME: ";
	Color(1);cout << ctime(&curtime);
	Color(7);
}
void os()
{
	Color (7);
	cout <<"\n  YOUR CURRENT OS: ";
	Color (3);
	NTSTATUS(WINAPI * RtlGetVersion)(LPOSVERSIONINFOEXW);
	OSVERSIONINFOEXW osInfo;

	*(FARPROC*)&RtlGetVersion = GetProcAddress(GetModuleHandleA("ntdll"), "RtlGetVersion");

	if ( NULL != RtlGetVersion )
	{
    osInfo.dwOSVersionInfoSize = sizeof(osInfo);
    RtlGetVersion(&osInfo);
	}
	
	_SYSTEM_INFO sysinfo;
	GetNativeSystemInfo(&sysinfo);
	
    cout << "Windows " <<osInfo.dwMajorVersion<<"."<<osInfo.dwMinorVersion;
	Color(7);cout << " | ";
	Color(3);cout << "BUILD: "<<osInfo.dwBuildNumber;
    Color(7);cout << " | ";
    Color(3);cout << "ARCH: ";
    if (sysinfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_INTEL)
    {
        cout <<"X32";
    }
    if (sysinfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64)
    {
        cout <<"X64";
    }
	Color(7); cout<<"|";
}

void github()
{
	Color(7);cout <<"  GITHUB: ";
	Color(6);cout <<"https://github.com/Pradipta27/RebahanToolbox"<< endl;
}
//--BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR--//	
//--BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR--//
//--BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR----BAGIAN FITUR--//

/*void changeComputerName()
{
	char compName[15];
	cout <<" | Computer Name : "; computername();
	cout <<"\nChange Computer Name to : "; cin.getline(compName, sizeof(compName));
	// WINAPI SetComputerNameEx(compName, lpbuffer);
	
}*/




int main()
{
	windowSize();
	
	//motd();
	line();
	version();
	username();
	computername(); 
	os();
	time();
	github();
	line();
	//line();
	/*changeComputerName();*/

	/*
	version();
	
	*/
}
