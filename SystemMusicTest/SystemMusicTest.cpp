#include <iostream>
#include <Windows.h>
#define A 110

// 40-15000 Hz Frequency, latency and pause in ms
void sound(int freq, int latency, int pause = 0) {
    Beep(freq, latency);
    Sleep(pause);
}


void Smoke() {
    int freq = 70, // Start frequency
        latency = 400,
        pause = 100;

    sound(98, latency, pause); // 0
    sound(117, latency, pause); // 3
    sound(110, latency, pause + 200); // 5
    sound(98, latency, pause); // 0

    sound(117, latency, pause); // 3
    sound(139, latency, pause - 100); // 6
    sound(110, latency, pause + 400); // 5

    sound(98, latency, pause); // 0
    sound(117, latency, pause); // 3
    sound(110, latency, 0); // 5

    sound(117, latency, 0); // 3
    sound(98, latency + 200, pause); // 0
}

int main()
{
    Smoke();
    Sleep(2000);
}