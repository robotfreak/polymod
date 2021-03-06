#ifndef Noise_h
#define Noise_h
#include "Arduino.h"
#include "Module.h"
#include <Audio.h>

class Noise : public Module {
  public:
    Noise();
    virtual void update();
  private:
    AudioSynthNoiseWhite _noise;
    AudioSynthWaveform _sampleHold;
};

#endif
