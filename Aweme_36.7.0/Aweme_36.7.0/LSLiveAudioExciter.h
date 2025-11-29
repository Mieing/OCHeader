@interface LSLiveAudioExciter : NSObject {
    struct Exciter { float x0; int x1; int x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; float x11; int x12; } *_exciterLeft;
    struct Exciter { float x0; int x1; int x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; float x11; int x12; } *_exciterRight;
    long long _sampleRate;
    double _gain;
    long long _highpassfreq;
}

- (void)initExciterWithGain:(double)a0 highpassfreq:(long long)a1 sampleRate:(long long)a2;
- (void)freeExciter;
- (id)initWithGain:(double)a0 highpassfreq:(long long)a1 sampleRate:(long long)a2;
- (void)updateFormat:(id)a0;
- (BOOL)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 outputL:(float *)a1 outputR:(float *)a2;
- (void)processAudio:(float *)a0 output:(float *)a1 samples:(int)a2 channel:(int)a3;
- (void)dealloc;

@end
