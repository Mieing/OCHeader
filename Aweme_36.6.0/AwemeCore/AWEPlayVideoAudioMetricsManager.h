@class NSString;

@interface AWEPlayVideoAudioMetricsManager : NSObject

@property (nonatomic) BOOL isAlgorithmModelDownloaded;
@property (nonatomic) BOOL isDetectConfigPrepared;
@property (copy, nonatomic) NSString *algorithmModelPath;
@property (nonatomic) BOOL enableDetect;
@property (nonatomic) long long minDuration;
@property (nonatomic) long long samplingRate;
@property (nonatomic) unsigned long long metricsBitMaskPeak;
@property (nonatomic) unsigned long long metricsBitMaskCutoffFrequency;
@property (nonatomic) unsigned long long metricsBitMaskDCOffset;
@property (nonatomic) unsigned long long metricsBitMaskRMS;
@property (nonatomic) unsigned long long metricsBitMaskPhase;
@property (nonatomic) unsigned long long metricsBitMaskLoudness;
@property (nonatomic) unsigned long long metricsBitMaskMono;

+ (id)samiAudioMetricModelNames;
+ (id)sharedInstance;

- (BOOL)enableAudioMetricsProcessWithDuration:(double)a0;
- (void)openAudioMetricsWithContext:(id)a0 samplerate:(int)a1 channels:(int)a2 duration:(int)a3;
- (void)processAudioMetricsWithContext:(id)a0 audioData:(char **)a1 samples:(int)a2 timeStamp:(long long)a3;
- (void)closeAudioMetricsWithContext:(id)a0;
- (void)prepareAudioMetricsAlgorithmModel;
- (void)prepareAudioMetricsDetectConfig;
- (id)trackParamsWithRes:(id)a0 context:(id)a1;
- (unsigned long long)audioMetricsBitMaskWithDict:(id)a0 context:(id)a1;
- (long long)terminateAudioMetricsAlgorithm:(void *)a0;
- (void)fetchAudioMetricsResultsOnAlgorithmCompleted:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)paramsFromDictionary:(id)a0;

@end
