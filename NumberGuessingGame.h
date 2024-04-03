//
// Created by martell on 4/3/24.
//

#ifndef UNTITLED_NUMBERGUESSINGGAME_H
#define UNTITLED_NUMBERGUESSINGGAME_H

#include <iostream>
class NumberGuessingGame {
private:
    const std::string DIGITS = "0123456789";
    const std::string CHARS = "abcdefghijklmnopqrstuvwxyz";
    const std::string SYMPOLS = "!@#$%^&*()-_+=~`[]{}|;:,.<>?";
    int length;

    void Shuffle(std::string pass);
public:
    static void init();

    NumberGuessingGame(int length);
    NumberGuessingGame(
            std::string  digits,
            std::string chars,
            std::string sympols ,
            int length
            );
    [[nodiscard]] std::string GenerateChars();
    [[nodiscard]] std::string GenerateDigits();
    [[nodiscard]] int GenerateDigits(int start , int end);
    [[maybe_unused]] [[nodiscard]] std::string GenerateComplix();

    int getLength() const;

    void setLength(int length);

    [[nodiscard]] const std::string &getDigits() const;

    [[nodiscard]] const std::string &getChars() const;

    [[nodiscard]] const std::string &getSympols() const;


};


#endif //UNTITLED_NUMBERGUESSINGGAME_H
