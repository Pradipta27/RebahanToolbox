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
#include <stdio.h>
#include <fstream>
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
	string motd1 ="STAY HOME! ";
	int x=0;
	while (motd1[x] != '\0')
	{
		cout << motd1[x];
		Sleep(20);
		x++;
	}
	Color(13);
	string motd2 ="STAY SAFE! ";
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
	Color(4);
	string motd4 ="- Rebahan Toolbox ";
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
	string motd6 ="-- Press Any Key To Continue";
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
	cout << " 0.1.7";
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
int main();
void github()
{
	Color(7);cout <<"  GITHUB: ";
	Color(6);cout <<"https://github.com/Pradipta27/RebahanToolbox"<< endl;
}
void header();
void option()
{
	int installer;
	Color (3); cout << "  INSTALLER\t\t\t" << "\t\t\t\tOTHER" << endl;
	Color (7); cout << "  -----------\t\t\t" << "\t\t\t\t------"<< endl;
	Color (11);
	cout << "  [1] | " 	<< "Google Chrome Standalone X64\t"<< 
				"\t\t\t[9]  | " <<	"XAMPP for Windows" << endl;
	cout << "  [2] | " 	<< "Mozilla Firefox - 75.0\t" << 
				"\t\t\t\t[10] | "<<"Blender - 2.8.2"<< endl;
	cout << "  [3] | "	<< "Libre Office - 6.4.4\t\t" <<
				"\t\t\t[11] | "<<	"WinRAR 5.9.0 x64"<< endl;
	cout << "  [4] | "	<< "Notepad++ - 7.8.6\t\t"<< 
				"\t\t\t[12] | "<<	"Adobe Reader 19012"<< endl;
	cout << "  [5] | "	<< "VirtualBox - 6.1.6\t\t"<<
				"\t\t\t[13] | "<< "Gparted-live 0.25"<< endl;
	cout << "  [6] | "	<< "Filezilla - 3.47.1\t\t"<<
				"\t\t\t[14] | "<< "Rufus-3.10"<< endl;
	cout << "  [7] | "	<< "VLC - 3.0.10 \t\t\t"<<
				"\t\t\t[15] | "<< "Utorrent-3.5.5 Build 4x"<< endl;
	cout << "  [8] | "	<< "Users Requests...\t\t\t"<<
				"\t\t[16] | "<< "Putty-0.73 x64"<< endl;	
	Color (15); cout << "\n Type Option : ";
	cin >> installer;
	system("cls");
	header();
	switch(installer)
	{
		//CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--//
		//CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--//
		//CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--CASE BUAT DOWNLOAD--//
		case 1:
			Color (10);cout << "Google Chrome Standalone X64" << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/Google.Chrome/ChromeStandaloneSetup64.exe -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && ChromeStandaloneSetup64.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 2:
			Color (10);cout << "Mozilla Firefox Setup 75.0" << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/Mozilla.Firefox/win64/Firefox%20Setup%2075.0.exe -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && Firefox Setup 75.0.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 3:
			Color (10);cout << "Libre Office_6.4.4 x64" << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget https://mirror.labkom.id/tdf/libreoffice/stable/6.4.4/win/x86_64/LibreOffice_6.4.4_Win_x64.msi -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && LibreOffice_6.4.4_Win_x64.msi");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 4:
			Color (10);cout << "Notepad++ 7.8.6" << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/Notepad++/npp.7.8.6.Installer.x64.exe -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && npp.7.8.6.Installer.x64.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 5:
			Color (10);cout << "VirtualBox 6.1.6 " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/VirtualBox/VirtualBox-6.1.6-137129-Win.exe -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && VirtualBox-6.1.6-137129-Win.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 6:
			Color (10);cout << "Filezilla - 3.47.1 x64 " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/FileZilla/FileZilla_3.47.1_win64_sponsored-setup.exe -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && FileZilla_3.47.1_win64_sponsored-setup.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 7:
			Color (10);cout << "VLC - 3.0.10 x64 " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://ftp.gnome.org/mirror/videolan.org/vlc/last/win64/vlc-3.0.10-win64.exe -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && vlc-3.0.10-win64.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 8:
			//request();
			cout << "Users Request will Come Sooner than you'll Expected... Stay Tuned !!";
			break;
		case 9:
			Color (10);cout << "XAMPP - 7.2.30 x64 " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/XAMPP/xampp-windows-x64-7.2.30-0-VC15-installer.exeh -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && xampp-windows-x64-7.2.30-0-VC15-installer.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 10:
			Color (10);cout << "Blender - 2.8.2 x64 " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/Blender/blender-2.82a-windows64.msi -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && blender-2.82a-windows64.msi");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 11:
			Color (10);cout << "WinRAR 5.9.0 x64 " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/WinRAR/winrar-x64-590.exe -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && winrar-x64-590.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 12:
			Color (10);cout << "Adobe Reader " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/Adobe/Adobe.Acrobat.Reader/AcroRdrDC1901220034.exe -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && AcroRdrDC1901220034.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 13:
			Color (10);cout << "Gparted Live " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/GParted/gparted-live-0.25.0-3-i686.iso -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && gparted-live-0.25.0-3-i686.iso");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 14:
			Color (10);cout << "Rufus 3.10 " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/Rufus/rufus-3.10.exe -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && rufus-3.10.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 15:
			Color (10);cout << "Utorrent 3.5 Build 4x " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/uTorrent/utorrent-3.5.5build45449.exe -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && utorrent-3.5.5build45449.exe");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		case 16:
			Color (10);cout << "Putty 0.73 x64 " << endl;
			Color (7);cout << "The Downloaded file will be opened shortly after it finished."<<endl;
			Color (10);system("cd wget && wget.exe -nd https://soft.uclv.edu.cu/Putty/putty-64bit-0.73-installer.msi -q --progress=bar --report-speed=bits --show-progress");
			system("cd wget && putty-64bit-0.73-installer.msi");
			Color (7);cout << "The Downloaded file are successfully opened.";
			break;
		//CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--//
		//CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--//
		//CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--CASE BUAT FITUR--//
		default :
			Color (4);cout << "  This Option is not available" << endl << "  Program is terminating";
			Sleep(3000);
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
void header()
{
	line();
	version();
	username();
	computername(); 
	os();
	time();
	github();
	line();
}

int main()
{
	windowSize();
	motd();
	header();
	option();
	nothing();
}
