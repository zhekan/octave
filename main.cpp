#include <iostream>
#include "Note.h"
using namespace std;

int main() {
    int octave = 1;
    int sampling = 48e3;
    int bpm = 120;

    Note noteC = Note(-9, octave, 1, 0, sampling, bpm);
    cout << "C " << noteC.getFreq() << endl;

    Note noteD = Note(-7, octave, 1, 0, sampling, bpm);
    cout << "D " << noteD.getFreq() << endl;

    Note noteE = Note(-5, octave, 1, 0, sampling, bpm);
    cout << "E " << noteE.getFreq() << endl;

    Note noteF = Note(-4, octave, 1, 0, sampling, bpm);
    cout << "F " << noteF.getFreq() << endl;

    Note noteG = Note(-2, octave, 1, 0, sampling, bpm);
    cout << "G " << noteG.getFreq() << endl;

    Note noteA = Note(0, octave, 1, 0, sampling, bpm);
    cout << "A " << noteA.getFreq() << endl;

    Note noteH = Note(2, octave, 1, 0, sampling, bpm);
    cout << "H " << noteH.getFreq() << endl;

    system("pause");
    return 0;
}