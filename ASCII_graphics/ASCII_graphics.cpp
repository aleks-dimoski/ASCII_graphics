#include <string>
#include <iostream>
#include "ASCII_graphics.h"

using namespace std;

string charScale = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/1?-+~<>i!lI;:,\"^`'. ";

ASCII_graphics::ASCII_graphics() {}

int ASCII_graphics::run()
{
    string line;
    for (int q = 0; q < 50; q++) {
        for (int i = 0; i < 50; i++) {
            line.append(1, ASCII_graphics::determineChar(q * q + i * i));
        }
        cout << line << "\n";
        line = "";
    }
    return 0;
};

char ASCII_graphics::determineChar(double level) {
    double max = (25.0 * 25.0 + 25.0 * 25.0);
    if (level > max) {
        return charScale.at(0);
    }
    else if (level < 0) {
        return charScale.at(charScale.size() - 1);
    }
    else {
        //cout << (1-level / max)*(charScale.size()-1) << " ";
        return charScale.at(int((1.0 - level / max) * (charScale.size() - 1)));
    }
};

int main()
{
    ASCII_graphics graphics = ASCII_graphics();
    graphics.run();
    return 0;
}

