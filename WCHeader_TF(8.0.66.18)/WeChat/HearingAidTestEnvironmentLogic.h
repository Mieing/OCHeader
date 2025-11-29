@class HearingAidRecorderLogic, NSMutableArray, NSString;
@protocol HearingAidInitLogicDelegate;

@interface HearingAidTestEnvironmentLogic : NSObject <HearingAidRecorderDelegate>

@property (retain, nonatomic) HearingAidRecorderLogic *recorder;
@property (nonatomic) struct IWaveAudioHAidInterface { void /* function */ **x0; } *waveAudioHAidInterface;
@property (retain, nonatomic) NSMutableArray *soundDB;
@property (retain, nonatomic) NSMutableArray *avgsoundDBList;
@property (nonatomic) unsigned long long returnIsQuietTime;
@property (nonatomic) unsigned long long returnAvgDBTime;
@property (nonatomic) BOOL isAudioInterrupted;
@property (weak, nonatomic) id<HearingAidInitLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startNoiseDetect;
- (void)onReceiveAudioData:(id)a0;
- (void)stopNoiseDetect;
- (double)dbToNormalized:(double)a0 baseDb:(double)a1 scale:(double)a2;
- (double)traditionalMap:(double)a0;
- (double)customPeakPowerFromDB:(double)a0;
- (double)dbToNormalized:(double)a0;
- (BOOL)voiceResourcesIsReady;
- (void)startDownloadResource;
- (unsigned long long)genCurrentTimeInMs;
- (void)setAudioIsInterrupted:(BOOL)a0;
- (void).cxx_destruct;

@end
