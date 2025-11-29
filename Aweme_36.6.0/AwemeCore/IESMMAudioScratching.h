@interface IESMMAudioScratching : NSObject {
    struct AudioScratching { struct ScratchingImpl *x0; } *_audioScratch;
}

- (id)initWithSampleRate:(int)a0 channels:(int)a1;
- (int)processInput:(float **)a0 output:(float **)a1 samplesPerCh:(int)a2;
- (void)reset;
- (void)dealloc;
- (void)setSpeedRatio:(float)a0;

@end
