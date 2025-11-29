@interface VEAudioFilter : IESMMObject

- (id)initWithSampleRate:(int)a0 channels:(int)a1 config:(id)a2;
- (int)process:(float **)a0 samples:(unsigned long long)a1 channels:(int)a2;
- (int)processEnd;
- (void)reset;

@end
