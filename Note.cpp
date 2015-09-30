//
// Created by Eugene on 29.09.2015.
//

#include "Note.h"
#include <math.h>

# define M_PI           3.14159265358979323846  /* pi */

StreamElement Note::m_sound(time t) {
    double lv_freq = m_tuningForkA
                     * pow(2.0, (double) m_note / 12.0)
                     * pow(2.0, (double) m_accidental / 12.0)
                     * pow(2.0, (double) (m_octave - 1) * 12.0 / 12.0);
    double lv_amplitude = m_cBaseAmplitude * exp(m_LogDecrement * t / m_duration);
    StreamElement s = lv_amplitude * sin(2 * M_PI * lv_freq * t);
    return s;
}

StreamElement Note::getFreq() {
    double lv_freq = m_tuningForkA
                     * pow(2.0, (double) m_note / 12.0)
                     * pow(2.0, (double) m_accidental / 12.0)
                     * pow(2.0, (double) (m_octave - 1) * 12 / 12.0);
    return lv_freq;
}

void Note::play(Stream st) {
    double durationSec = m_bpm/60/4; // duration note in sec
    double durationSampling = durationSec * m_sampling; // duration note in sampling
    double dTime = (double) 1.0 / durationSampling; // delta t

    time thisTime = 0.0;
    for (int i = 0; i < durationSampling; ++i) {
        st[i] = m_sound(thisTime);
        thisTime += dTime;
    }
}