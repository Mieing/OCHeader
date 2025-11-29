@class NSDate, NSString, NSTimer, IESLiveSpeechASRMonitor, IESLiveASRPlusManager, NSMutableDictionary, IESLiveSpeechEngineASRManager, NSMutableArray, NSObject, IESLiveASRAPI;
@protocol OS_dispatch_queue, IESLivePerfSampler;

@interface IESLiveAudioPlusSlice : NSObject <IESLiveSpeechASRDelegate>

@property (retain, nonatomic) IESLiveSpeechEngineASRManager *engineManager;
@property (retain, nonatomic) NSMutableArray *audioDataArray;
@property (retain, nonatomic) IESLiveASRAPI *aSRAPI;
@property (retain, nonatomic) NSMutableDictionary *uploadDic;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSString *resultText;
@property (nonatomic) long long dataSize;
@property (nonatomic) long long dataCount;
@property (nonatomic) long long maxDataCount;
@property (nonatomic) long long maxDataSize;
@property (retain, nonatomic) NSTimer *cancelTimer;
@property (nonatomic) long long errorSliceCount;
@property (nonatomic) double maxCPU;
@property (nonatomic) double maxMEM;
@property (nonatomic) double minFPS;
@property (retain, nonatomic) IESLiveSpeechASRMonitor *monitor;
@property (nonatomic) unsigned long long tagAB;
@property (nonatomic) long long sliceCount;
@property (nonatomic) long long beginAudioSliceTime;
@property (nonatomic) long long endAudioSliceTime;
@property (nonatomic) BOOL isRuningModel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioProcessQueue;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (weak, nonatomic) IESLiveASRPlusManager *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userService;
- (void)ASREngineRecognizeResult:(id)a0 complete:(BOOL)a1;
- (void)ASREngineDidStartWithReqId:(id)a0;
- (void)ASREngineDidStop;
- (id)currentAudienceVCRoomModel;
- (void)appendDataNew:(id)a0 timestampMS:(long long)a1;
- (void)beginIdentify;
- (id)initWithEngine:(id)a0 delegate:(id)a1 diContext:(id)a2;
- (void)clearAudioSlice:(id)a0;
- (void)initAsrDic;
- (BOOL)checkASRPermission;
- (void)uploadASRWithWordArray:(id)a0 volume:(id)a1 languageDetailsString:(id)a2 errMessage:(id)a3;
- (void)ASREngineError:(id)a0;
- (void).cxx_destruct;

@end
