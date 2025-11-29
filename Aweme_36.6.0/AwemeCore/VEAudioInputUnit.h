@interface VEAudioInputUnit : VEAudioBaseUnit

- (void)downSampleData:(id)a0;
- (void)processCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 nulldatasize:(unsigned int)a1;
- (void)processBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 nulldatasize:(unsigned int)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)processNullData:(unsigned int)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
