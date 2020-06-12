#include <iostream>
#include <conio.h>
#include <windows.h>
#include <Lmcons.h>
#include <chrono>
#include <thread>
using namespace std;

void Color(int color)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
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

void username()
{
	char username[UNLEN+1];
	DWORD username_len = UNLEN+1;
	GetUserName(username, &username_len);
	cout<< username;
}
void computername()
{
	char computerName[UNLEN+1];
	DWORD computerName_len = UNLEN+1;
	GetComputerName(computerName, &computerName_len);
	cout << computerName;
}
void version()
{
	/*char currentOs[UNLEN+1];
	DWORD currentOs_len = UNLEN+1;
	DWORD currentOs_Handle;
	LPVOID currentOs_lpData=NULL;
	GetFileVersionInfoA(currentOs,currentOs_Handle,currentOs_len,currentOs_lpData);
	cout << currentOs;*/
}


void changeComputerName()
{
	char compName[15];
	cout <<"Curent Computer Name : "; computername();
	cout <<"\nChange Computer Name to : ";cin.getline(compName, sizeof(compName));
	// WINAPI SetComputerNameEx(compName, lpbuffer);
	
}


int main()
{
	motd();
	
	username();
	computername(); 
	changeComputerName();
	/*
	version();
	
	
	*/
}
