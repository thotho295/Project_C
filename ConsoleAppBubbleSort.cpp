/*
	Ten: ...
	Lop: ...
	Project: ....
	.....
*/
#include <iostream>
#include <conio.h> 
#include <string>
#include <algorithm>
#include <windows.h> 
#include <cstdlib>
#include <fstream> 
#include <time.h>       /* time */
#include "MyWindows.h";



using namespace std;

#define WIDTH  95
#define HEIGHT 25

#define BLACK			0
#define BLUE			1
#define GREEN			2
#define CYAN			3
#define RED				4
#define MAGENTA			5
#define BROWN			6
#define LIGHTGRAY		7
#define DARKGRAY		8
#define LIGHTBLUE		9
#define LIGHTGREEN		10
#define LIGHTCYAN		11
#define LIGHTRED		12
#define LIGHTMAGENTA	13
#define YELLOW			14
#define WHITE			15
   
string arrayToString(int a[], int size) 
{

	string st = "";
	for (int i = 0; i < size; i++)
	{
		st += to_string(a[i]) + " ";
	}
	return st;
}
void swapByValue(int x, int y) // pass by value
{
	int temp = x;
	x = y;
	y = temp;
};
void swapByPointer(int* x, int* y) // pass by pointer
{
	int temp = *x;
	*x = *y;
	*y = temp;
};
void swapByReference(int& x, int& y) // pass by reference
{
	int temp = x;
	x = y;
	y = temp;
};
void drawArray(MyWindows console, int *a, int w, int size, int left) {
	for (int k = 0; k < size; k++)
	{
		int color = a[k] % 15;
		if (color == BLUE) color = BLACK;
		MyWindows xoa(left + w * k, 1, w - 1, HEIGHT - 4, BLUE, BLUE);
		xoa.clearConsole();
		xoa.drawFrame();
		MyWindows c1(left + w * k, HEIGHT - 4 - a[k], w - 1, a[k], color, WHITE);
		c1.clearConsole();
		c1.drawFrame();
		//console.Write("  ", left + w * k, HEIGHT - 3, BLUE, WHITE);
		console.Write(to_string(a[k]) + " ", left + w * k, HEIGHT - 3, BLUE, WHITE);
	}
} 

