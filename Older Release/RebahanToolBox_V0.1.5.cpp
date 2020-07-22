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
	MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 1005, 600, TRUE);
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
	Color(1);
	string motd5 ="-- Let Us Handle For You ";
	x=0;
	while (motd5[x] != '\0')
	{
		cout << motd5[x];
		Sleep(20);
		x++;
	}
	Color(14);
	string motd6 ="-- Press Any Button To Continue";
	x=0;
	while (motd6[x] != '\0')
	{
		cout << motd6[x];
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
	cout <<" ======================================================================================================================="<<endl;;
	
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
	cout << " 0.1.5";
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
 
void option()
{
	int installer;
	Color (3); cout << "  INSTALLER\t\t\t" << "\t\t\t\tOther" << endl;
	Color (7); cout << "  -----------\t\t\t" << "\t\t\t\t------"<< endl;
	Color (11);
	cout << "  [1] | " 	<< "Winamp\t\t\t"<< 
				"\t\t\t\t[6]  | "<<	"Fork"<< endl;
	cout << "  [2] | " 	<<"VLC Media Palyer\t\t" << 
				"\t\t\t[7]  | "<<	"Spoon"<< endl;
	cout << "  [3] | "	<< "Google Chrome\t\t\t" <<
				"\t\t\t[8]  | "<<	"Knife"<< endl;
	cout << "  [4] | "	<< "Mozila Firefox\t\t\t"<< 
				"\t\t\t[9]  | "<<	"Gun"<< endl;
	cout << "  [5] | "	<< "Dev-C++\t\t\t"<<
				"\t\t\t\t[10] | "<< "Grenande"<< endl;	
	Color (15); cout << " Type Option:";
	cin >> installer;
	
	switch(installer)
	{
		case 1:
			Color (10);cout << "Winamp " << endl;
			break;
		case 2:
			Color (10);cout << "VLC Media Palyer " << endl;
			break;
		case 3:
			Color (10);cout << "Google Chrome" << endl;
			break;
		case 4:
			Color (10);cout << "Mozila Firefox" << endl;
			break;
		case 5:
			Color (10);cout << "Dev-C++" << endl;
			break;
		case 6:
			Color (10);cout << "Fork" << endl;
			break;
		case 7:
			Color (10);cout << "Spoon" << endl;
			break;
		case 8:
			Color (10);cout << "Knife" << endl;
			break;
		case 9:
			Color (10);cout << "Gun" << endl;
			break;
		case 10:
			Color (10);cout << "Grenade" << endl;
			break;
		default :
			Color (4);cout << "Wrong Input" << endl;
	}
}

void nothing()
{
	Color (7);
	cout << "";
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
	option();
	
	nothing();
	//line();
	/*changeComputerName();*/

	/*
	version();
	
	*/
}
