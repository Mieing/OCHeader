@class VEAudioConfig, IESMMAudioPitch, IESMMAudioPitchSpeed, IESMMAudioDetection, IESMMAudioSamiFilter, IESMMAudioBalance, IESMMAudioDenoise, IESMMAudioDSP, IESMMAudioFade, IESMMAudioSamiProcessorFilter, IESMMAudioLimiter, IESMMAudioScratching, IESMMAudioPitchV2;

@interface VEAudioEffectUnit : IESMMObject

@property (retain, nonatomic) IESMMAudioLimiter *limiterFilter;
@property (retain, nonatomic) IESMMAudioPitch *pitchFilter;
@property (retain, nonatomic) IESMMAudioPitchV2 *pitchFilterV2;
@property (retain, nonatomic) IESMMAudioFade *fadeFilter;
@property (retain, nonatomic) IESMMAudioPitchSpeed *speedFilter;
@property (retain, nonatomic) IESMMAudioScratching *audioScratchFilter;
@property (retain, nonatomic) IESMMAudioDenoise *denoiseFilter;
@property (retain, nonatomic) IESMMAudioBalance *balanceFilter;
@property (retain, nonatomic) IESMMAudioDetection *detectionFilter;
@property (retain, nonatomic) IESMMAudioDSP *dspFilter;
@property (retain, nonatomic) IESMMAudioSamiFilter *samiDenoiseFilter;
@property (retain, nonatomic) IESMMAudioSamiProcessorFilter *samiPitchFilter;
@property (nonatomic) long long channels;
@property (nonatomic) double sampleRate;
@property (retain, nonatomic) VEAudioConfig *audioConfig;
@property (nonatomic) double audioKeyFrameVolume;

- (int)processSamiFtgru:(float **)a0 samples:(int)a1 filter:(id)a2;
- (int)processSpeed:(float **)a0 samples:(unsigned long long)a1 maxSamples:(unsigned long long)a2 filter:(id)a3;
- (int)processCurveSpeed:(float **)a0 samples:(unsigned long long)a1 maxSamples:(unsigned long long)a2 filter:(id)a3 curveRatio:(double)a4;
- (int)processPitch:(float **)a0 samples:(int)a1 filter:(id)a2;
- (int)processPitchV2:(float **)a0 samples:(int)a1 filter:(id)a2 atTime:(double)a3;
- (int)processSamiPitch:(float **)a0 samples:(int)a1 filter:(id)a2 atTime:(double)a3;
- (int)processDetection:(float **)a0 samples:(int)a1 filter:(id)a2;
- (int)processBalance:(float **)a0 samples:(int)a1 filter:(id)a2;
- (void)processVolume:(float **)a0 samples:(int)a1 filter:(id)a2 frameTime:(double)a3;
- (void)processFade:(float **)a0 samples:(int)a1 filter:(id)a2 frameTime:(double)a3;
- (int)processDenoise:(float **)a0 samples:(int)a1 filter:(id)a2;
- (int)processDSP:(float **)a0 samples:(int)a1 filter:(id)a2;
- (double)getCurrentVolumnAtPts:(double)a0 withVolumeConfig:(id)a1;
- (double)getCurrentVolumnAtPts:(double)a0;
- (unsigned int)processIntervalInput:(float **)a0 inputSamples:(unsigned int)a1 bufferMaxSamples:(unsigned int)a2 frameTime:(double)a3 curveRatio:(double)a4;
- (void).cxx_destruct;
- (void)reset;
- (void)seekToTime:(double)a0;
- (id)initWithConfig:(id)a0;

@end
