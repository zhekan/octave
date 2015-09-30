//
// Created by Eugene on 29.09.2015.
//

#ifndef OCTAVE_PIANO_H
#define OCTAVE_PIANO_H


class Piano {
    int m_sampling; /** sampling rate (48 kHz by default) */
    int m_bpm;      /**  beat per minute */
    double m_cTime;

public:
    Piano(int sampling = 48e3, int bpm = 120) : m_sampling(sampling), m_bpm(bpm) {
        m_cTime = (double) m_bpm/60/4;
    }
};


#endif //OCTAVE_PIANO_H
