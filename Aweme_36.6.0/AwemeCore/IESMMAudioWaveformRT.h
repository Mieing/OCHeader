@interface IESMMAudioWaveformRT : IESMMObject {
    void *_waveformRt;
}

@property (nonatomic) int channels;
@property (nonatomic) double sampleRate;

- (id)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (id)initWithChannels:(int)a0 sampleRate:(double)a1 pointPerSec:(int)a2 waveformType:(long long)a3;

@end
