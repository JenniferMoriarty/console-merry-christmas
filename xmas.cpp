/////////////////////////////////////////
/* Please check the description below */
///////////////////////////////////////

#pragma comment(lib, "Winmm.lib")
#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
using namespace std;
#undef max


void setcolor(unsigned short color)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}

void pressKey() {
	cout << "press enter to continue...\n" << flush;
	cin.clear();
	cin.ignore(numeric_limits <streamsize>::max(), '\n');
}

void merryChristmasSong()
{
	//We wish u.... 1
	cout << "We ";
	Beep(196 * (2 * 1.0595), 500);
	cout << "wish ";
	Beep(262 * (2 * 1.0595), 500);
	cout << "you ";
	Beep(262 * (2 * 1.0595), 300);
	cout << "a ";
	Beep(294 * (2 * 1.0595), 300);
	cout << "Mer";
	Beep(262 * (2 * 1.0595), 300);
	cout << "ry ";
	Beep(247 * (2 * 1.0595), 300);
	cout << "Christ";
	Beep(220 * (2 * 1.0595), 500);
	cout << "mas\n";
	Beep(220 * (2 * 1.0595), 700);
	////We wish u.... 2
	cout << "We ";
	Beep(220 * (2 * 1.0595), 500);
	cout << "wish ";
	Beep(294 * (2 * 1.0595), 500);
	cout << "you ";
	Beep(294 * (2 * 1.0595), 300);
	cout << "a ";
	Beep(330 * (2 * 1.0595), 300);
	cout << "Mer";
	Beep(294 * (2 * 1.0595), 300);
	cout << "ry ";
	Beep(262 * (2 * 1.0595), 300);
	cout << "Christ";
	Beep(220 * (2 * 1.0595), 500);
	cout << "mas\n";
	Beep(196 * (2 * 1.0595), 700);
	////We wish u.... 3
	cout << "We ";
	Beep(196 * (2 * 1.0595), 500);
	cout << "wish ";
	Beep(330 * (2 * 1.0595), 500);
	cout << "you ";
	Beep(330 * (2 * 1.0595), 300);
	cout << "a ";
	Beep(349 * (2 * 1.0595), 300);
	cout << "Mer";
	Beep(330 * (2 * 1.0595), 300);
	cout << "ry ";
	Beep(294 * (2 * 1.0595), 300);
	cout << "Christ";
	Beep(262 * (2 * 1.0595), 500);
	cout << "mas\n";
	Beep(220 * (2 * 1.0595), 700);
	//And a HPNY
	cout << "And ";
	Beep(196 * (2 * 1.0595), 300);
	cout << "a ";
	Beep(196 * (2 * 1.0595), 400);
	cout << "Hap";
	Beep(220 * (2 * 1.0595), 500);
	cout << "py ";
	Beep(294 * (2 * 1.0595), 500);
	cout << "New ";
	Beep(247 * (2 * 1.0595), 500);
	cout << "Year\n";
	Beep(262 * (2 * 1.0595), 900);
	Sleep(300);
	//Good tidings to u
	cout << "Good ";
	Beep(196 * (2 * 1.0595), 500);
	cout << "ti";
	Beep(262 * (2 * 1.0595), 400);
	cout << "dings ";
	Beep(262 * (2 * 1.0595), 400);
	cout << "to ";
	Beep(262 * (2 * 1.0595), 400);
	cout << "you\n";
	Beep(247 * (2 * 1.0595), 900);
	Sleep(50);
	//Wherever u are
	cout << "Wher";
	Beep(247 * (2 * 1.0595), 300);
	cout << "e";
	Beep(262 * (2 * 1.0595), 300);
	cout << "ver ";
	Beep(247 * (2 * 1.0595), 300);
	cout << "you ";
	Beep(220 * (2 * 1.0595), 500);
	cout << "are\n";
	Beep(196 * (2 * 1.0595), 900);
	Sleep(100);
	//Good tidings for X-max
	cout << "Good ";
	Beep(294 * (2 * 1.0595), 500);
	cout << "ti";
	Beep(330 * (2 * 1.0595), 300);
	cout << "dings ";
	Beep(294 * (2 * 1.0595), 400);
	cout << "for ";
	Beep(262 * (2 * 1.0595), 400);
	cout << "Christ";
	Beep(392 * (2 * 1.0595), 400);
	cout << "mas\n";
	Beep(196 * (2 * 1.0595), 900);
	Sleep(100);
	//And a HPNY
	cout << "And ";
	Beep(196 * (2 * 1.0595), 300);
	cout << "a ";
	Beep(196 * (2 * 1.0595), 400);
	cout << "Hap";
	Beep(220 * (2 * 1.0595), 500);
	cout << "py ";
	Beep(294 * (2 * 1.0595), 500);
	cout << "New ";
	Beep(247 * (2 * 1.0595), 500);
	cout << "Year\n";
	Beep(262 * (2 * 1.0595), 900);
}

