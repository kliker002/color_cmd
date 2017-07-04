/* VVerh - 72
   Vniz  - 80
   Vlevo - 75
   Vpravo- 77
   219 - Прямоугольник
*/
#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <cmath>
#include<conio.h>
#include <string>
using namespace std;
enum ConsoleColor
{
        Black         = 0,
        Blue          = 1,
        Green         = 2,
        Cyan          = 3,
        Red           = 4,
        Magenta       = 5,
        Brown         = 6,
        LightGray     = 7,
		DarkGray      = 8,
        LightBlue     = 9,
        LightGreen    = 10,
        LightCyan     = 11,
        LightRed      = 12,
        LightMagenta  = 13,
        Yellow        = 14,
        White         = 15
};
void gotoxy (short x, short y)
{
	COORD coord = {x, y};
	SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), coord);
}
void SetColor(int text) 
{
	
   HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(hStdOut, (WORD)((0 << 4) | text));
}
void SetColor1(int text, int background) 
{
   HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int main()
{
	setlocale(LC_ALL, "Russian");
	SetColor(14);
	short x=0; short y=0;int n_symb= 0; string dainet;int cvibor=99;
	gotoxy(x,y);
	cout<<"Hello!Pick a color text!\n";
	SetColor(11);
	cout<<"Black = 0,Blue  = 1,Green = 2,Cyan = 3,\n";
	cout<< "Red  = 4,Magenta = 5,Brown = 6,LightGray = 7,DarkGray = 8\n";
	cout<<" LightBlue   = 9,LightGreen    = 10,LightCyan= 11,LightRed  = 12,\n";
	cout<< "LightMagenta = 13,Yellow = 14,White = 15\n";
	SetColor(4);
	cout<<"Больше тебе не нужно!\n";
	cout<<"Я жду твоего ввода!\n";// 1- 49ascii,2 - 50ascii, 3-51 ascii;	
	cin>>cvibor;
		while(16>cvibor<1)
		{
		cout<<"Вы неверно ввели COLOR!";
		cout<<"Попробуй еще раз!";
		cin>>cvibor;
		}
		while(cvibor==99){
			cin>>cvibor;
			SetColor(cvibor);
		}
	cout<<"Так то лучше!"<<endl;
	cout<<"Начнем!\n";
	Sleep(3000);
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	SetColor1(4,4);
	cout<<"GANGSDASODIJFOSFJSOFIJSOIFJSOIFJgvfdbhfghsyjdjdujdsssRSOfdgosdffdsoigjsIFJSEOIFJ";
	x=0;y=0;
	SetColor1(15,0);
	setlocale(LC_ALL,"Russian");
	cout<<"\n\n";
	cout<<"Выбор вне меню ограничен до 9 цветов.\nЧтобы воспользоваться другими - нажмите q и соответствующую цифру.\n";
	cout<< "Чтобы выбрать в первой 9 цвет - нажмите Z и соответствующую цифру.";
	cout<<"Нажав на F, вы сможете очистить лист для рисования.";
	setlocale(LC_ALL,"C");
	SetColor(cvibor);
	while(true)
	{	
		
		char cursor=219;
		gotoxy(x,y);
		n_symb=getch();
		if (n_symb==13)
		{
			cout<<cursor;
		}
		else
		{
			
		}
		if(n_symb==72)//Переключение курсора вверх.
		{
			if(y<=0)
			{
				y=0;
			}
			if(y!=0)//if y==4
			{
				y-=1;
			}
		}
		else if(n_symb==80)//Переключение курсора vniz
		{
		
			if(y!=15)
			{
				y+=1;
			}
			else
			{
				if(y>=30)
				{
					y=30;
				}
			}
		}
		
		else if(n_symb==75)//Переключение курсора vlevo
		{
			if(x<=0)
			{
				x=0;
			}
			if(x>0)
			{
				x-=1;
			}
		}
		else if(n_symb==77)//Переключение курсора  vrpavo
		{
			if(x>=78)
			{
				x=78;
			}
			if(x<=78)
			{
				x+=1;
			}
			
		}
		else if(n_symb==239||n_symb==122)
		{
			cvibor=n_symb;
					cvibor=getch();
		if(cvibor==49)
		{
			SetColor(1);
		}
		if(cvibor==50)
		{
			SetColor(2);
		}
		if(cvibor==51)
		{
			SetColor(3);
		}
		if(cvibor==52)
		{
			SetColor(4);
		}
		if(cvibor==53)
		{
			SetColor(5);
		}
		if(cvibor==54)
		{
			SetColor(6);
		}
		if(cvibor==55)
		{
			SetColor(7);
		}
		if(cvibor==56)
		{
			SetColor(8);
		}
		if(cvibor==57)
		{
			SetColor(9);
		}
		}
		else if(n_symb==169||n_symb==113)
		{
			cvibor=n_symb;
			cvibor=getch();
		if(cvibor==49)
		{
			SetColor(10);
		}
		if(cvibor==50)
		{
			SetColor(11);
		}
		if(cvibor==51)
		{
			SetColor(12);
		}
		if(cvibor==52)
		{
			SetColor(13);
		}
		if(cvibor==53)
		{
			SetColor(14);
		}
		if(cvibor==54)
		{
			SetColor(15);
		}
		}
		else if(n_symb==102)
		{
			system("cls");
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			SetColor1(4,4);
			cout<<"GANGSDASODIJFOSFJSOFIJSOIFJSOIFJgvfdbhfghsyjdjdujdsssRSOfdgosdffdsoigjsIFJSEOIFJ";
			x=0;y=0;
			SetColor1(15,0);
			setlocale(LC_ALL,"Russian");
			cout<<"\n\n";
			cout<<"Выбор вне меню ограничен до 9 цветов.\nЧтобы воспользоваться другими - нажмите q и соответствующую цифру.\n";
			cout<< "Чтобы выбрать в первой 9 цвет - нажмите Z и соответствующую цифру.";
			cout<<"Нажав на F, вы сможете очистить лист для рисования.";
			setlocale(LC_ALL,"C");
		}
	}
	system("pause");
	return 0;
}