int main()
{
	srand(time(0));
	/* initialize random seed: */
	//srand(time(NULL));

	/*MyWindows console(0, 0, WIDTH, HEIGHT, BLUE, WHITE);
	console.clearConsole();
	console.drawFrame();
	console.Write(" Bubble Sort ", 2, 0, BLUE, WHITE);


	/*int a[15] = {};
	int size = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < size; i++)
	{
		a[i] = (rand() % (HEIGHT - 6)) + 2; // 1 to 100
	}

	int w = 3;
	int left = (WIDTH / 2 - (w * size)) / 2;
	drawArray(console, a, w, size, left);

		// bubble sort
		 /*for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - 1 - i; j++)
			{
				for (int k = 0; k < size; k++)
				{
					console.Write("  ", left + w * k, HEIGHT - 2, BLUE, WHITE);
				}
				console.Write("L", left + w * j, HEIGHT - 2, RED, WHITE);
				console.Write("R", left + w * (j + 1), HEIGHT - 2, RED, WHITE);
				if (a[j] > a[j + 1]) {
					swapByPointer(&a[j], &a[j + 1]);
					drawArray(console, a, w, size, left);
				}
				console.Write("L", left + w * j, HEIGHT - 2, RED, WHITE);
				console.Write("R", left + w * (j + 1), HEIGHT - 2, RED, WHITE);
				Sleep(300);
			}
			for (int j = size - 1 - i; j < size; j++)
			{
				console.Write(to_string(a[j]) + " ", left + w * j, HEIGHT - 3, RED, WHITE);
			}
			Sleep(500);
		}
		console.Write(to_string(a[0]) + " ", left, HEIGHT - 3, RED, WHITE);
		console.Write("   ", left, HEIGHT - 2, BLUE, WHITE);
		console.Write("   ", left + w, HEIGHT - 2, BLUE, WHITE);
		console.Write("DONE", (WIDTH - 6) / 2, HEIGHT - 2, BLUE, WHITE);

		char c = _getch();*/



	int select;
	MyWindows console(0, 0, WIDTH, HEIGHT, BLUE, WHITE);
	console.drawFrame();
	console.Write("Menu", 10, 0, YELLOW, RED);
	console.Write(" 1. Bubble Sort", 40, 8, BLACK, RED);
	console.Write(" 2. Selection Sort", 40, 10, BLACK, RED);
	console.Write(" 3. Insertion Sort", 40, 12, BLACK, RED);
	console.Write("Moi ban nhap lua chon :", 10, 15, BLACK, RED);
	/*cout << " -----------------------------------------------TRANG CHU------------------------------------- \n";
	cout << "|                                      ___________________________                            |\n";
	cout << "|                                     |       1. Bubble Sort      |                           |\n";
	cout << "|                                     |___________________________|                           |\n";
	cout << "|                                      ___________________________                            |\n";
	cout << "|                                     |     2. Selection Sort     |                           |\n";
	cout << "|                                     |___________________________|                           |\n";
	cout << "|                                      ___________________________                            |\n";
	cout << "|                                     |     3. Insertion Sort     |                           |\n";
	cout << "|                                     |___________________________|                           |\n";
	cout << " --------------------------------------------------------------------------------------------- \n";*/

	/*cout << "\n";
	cout << "\n";
	cout << "Moi ban nhap lua chon : \n >";*/
	cin >> select;
	switch (select) {
	case 1:
		//	MyWindows console(0, 0, WIDTH, HEIGHT, BLUE, WHITE);
		//	console.clearConsole();
		//	console.drawFrame();
		//	console.Write(" Bubble Sort ", 2, 0, BLUE, WHITE);
		//	int a[15] = { };
		//	int size = sizeof(a) / sizeof(a[0]);

		//	  for (int i = 0; i < size; i++)
		//	{
		//		a[i] = (rand() % (HEIGHT - 6)) + 2; // 1 to 100
		//	}
		//	  /*int stA[] = arrayToString(a, size);
		//	  console.Write("Input: " + stA, 1, 12, BLUE, WHITE);*/
		//	int w = 3;
		//	int left = (WIDTH - (w * size)) / 2;

		//	drawArray(console, a, w, size, left);
		//// bubble sort  
		//	for (int i = 0; i < size - 1; i++)
		//	{
		//		for (int j = 0; j < size - 1 - i; j++)
		//		{
		//			for (int k = 0; k < size; k++)
		//			{
		//				console.Write("  ", left + w * k, HEIGHT - 2, BLUE, WHITE);
		//			}
		//			console.Write("L", left + w * j, HEIGHT - 2, RED, WHITE);
		//			console.Write("R", left + w * (j + 1), HEIGHT - 2, RED, WHITE);
		//			if (a[j] > a[j + 1]) {
		//				swapByPointer(&a[j], &a[j + 1]);
		//				
		//				drawArray(console, a, w, size, left);
		//			}
		//			console.Write("L", left + w * j, HEIGHT - 2, RED, WHITE);
		//			console.Write("R", left + w * (j + 1), HEIGHT - 2, RED, WHITE);
		//			Sleep(100);
		//		}
		//		for (int h = size - 1 - i; h < size; h++)
		//		{
		//			//console.Write(to_string(a[h]) + " ", left + w * h, HEIGHT - 3, RED, WHITE);
		//		}
		//		Sleep(1000);
		//	}
		//	console.Write(to_string(a[0]) + " ", left, HEIGHT - 3, RED, WHITE);
		//	console.Write("   ", left, HEIGHT - 2, BLUE, WHITE);
		//	console.Write("   ", left + w, HEIGHT - 2, BLUE, WHITE);
		//	console.Write("DONE", (WIDTH - 6) / 2, HEIGHT - 2, BLUE, WHITE);

		//	char c = _getch();

		break;
	case 2:
	//	MyWindows console(0, 0, WIDTH, HEIGHT, BLUE, WHITE);
	//	console.clearConsole();
	//	console.drawFrame();
	//	console.Write(" Select Sort ", 2, 0, BLUE, WHITE);
	//	int arr[15] = { };
	//	int size = sizeof(arr) / sizeof(arr[0]);

	//	for (int i = 0; i < size; i++)
	//	{
	//		arr[i] = (rand() % (HEIGHT - 6)) + 2; // 1 to 100
	//	}
	//	/*int stA[] = arrayToString(a, size);
	//	console.Write("Input: " + stA, 1, 12, BLUE, WHITE);*/
	//	int w1 = 3;
	//	int left = (WIDTH / 2 - (w1 * size)) / 2;

	//	drawArray(console, arr, w1, size, left);
	//	// select sort  
	//	for (int i = 0; i < size - 1; i++)
	//	{
	//		int minidx = i;
	//		for (int j = i + 1; j < size; j++)
	//		{
	//			if (arr[j] < arr[minidx])
	//				/*minidx = j;*/
	//			swapByPointer(&arr[j], &arr[minidx]);
	//			drawArray(console, arr, w1, size, left + WIDTH / 2);
	//			Sleep(100);
	//			/*console.Write("", left + w1 * j, HEIGHT - 2, RED, WHITE);
	//			console.Write("", left + w1 * (j + 1), HEIGHT - 2, RED, WHITE);*/
	//		}

	//		/*Sleep(100);
	//		if (a[minidx] < a[i]) {
	//			swapByPointer(&a[minidx], &a[i]);
	//			drawArray(console, a, w, size, left );
	//		}*/
	//		/*Sleep(100);*/
	//	}
	//	drawArray(console, arr, w1, size, left + WIDTH / 2);
	//console.Write(to_string(arr[0]) + " ", left, HEIGHT - 3, RED, WHITE);
	//console.Write("   ", left, HEIGHT - 2, BLUE, WHITE);
	//console.Write("   ", left + w1, HEIGHT - 2, BLUE, WHITE);
	//console.Write("DONE", (WIDTH - 6) / 2, HEIGHT - 2, BLUE, WHITE);

	//char c1 = _getch();

	break;
	//insert sort 
	case 3:
		MyWindows console(0, 0, WIDTH, HEIGHT, BLUE, WHITE);
			console.clearConsole();
			console.drawFrame();
			console.Write(" Insert Sort ", 2, 0, BLUE, WHITE);
			int a[15] = { };
			int size = sizeof(a) / sizeof(a[0]);

			for (int i = 0; i < size; i++)
			{
				a[i] = (rand() % (HEIGHT - 6)) + 2; // 1 to 100
			}
			/*int stA[] = arrayToString(a, size);
			console.Write("Input: " + stA, 1, 12, BLUE, WHITE);*/
			int w = 3;
			int left = (WIDTH  - (w * size)) / 2;
		for (int i = 1; i < size; i++) {
			int j = i - 1;
			while (j >= 0 && a[j] > a[j + 1]) {
				swapByPointer(&a[j], &a[j+1]);
				drawArray(console, a, w, size, left);
				Sleep(500);
				j--;
			}
		}
		char c1 = _getch();
		break;
	}
}

 

