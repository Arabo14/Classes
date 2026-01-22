#ifndef RACER_H
#define RACER_H

#include <string>
using namespace std;

class Racer {
private:
    string horseName;
    string jockeyName;
    double horseWeight;
    double jockeyWeight;
    int horseAge;
    char horseGender;
    bool defeatStatus;
    bool injuryStatus;
    bool eligibility;

public:
    Racer();
    Racer(string hName, string jName, double hWeight, double jWeight, int hAge, char hGender);

    void displayInfo() const;
    void increaseAge();
    void compete(Racer &opponent);

    // Getters and setters
    string getHorseName() const;
    void setHorseName(string hName);

    string getJockeyName() const;
    void setJockeyName(string jName);

    double getHorseWeight() const;
    void setHorseWeight(double hWeight);

    double getJockeyWeight() const;
    void setJockeyWeight(double jWeight);

    int getHorseAge() const;
    void setHorseAge(int hAge);

    char getHorseGender() const;
    void setHorseGender(char hGender);

    bool isDefeated() const;
    bool isInjured() const;
    bool isEligible() const;
};

#endif
