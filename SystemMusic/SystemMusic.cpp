#include <iostream>
#include <Windows.h>
#include <thread>

// 40-15000 Hz Frequency, latency and pause in ms
void sound(int freq, int latency = 400, int pause = 0) {
    Beep(freq, latency);
    Sleep(pause);
}

void Chizick() {
    int freq = 400, // Start frequency
        latency = 500,
        pause = 50;

    sound(freq + 10, latency, pause); // 5
    sound(freq + 50, latency, pause); // 9
    sound(freq + 10, latency, pause); // 5
    sound(freq + 50, latency, pause); // 9
    sound(freq + 60, latency, pause); // 10
    sound(freq + 50, latency, pause); // 9
    sound(freq + 20, latency, pause + 1000); // 7

    sound(freq + 50, latency, pause); // 9
    sound(freq + 20, latency, pause); // 7
    sound(freq + 10, latency, pause); // 5
    sound(freq - 10, latency, pause); // 3
    sound(freq + 10, latency, pause); // 5
    sound(freq + 10, latency, pause); // 5
    sound(freq + 10, latency, pause); // 5
}

void Smoke() {
    int freq = 70, // Start frequency
        latency = 400,
        pause = 100;

    sound(98, latency, pause); // 0
    sound(117, latency, pause); // 3
    sound(131, latency, pause + 200); // 5
    sound(98, latency, pause); // 0

    sound(117, latency, pause); // 3
    sound(139, latency, pause - 100); // 6
    sound(131, latency, pause + 400); // 5

    sound(98, latency, pause); // 0
    sound(117, latency, pause); // 3
    sound(131, latency, 0); // 5

    sound(117, latency, 0); // 3
    sound(98, latency + 200, pause); // 0
}

void Stroi() {
    int freq = 0, // Start frequency
        latency = 400,
        pause = 10;

    sound(330, latency, pause); // e
    sound(247, latency, pause); // B
    sound(196, latency, pause); // G
    sound(147, latency, pause); // D
    sound(110, latency, pause); // A
    sound(82, latency, pause); // E

}

void Large_Octa() {
    int freq = 0, // Start frequency
        latency = 400,
        pause = 10;

    sound(65, latency, pause);
    sound(73, latency, pause);
    sound(82, latency, pause);
    sound(87, latency, pause);
    sound(98, latency, pause);
    sound(110, latency, pause);
    sound(123, latency, pause);

}

void Small_Octa() {
    int freq = 0, // Start frequency
        latency = 400,
        pause = 10;

    sound(131, latency, pause);
    sound(147, latency, pause);
    sound(165, latency, pause);
    sound(175, latency, pause);
    sound(196, latency, pause);
    sound(220, latency, pause);
    sound(247, latency, pause);

}

void First_Octa() {
    int freq = 0, // Start frequency
        latency = 400,
        pause = 10;

    sound(262, latency, pause);
    sound(294, latency, pause);
    sound(330, latency, pause);
    sound(349, latency, pause);
    sound(392, latency, pause);
    sound(440, latency, pause);
    sound(494, latency, pause);
}

void Fifth_Octa() {
    int freq = 0, // Start frequency
        latency = 400,
        pause = 10;

    sound(4186, latency, pause);
    sound(4699, latency, pause);
    sound(5274, latency, pause);
    sound(5588, latency, pause);
    sound(6272, latency, pause);
    sound(7040, latency, pause);
    sound(7902, latency, pause);

}

void anime0() {
    while (true) {
        std::cout << "\n\n\n\n\n\n\n\n\n" 
            << "                                        ===\n"
            << "                                        ======\n"
            << "                                        =========\n"
            << "                                        ============\n"
            << "                                        ===============\n"
            << "                                        ==================\n"
            << "                                        =====================\n"
            << "                                        ========================\n"
            << "                                        ===========================\n"
            << "                                        ==============================\n";
        Sleep(1000);
        system("cls");
        std::cout << "\n\n\n\n\n\n\n\n\n" 
            << "                                                                   ===\n"
            << "                                                                ======\n"
            << "                                                             =========\n"
            << "                                                          ============\n"
            << "                                                       ===============\n"
            << "                                                    ==================\n"
            << "                                                 =====================\n"
            << "                                              ========================\n"
            << "                                           ===========================\n"
            << "                                        ==============================\n";
        Sleep(1000);
        system("cls");
    }
}

void anime1() {
    int speed = 500;
    while (true) {
        std::cout << "\n\n\n\n\n\n\n\n\n"
            << "                                        ==============================" << "\n"
            << "                                        ==============================" << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n";
        Sleep(speed);
        system("cls");

        std::cout << "\n\n\n\n\n\n\n\n\n"
            << "                                        ==============================" << "\n"
            << "                                        ==============================" << "\n"
            << "                                        ==                          ==" << "\n"
            << "                                        ==                          ==" << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                                                      " << "\n"
            << "                                                                      " << "\n";
        Sleep(speed);
        system("cls");

        std::cout << "\n\n\n\n\n\n\n\n\n"
            << "                                        ==============================" << "\n"
            << "                                        ==============================" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n";
        Sleep(speed);
        system("cls");

        std::cout << "\n\n\n\n\n\n\n\n\n"
            << "                                                       ===============" << "\n"
            << "                                                       ===============" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                       ===============" << "\n"
            << "                                                       ===============" << "\n";
        Sleep(speed);
        system("cls");

        std::cout << "\n\n\n\n\n\n\n\n\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                        ==============================" << "\n"
            << "                                        ==============================" << "\n";
        Sleep(speed);
        system("cls");

        std::cout << "\n\n\n\n\n\n\n\n\n"
            << "                                                                      " << "\n"
            << "                                                                      " << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                                                    ==" << "\n"
            << "                                        ==                          ==" << "\n"
            << "                                        ==                          ==" << "\n"
            << "                                        ==============================" << "\n"
            << "                                        ==============================" << "\n";
        Sleep(speed);
        system("cls");

        std::cout << "\n\n\n\n\n\n\n\n\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==============================" << "\n"
            << "                                        ==============================" << "\n";
        Sleep(speed);
        system("cls");

        std::cout << "\n\n\n\n\n\n\n\n\n"
            << "                                        ===============               " << "\n"
            << "                                        ===============               " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ==                            " << "\n"
            << "                                        ===============               " << "\n"
            << "                                        ===============               " << "\n";
        Sleep(speed);
        system("cls");
    }
}

int main()
{
    std::thread thr_anime(anime1);
    thr_anime.detach();

    //Large_Octa();
    //Sleep(2000);

    //Small_Octa();
    //Sleep(2000);

    //First_Octa();
    //Sleep(2000);

    //Fifth_Octa();
    //Sleep(2000);

    //Stroi();
    //Sleep(2000);

    //Chizick();
    //Sleep(2000);

    //Smoke();
    //Sleep(2000);
}