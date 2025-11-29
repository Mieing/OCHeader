@interface IESMMAudioWaveform : IESMMObject {
    struct WaveformVisualizer { unsigned long long x0; unsigned char x1; } *_waveform;
}

@property (nonatomic) int channels;
@property (nonatomic) double sampleRate;
@property (nonatomic) int pointCount;

- (id)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (id)initWithChannels:(int)a0 sampleRate:(double)a1 pointCount:(int)a2 waveformType:(long long)a3;
- (void)dealloc;

@end
