@class NSMutableDictionary, NSString, AWEVideoPublishViewModel, ACCEditorSideslipEffectApplyTrackerContext;

@interface ACCEditorSideslipEffectApplyTracker : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCEditorSideslipEffectApplyTrackerContext *context;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (nonatomic) double timeClickStarted;
@property (nonatomic) double timeRemoveLastEnded;
@property (nonatomic) double timeApplyStarted;
@property (nonatomic) double timeApplyEnded;
@property (nonatomic) double timeRendered;
@property (nonatomic) double timeCommitStarted;
@property (nonatomic) double timeCommitEnded;
@property (nonatomic) double timeConvertStarted;
@property (nonatomic) double timeConvertEnded;
@property (nonatomic) long long appliedMemory;
@property (copy, nonatomic) NSString *endStage;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) double timeDownloadStarted;
@property (nonatomic) double timeDownloadEnded;
@property (nonatomic) double timePreloadStarted;
@property (nonatomic) double timePreloadEnded;
@property (copy, nonatomic) NSString *materialDuration;
@property (copy, nonatomic) NSString *materialRatio;
@property (copy, nonatomic) NSString *featureListStr;
@property (nonatomic) long long trackCnt;
@property (nonatomic) long long slotCnt;
@property (nonatomic) BOOL isSameEffect;
@property (nonatomic) double frameRate;
@property (nonatomic) double slightlyCartonRate;
@property (nonatomic) double cartonRate;
@property (nonatomic) double sydneyCartonRate;

+ (id)currentApplyTracker;

- (void)trackWithEventType:(id)a0;
- (void)updateApplyStage:(unsigned long long)a0;
- (void)trackWithEventType:(id)a0 error:(id)a1;
- (void)appendMsg:(id)a0;
- (id)p_commonContextParams;
- (id)p_commonParamsForEndEvent;
- (void)parseJsonString:(id)a0;
- (id)p_originContentType;
- (double)p_formatTimeStamp:(double)a0;
- (double)p_formatDurationWithTimeEnded:(double)a0 timeStarted:(double)a1;
- (id)p_CalculateMemoryDiff;
- (id)initWithContext:(id)a0 repository:(id)a1;
- (void).cxx_destruct;

@end
