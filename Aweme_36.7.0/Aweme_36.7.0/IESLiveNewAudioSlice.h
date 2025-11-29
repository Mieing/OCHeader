@class NSTimer, NSDate, IESLiveNewASRManager, NSString, NSMutableDictionary, SpeechEngine, NSMutableArray, IESLiveASRAPI;
@protocol IESLivePerfSampler;

@interface IESLiveNewAudioSlice : NSObject <SpeechEngineDelegate>

@property (retain, nonatomic) SpeechEngine *engine;
@property (retain, nonatomic) NSMutableArray *audioDataArray;
@property (retain, nonatomic) IESLiveASRAPI *aSRAPI;
@property (retain, nonatomic) NSMutableDictionary *uploadDic;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (nonatomic) long long dataSize;
@property (nonatomic) long long dataCount;
@property (nonatomic) long long maxDataCount;
@property (nonatomic) long long maxDataSize;
@property (retain, nonatomic) NSTimer *cancelTimer;
@property (nonatomic) long long errorSliceCount;
@property (nonatomic) double maxCPU;
@property (nonatomic) double maxMEM;
@property (nonatomic) double minFPS;
@property (nonatomic) unsigned long long tagAB;
@property (nonatomic) long long sliceCount;
@property (nonatomic) long long beginAudioSliceTime;
@property (nonatomic) long long endAudioSliceTime;
@property (nonatomic) long long beginAudioSliceTimeDoing;
@property (nonatomic) long long endAudioSliceTimeDoing;
@property (nonatomic) BOOL isRuningModel;
@property (nonatomic) BOOL lastSlice;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (weak, nonatomic) IESLiveNewASRManager *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userService;
- (void)onMessageWithType:(int)a0 andData:(id)a1;
- (void)p_speechDidStart;
- (void)p_speechDidStop;
- (void)p_handleRecordErrorResult:(id)a0;
- (id)currentAudienceVCRoomModel;
- (void)clearAudioSlice;
- (void)appendDataNew:(id)a0 timestampMS:(long long)a1;
- (void)beginIdentify;
- (id)initWithEngine:(id)a0 delegate:(id)a1 diContext:(id)a2;
- (void)initAsrDic;
- (BOOL)checkASRPermission;
- (void)uploadASRWithWordArray:(id)a0 volume:(id)a1 languageDetailsString:(id)a2 errMessage:(id)a3;
- (void)modelRunning;
- (void)modelEnd;
- (void)beginIdentifyNew;
- (void)p_handleRecordResultFinish:(id)a0;
- (void)feedAudio;
- (void).cxx_destruct;

@end
