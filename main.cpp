#include <iostream>
#include <ctime>
#include "Racer.h"

using namespace std;

int main() {
    srand((unsigned int)time(0));

    Racer racer1("Seabiscuit", "Nick", 520.0, 80.0, 4, 'M');
    Racer racer2("Bandit", "George", 490.0, 75.0, 8, 'F');

    cout << "Initial details:" << endl;
    racer1.displayInfo();
    cout << endl;
    racer2.displayInfo();
    cout << endl;

    racer1.increaseAge();
    cout << endl;

    cout << "Racing Seabiscuit and Bandit" << endl;
    racer1.compete(racer2);
    cout << endl;

    cout << "Final details:" << endl;
    racer1.displayInfo();
    cout << endl;
    racer2.displayInfo();

    return 0;
}