void christmasTree01()
{
	setcolor(10);
	cout << "                 /\\\                 " << endl;
	setcolor(10);
	cout << "                /";
	setcolor(14);
	cout << "*o";
	setcolor(10);
	cout << "\\\                " << endl;
	cout << "               /";
	setcolor(11);
	cout << "'o'o";
	setcolor(10);
	cout << "\\\               " << endl;
	cout << "              /";
	setcolor(14);
	cout << "*o*o*o";
	setcolor(10);
	cout << "\\\              " << endl;
	cout << "             /";
	setcolor(11);
	cout << "'o'o'o'o";
	setcolor(10);
	cout << "\\\             " << endl;
	cout << "            /";
	setcolor(14);
	cout << "*o*";
	setcolor(15);
	cout << "MERRY";
	setcolor(14);
	cout << "*o";
	setcolor(10);
	cout << "\\\            " << endl;
	cout << "           /";
	setcolor(11);
	cout << "'o'o'o'o'o'o";
	setcolor(10);
	cout << "\\\           " << endl;
	cout << "          /";
	setcolor(14);
	cout << "*o*";
	setcolor(15);
	cout << "CHRISTMAS";
	setcolor(14);
	cout << "*o";
	setcolor(10);
	cout << "\\\          " << endl;
	cout << "         /";
	setcolor(11);
	cout << "'o'o'o'o'o'o'o'o";
	setcolor(10);
	cout << "\\\         " << endl;
	cout << "        /";
	setcolor(14);
	cout << "*o*o*o*o*o*o*o*o*o";
	setcolor(10);
	cout << "\\\        " << endl;
	cout << "       /";
	setcolor(11);
	cout << "'o'o'o'o'o'o'o'o'o'o";
	setcolor(10);
	cout << "\\\       " << endl;
	cout << "      /";
	setcolor(14);
	cout << "*o*o*o*o*o*o*o*o*o*o*o";
	setcolor(10);
	cout << "\\\      " << endl;
	cout << "     /";
	setcolor(11);
	cout << "'o'o'o'o";
	setcolor(10);
	cout << "|     |";
	setcolor(11);
	cout << "'o'o'o'o'";
	setcolor(10);
	cout << "\\\     " << endl;
	cout << "              |     |               " << endl;
	cout << "            __|     |__               " << endl;
	setcolor(15);
}

void christmasTree02()
{
	setcolor(10);
	cout << "                 /\\\                 " << endl;
	setcolor(10);
	cout << "                /";
	setcolor(13);
	cout << "*o";
	setcolor(10);
	cout << "\\\                " << endl;
	cout << "               /";
	setcolor(15);
	cout << "'o'o";
	setcolor(10);
	cout << "\\\               " << endl;
	cout << "              /";
	setcolor(13);
	cout << "*o*o*o";
	setcolor(10);
	cout << "\\\              " << endl;
	cout << "             /";
	setcolor(15);
	cout << "'o'o'o'o";
	setcolor(10);
	cout << "\\\             " << endl;
	cout << "            /";
	setcolor(13);
	cout << "*o*";
	setcolor(14);
	cout << "MERRY";
	setcolor(13);
	cout << "*o";
	setcolor(10);
	cout << "\\\            " << endl;
	cout << "           /";
	setcolor(15);
	cout << "'o'o'o'o'o'o";
	setcolor(10);
	cout << "\\\           " << endl;
	cout << "          /";
	setcolor(13);
	cout << "*o*";
	setcolor(14);
	cout << "CHRISTMAS";
	setcolor(13);
	cout << "*o";
	setcolor(10);
	cout << "\\\          " << endl;
	cout << "         /";
	setcolor(15);
	cout << "'o'o'o'o'o'o'o'o";
	setcolor(10);
	cout << "\\\         " << endl;
	cout << "        /";
	setcolor(13);
	cout << "*o*o*o*o*o*o*o*o*o";
	setcolor(10);
	cout << "\\\        " << endl;
	cout << "       /";
	setcolor(15);
	cout << "'o'o'o'o'o'o'o'o'o'o";
	setcolor(10);
	cout << "\\\       " << endl;
	cout << "      /";
	setcolor(13);
	cout << "*o*o*o*o*o*o*o*o*o*o*o";
	setcolor(10);
	cout << "\\\      " << endl;
	cout << "     /";
	setcolor(15);
	cout << "'o'o'o'o";
	setcolor(10);
	cout << "|     |";
	setcolor(15);
	cout << "'o'o'o'o'";
	setcolor(10);
	cout << "\\\     " << endl;
	cout << "              |     |               " << endl;
	cout << "            __|     |__               " << endl;
	setcolor(15);
}

