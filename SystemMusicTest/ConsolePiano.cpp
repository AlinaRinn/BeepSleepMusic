#include <iostream>
#include <Windows.h>
#include <conio.h>


// 40-15000 Hz Frequency, latency and pause in ms
void sound(int freq, int latency = 350, int pause = 0) {
	Beep(freq, latency);
	Sleep(pause);
}

int main()
{
	char x;
	std::cout << "Press button 1-7, q-u\n";
	while (true) {
		x = _getch();;
		switch (x)
		{
		case '1': sound(131); break;
		case '2': sound(147); break;
		case '3': sound(165); break;
		case '4': sound(175); break;
		case '5': sound(196); break;
		case '6': sound(220); break;
		case '7': sound(247); break;

		case 'q': sound(262); break;
		case 'w': sound(294); break;
		case 'e': sound(330); break;
		case 'r': sound(349); break;
		case 't': sound(392); break;
		case 'y': sound(440); break;
		case 'u': sound(494); break;

		default: break;
		}
	}
}