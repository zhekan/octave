//
// Created by Eugene on 29.09.2015.
//

#ifndef OCTAVE_NOTE_H
#define OCTAVE_NOTE_H

typedef float *Stream;
typedef float StreamElement;
typedef float time;


/** @brief test */
class Note {
private:
    /** note:
     * C = -9
     * D = -7
     * E = -5
     * F = -4
     * G = -2
     * A =  0
     * B =  H */
    int m_note;

    /** octave:
     * -3 - 27.5,
     * -2 - 55,
     * -1 - 110,
     * 0 - 220,
     * 1 - 440,
     * 2 - 880
     * 3 - 1760
     * 4 - 3520
     * 5 - 7040 */
    int m_octave;

    /** duration:
     * Massima      8       3
     * Lunga        4       2
     * Breve        2       1
     * Semibreve    1       0
     * Minima       1/2     -1
     * Semiminima   1/4     -2
     * Croma        1/8     -3
     * Semicroma    1/16    -4
     * Biscroma     1/32    -5
     * Semibiscroma 1/64    -6
     * Fusa         1/128   -7
     * Semifusa     1/256   -8  */
    int m_duration;

    //TODO: note point duration

    /** Accidental :
     * flat     -1
     * sharp    1*/
    int m_accidental;

    const float m_cBaseAmplitude = 1.0;   /** base amplitude */
    const float m_LogDecrement = 2.0;     /** logarithmic decrement */
    const float m_tuningForkA = 440.0;      /** tuning fork A1 (440.0 Hz by default) */

    int m_sampling; /** sampling rate (48 kHz by default) */
    int m_bpm;      /**  beat per minute */

    StreamElement m_sound(time t);

public:
    Note(int note, int octave, int duration, int accidental, int sampling, int bpm) :
            m_note(note),
            m_octave(octave),
            m_duration(duration),
            m_accidental(accidental),
            m_sampling(sampling),
            m_bpm(bpm){ }

    void play(Stream st);

    StreamElement getFreq();
};


#endif //OCTAVE_NOTE_H
