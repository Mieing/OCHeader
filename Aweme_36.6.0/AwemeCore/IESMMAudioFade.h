@interface IESMMAudioFade : NSObject {
    void *_fadingHandle;
}

@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) long long fadeInCurve;
@property (nonatomic) long long fadeOutCurve;
@property (nonatomic) double totalDuration;

- (id)initWithConfig:(id)a0 samplerate:(int)a1 channels:(int)a2;
- (void)processInput:(float **)a0 output:(float **)a1 samplesPerChannel:(int)a2 timestamp:(double)a3;
- (void)processInputMono:(float *)a0 output:(float *)a1 samplesPerChannel:(int)a2 timestamp:(double)a3;
- (void)updateWithConfig:(id)a0;
- (id)init;
- (void)dealloc;

@end
