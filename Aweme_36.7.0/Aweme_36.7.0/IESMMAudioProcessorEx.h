@class NSString;

@interface IESMMAudioProcessorEx : NSObject <IESMMAudioProcessorExProtocol> {
    void *processor;
    float **_inFloatData;
}

@property (nonatomic) int channel;
@property (nonatomic) int sampleRate;
@property (retain, nonatomic) NSString *audioEffectRes;
@property (nonatomic) BOOL isNeedsReset;
@property (copy, nonatomic) NSString *lastParamInfo;
@property (nonatomic) BOOL isPreprocessing;
@property (nonatomic) double timeToSeek;
@property (nonatomic) BOOL needsPreProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void)setPreProcessFromChunk:(const void *)a0 length:(int)a1;
- (id)initWithAudioResPath:(id)a0 audioSample:(int)a1 audioChannel:(int)a2;
- (void)setPreprocessParametersFromChunk:(id)a0;
- (void)changeAudioResPath:(id)a0;
- (int)process:(float **)a0 inChannel:(int)a1 inSamplesPerChannel:(int)a2 atTime:(double)a3;
- (void *)getAudioProcessor;
- (void)releaseAudioProcessor;
- (BOOL)setPreprocessing:(BOOL)a0;
- (void)processSampleBuff:(struct opaqueCMSampleBuffer { } *)a0;
- (const char *)getParameterAsChunk:(int *)a0;
- (id)preProcessAudio:(id)a0;
- (void)processAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 atTime:(double)a1;
- (void).cxx_destruct;
- (void)reset;
- (void)seekToTime:(double)a0;
- (void)dealloc;

@end
