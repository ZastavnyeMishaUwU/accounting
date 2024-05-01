#include<iostream>
#include<Windows.h>
#include<time.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
void logik();
void zap();
void kateg(string new_kategori);
void zagal();
int choise_menu = 1;
int g_meny = 1;
int vutratu_02 = 1;
int zagal_02 = 1;
bool exiTT = false;
const int width = 40;
const int hight = 20;
const int nn = 20;
string all_kategori[nn] = {};
int money[nn] = {};
int siz = 0;
int size_all = 0;
void meny() {
	system("cls");
	if (choise_menu == 1) {
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (i == 0 || j == 0 || i == hight - 1 || j == width - 1) {
					cout << "#";

				}
				else if (i == 6 && j == 12) {
					cout << " Витрати <--";
					break;
				}
				else if (i == 8 && j == 7) {
					cout << " Загальна статистика";
					break;
				}
				else if (i == 10 && j == 12) {
					cout << " Вийти ";
					break;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else if (choise_menu == 2) {
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{

				if (i == 0 || j == 0 || i == hight - 1 || j == width - 1) {
					cout << "#";
				}
				else if (i == 6 && j == 12) {
					cout << " Витрати";
					break;
				}
				else if (i == 8 && j == 7) {
					cout << " Загальна статистика <--";
					break;
				}
				else if (i == 10 && j == 12) {
					cout << " Вийти ";
					break;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else if (choise_menu == 3) {
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (i == 0 || j == 0 || i == hight - 1 || j == width - 1) {
					cout << "#";

				}
				else if (i == 6 && j == 12) {
					cout << " Витрати";
					break;
				}
				else if (i == 8 && j == 7) {
					cout << " Загальна статистика";
					break;
				}
				else if (i == 10 && j == 12) {
					cout << " Вийти <--";
					break;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
void exiT() {
	system("cls");
	exiTT = true;
}
void vutraty() {
	system("cls");
	if (vutratu_02 == 1) {
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (i == 0 || j == 0 || i == hight - 1 || j == width - 1) {
					cout << "#";
				}
				else {
					cout << " ";
				}
				if (i == 6 && j == 12) {
					cout << "категорія <-- ";
					break;
				}
				if (i == 8 && j == 7) {
					cout << " прайс ";
					break;
				}
				if (i == 10 && j == 12) {
					cout << " меню ";
					break;
				}
			}
			cout << endl;
		}
	}
	else if (vutratu_02 == 2) {
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (i == 0 || j == 0 || i == hight - 1 || j == width - 1) {
					cout << "#";
				}
				else {
					cout << " ";
				}
				if (i == 6 && j == 12) {
					cout << "категорія";
					break;
				}
				if (i == 8 && j == 7) {
					cout << " прайс  <-- ";
					break;
				}
				if (i == 10 && j == 12) {
					cout << " меню ";
					break;
				}
			}
			cout << endl;
		}
	}
	else if (vutratu_02 == 3) {
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (i == 0 || j == 0 || i == hight - 1 || j == width - 1) {
					cout << "#";
				}
				else {
					cout << " ";
				}
				if (i == 6 && j == 12) {
					cout << "категорія ";
					break;
				}
				if (i == 8 && j == 7) {
					cout << " прайс ";
					break;
				}
				if (i == 10 && j == 12) {
					cout << " меню <-- ";
					break;
				}
			}
			cout << endl;
		}
	}
}
void zagal() {
	system("cls");
	if (zagal_02 == 1) {
		for (int i = 0; i < hight; i++)
		{
			for (int j = 0; j < width; j++)
			{
				cout << " ";
				if (i == 6 && j == 12) {
					cout << " список категорій    Загальні витрати " << endl;
					for (size_t i = 0; i < size_all; i++)
					{
						cout << "\t\t   " << all_kategori[i] << "\t\t\t" << money[i] << endl;

					}
				}
				if (i == 10 && j == 12) {
					cout << " меню - space" << endl;
				}
			}
			cout << endl;
		}
	}
}
void logik() {
	if (_kbhit()) {
		switch (_getch()) {
		case 's':
			if (g_meny == 1) {
				if (choise_menu < 3)
					choise_menu++;
				else
					choise_menu = 1;
				meny();
			}
			else if (g_meny == 2) {
				if (vutratu_02 < 3)
					vutratu_02++;
				else
					vutratu_02 = 1;
				vutraty();
			}
			else if (g_meny == 3) {

				zagal();
			}
			break;
		case 'w':
			if (g_meny == 1) {
				if (choise_menu > 1)
					choise_menu--;
				else
					choise_menu = 3;
				meny();
			}
			else if (g_meny == 2) {
				if (vutratu_02 > 1)
					vutratu_02--;
				else
					vutratu_02 = 3;
				vutraty();
			}
			else if (g_meny == 3) {
				zagal();
			}
			break;
		case 32:
			if (g_meny == 1) {
				if (choise_menu == 1) {
					g_meny = 2;
					vutraty();
				}
				else if (choise_menu == 2) {
					g_meny = 3;
					zagal();
				}
				else if (choise_menu == 3) {
					exiT();
				}
			}
			else if (g_meny == 2) {
				if (vutratu_02 == 1) {
					system("cls");
					cout << "input count kategori - ";
					cin >> siz;
					zap();
					vutraty();
				}
				else if (vutratu_02 == 2) {
				}
				else if (vutratu_02 == 3) {
					g_meny = 1;
					meny();
				}
			}
			else if (g_meny == 3) {
				g_meny = 1;
				meny();
			}
			break;
		}
	}
}
void kateg(string new_kategori) {
	for (size_t i = 0; i < nn; i++)
	{
		if (all_kategori[i] == "") {
			all_kategori[i] = new_kategori;
			break;
		}
	}
}
void zap() {
	system("cls");
	string new_kategori;
	for (size_t i = 0; i < siz; i++)
	{
		cout << "input new kategoria - ";
		cin >> new_kategori;
		size_all++;
		kateg(new_kategori);
	}
	system("cls");
	for (size_t i = 0; i < size_all; i++)
	{
		cout << all_kategori[i] << endl;
	}
}
int main() {
	setlocale(LC_ALL, "ukr");
	meny();
	while (!exiTT)
	{
		logik();
	}
	return 0;
}