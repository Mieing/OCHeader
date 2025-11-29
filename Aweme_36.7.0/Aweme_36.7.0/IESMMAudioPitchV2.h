@class IESMMAudioPitchConfigV2, IESMMAudioProcessorEx;

@interface IESMMAudioPitchV2 : VEAudioEffectBase

@property (retain, nonatomic) IESMMAudioPitchConfigV2 *config;
@property (retain, nonatomic) IESMMAudioProcessorEx *audioProcess;

- (int)process:(float **)a0 inChannel:(int)a1 inSamplesPerChannel:(int)a2 atTime:(double)a3;
- (void)initAudioProcess;
- (void)changeEffectPath:(id)a0 preprocessInfo:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)seekToTime:(double)a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
