//
// Created by Eugene on 29.09.2015.
//

#ifndef OCTAVE_SYNTHESIZER_H
#define OCTAVE_SYNTHESIZER_H


class synthesizer {
    int m_sampling; /** sampling rate (48 kHz by default) */
    int m_bpm;      /**  beat per minute */


public:
    synthesizer() {
        m_sampling = 48e3;
        m_bpm = 120;
    }

    void setM_bpm(int m_bpm) {
        synthesizer::m_bpm = m_bpm;
    }

    void setM_sampling(int m_sampling) {
        synthesizer::m_sampling = m_sampling;
    }


    int getM_sampling() const {
        return m_sampling;
    }

    int getM_bpm() const {
        return m_bpm;
    }
};


#endif //OCTAVE_SYNTHESIZER_H
