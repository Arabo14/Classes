#include "Racer.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Racer::Racer()
    : horseName("Unnamed Horse"), jockeyName("Unnamed Jockey"),
      horseWeight(0.0), jockeyWeight(0.0),
      horseAge(0), horseGender('M'),
      defeatStatus(false), injuryStatus(false), eligibility(true) {}

Racer::Racer(string hName, string jName, double hWeight, double jWeight, int hAge, char hGender)
    : horseName(hName), jockeyName(jName),
      horseWeight(hWeight), jockeyWeight(jWeight),
      horseAge(hAge), horseGender(hGender),
      defeatStatus(false), injuryStatus(false), eligibility(true) {}

void Racer::displayInfo() const {
    cout << "Horse: " << horseName << endl;
    cout << "Jockey: " << jockeyName << endl;
    cout << "Horse's Weight: " << horseWeight << endl;
    cout << "Jockey's Weight: " << jockeyWeight << endl;
    cout << "Horse's Age: " << horseAge << endl;
    cout << "Gender: " << horseGender << endl;
    cout << "Defeated: " << (defeatStatus ? "Yes" : "No") << endl;
    cout << "Injured: " << (injuryStatus ? "Yes" : "No") << endl;
    cout << "Eligible to Race: " << (eligibility ? "Yes" : "No") << endl;
}

void Racer::increaseAge() {
    horseAge++;
    cout << horseName << " is now " << horseAge << " years old." << endl;

    if (horseAge < 6) {
        if (rand() % 100 < 25) {
            injuryStatus = true;
            eligibility = false;
        }
    } else if (horseAge <= 13) {
        if (rand() % 100 < 3) {
            injuryStatus = true;
            eligibility = false;
        }
    } else {
        if (rand() % 100 < 80) {
            eligibility = false;
        }
    }
}

void Racer::compete(Racer &opponent) {
    if (!eligibility || injuryStatus || !opponent.eligibility || opponent.injuryStatus) {
        cout << "One of the racers cannot compete." << endl;
        return;
    }

    double performanceRatio =
        ((horseWeight + jockeyWeight) / (opponent.horseWeight + opponent.jockeyWeight)) * 50;

    int outcome = rand() % 100 + 1;

    if (outcome < performanceRatio) {
        cout << horseName << " wins against " << opponent.horseName << "!" << endl;
        opponent.defeatStatus = true;
    } else {
        cout << opponent.horseName << " wins against " << horseName << "!" << endl;
        defeatStatus = true;
    }
}

// Getters & setters
string Racer::getHorseName() const { return horseName; }
void Racer::setHorseName(string hName) { horseName = hName; }

string Racer::getJockeyName() const { return jockeyName; }
void Racer::setJockeyName(string jName) { jockeyName = jName; }

double Racer::getHorseWeight() const { return horseWeight; }
void Racer::setHorseWeight(double hWeight) { horseWeight = hWeight; }

double Racer::getJockeyWeight() const { return jockeyWeight; }
void Racer::setJockeyWeight(double jWeight) { jockeyWeight = jWeight; }

int Racer::getHorseAge() const { return horseAge; }
void Racer::setHorseAge(int hAge) { horseAge = hAge; }

char Racer::getHorseGender() const { return horseGender; }
void Racer::setHorseGender(char hGender) { horseGender = hGender; }

bool Racer::isDefeated() const { return defeatStatus; }
bool Racer::isInjured() const { return injuryStatus; }
bool Racer::isEligible() const { return eligibility; }