void christmasTree03()
{
	setcolor(10);
	cout << "                 /\\\                 " << endl;
	setcolor(10);
	cout << "                /";
	setcolor(15);
	cout << "*o";
	setcolor(10);
	cout << "\\\                " << endl;
	cout << "               /";
	setcolor(12);
	cout << "'o'o";
	setcolor(10);
	cout << "\\\               " << endl;
	cout << "              /";
	setcolor(15);
	cout << "*o*o*o";
	setcolor(10);
	cout << "\\\              " << endl;
	cout << "             /";
	setcolor(12);
	cout << "'o'o'o'o";
	setcolor(10);
	cout << "\\\             " << endl;
	cout << "            /";
	setcolor(15);
	cout << "*o*";
	setcolor(10);
	cout << "MERRY";
	setcolor(15);
	cout << "*o";
	setcolor(10);
	cout << "\\\            " << endl;
	cout << "           /";
	setcolor(12);
	cout << "'o'o'o'o'o'o";
	setcolor(10);
	cout << "\\\           " << endl;
	cout << "          /";
	setcolor(15);
	cout << "*o*";
	setcolor(10);
	cout << "CHRISTMAS";
	setcolor(15);
	cout << "*o";
	setcolor(10);
	cout << "\\\          " << endl;
	cout << "         /";
	setcolor(12);
	cout << "'o'o'o'o'o'o'o'o";
	setcolor(10);
	cout << "\\\         " << endl;
	cout << "        /";
	setcolor(15);
	cout << "*o*o*o*o*o*o*o*o*o";
	setcolor(10);
	cout << "\\\        " << endl;
	cout << "       /";
	setcolor(12);
	cout << "'o'o'o'o'o'o'o'o'o'o";
	setcolor(10);
	cout << "\\\       " << endl;
	cout << "      /";
	setcolor(15);
	cout << "*o*o*o*o*o*o*o*o*o*o*o";
	setcolor(10);
	cout << "\\\      " << endl;
	cout << "     /";
	setcolor(12);
	cout << "'o'o'o'o";
	setcolor(10);
	cout << "|     |";
	setcolor(12);
	cout << "'o'o'o'o'";
	setcolor(10);
	cout << "\\\     " << endl;
	cout << "              |     |               " << endl;
	cout << "            __|     |__               " << endl;
	setcolor(15);
}


int main()
{
	int n = 0;
	PlaySound(TEXT("sound.wav"), NULL, SND_APPLICATION | SND_ASYNC);
	cout << "3"; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100);
	cout << "2"; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100); cout << "."; Sleep(100);
	cout << "1"; Sleep(100);
	while (n < 3) {
		system("CLS");
		christmasTree01();
		Sleep(800);
		system("CLS");
		christmasTree02();
		Sleep(800);
		system("CLS");
		christmasTree03();
		n++;
	}
	pressKey();
	PlaySound(NULL, 0, 0);
	//cin.ignore();
	string name;
	cout << "Enter your name: " << endl;
	getline(cin, name);

	Sleep(700);
	cout << "\n    Dear ";
	setcolor(13);
	cout << name;
	setcolor(15);
	cout << " have a happy winter break! (^3^)" << endl;
	Sleep(700);

	cout << "\n\n    (>^_^)>WE WISH YOU A MERRY CHRISTMAS<(^_^<)    " << endl << endl;
	Sleep(700);
	merryChristmasSong();
	Sleep(500);

	if (PlaySound(TEXT("sound.wav"), NULL, SND_APPLICATION | SND_ASYNC))
	{
		Sleep(1000);
		cout << "\n\t\t\t\t\tcredits: coded by 15CK5_HCMUS - Katsuragi Keima" << endl;
		Sleep(1000);
		pressKey();
	}
	return 0;
}
