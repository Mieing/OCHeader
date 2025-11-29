@interface IESMMAudioPitchSpeed : IESMMObject {
    struct TimeStretcher { void /* function */ **x0; struct Impl *x1; int x2; int x3; double x4; BOOL x5; int x6; } *_pitchAdjuster;
}

@property (nonatomic) float ratio;
@property (nonatomic) BOOL reservePitch;

- (id)initWithSampleRate:(double)a0 channels:(int)a1 config:(id)a2;
- (void)updateSpeedConfig:(id)a0;
- (void)process:(float **)a0 samples:(unsigned long long)a1 isFinal:(BOOL)a2;
- (void)getResult:(float **)a0 samples:(unsigned long long)a1;
- (int)available;
- (void)reset;
- (void)dealloc;

@end
