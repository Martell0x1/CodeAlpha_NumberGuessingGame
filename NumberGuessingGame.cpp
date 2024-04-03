//
// Created by martell on 4/3/24.
//

#include "NumberGuessingGame.h"
#include <iostream>
using namespace std;

 void NumberGuessingGame::init() {
    srand(time(NULL));
}

NumberGuessingGame::NumberGuessingGame(int length):length(length) {
    NumberGuessingGame::init();
}

std::string NumberGuessingGame::GenerateDigits() {
    string num = "";
    for(int x = 0 ; x <this->getLength(); x++){

        int random_index = rand() % DIGITS.size();
        num+=DIGITS[random_index];
    }
    Shuffle(num);
    return num;
}

std::string NumberGuessingGame::GenerateChars() {
    string result = "";
    for(int x = 0 ;x < this->getLength() ; x++){

        int random_index = rand() % CHARS.size();
        result+=CHARS[random_index];
    }
    Shuffle(result);
    return result;
}

NumberGuessingGame::NumberGuessingGame(string digits, string chars, string sympols , int length)
:DIGITS(std::move(digits)),CHARS(std::move(chars)),SYMPOLS(std::move(sympols)) , length(length)
{}

const string &NumberGuessingGame::getDigits() const {
    return DIGITS;
}

const string &NumberGuessingGame::getChars() const {
    return CHARS;
}

const string &NumberGuessingGame::getSympols() const {
    return SYMPOLS;
}

int NumberGuessingGame::getLength() const {
    return length;
}

void NumberGuessingGame::setLength(int length) {
    NumberGuessingGame::length = length;
}

[[maybe_unused]] std::string NumberGuessingGame::GenerateComplix() {
    string result = "";
    int legth = this->getLength();

    for(int x = 0 ; x < legth/2 ; x++){

        int random_index = rand() % CHARS.size();
        result += CHARS[random_index];
    }

    for(int x = 0 ; x < legth/2 -1; x++){

        int random_index = rand() % DIGITS.size();
        result += DIGITS[random_index];
    }

    result+=SYMPOLS[rand() % SYMPOLS.size()];
    Shuffle(result);
    return result;
}

void NumberGuessingGame::Shuffle(std::string pass) {
    for(int x = 0 ; x < pass.size() ; x++){
        int random_increament = rand() % pass.size();
        char current = pass[x];
        char random = pass[random_increament];
        char temp = current;
        current = random;
        random = temp;
    }
}

int NumberGuessingGame::GenerateDigits(int start, int end) {
    int random  = rand()%end + start;
    return random;
}



