@class NSArray, NSString, MMLiveTaskId, WCLiveBlurPowerModeAdjustParam;

@interface WCLiveBlurPowerModeAdjustStrategy : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) WCLiveBlurPowerModeAdjustParam *currentAdjustParam;
@property (readonly, nonatomic) double badScoreAnalysisTime;
@property (readonly, nonatomic) double goodScoreAnalysisTime;
@property (readonly, nonatomic) unsigned long long badScoreMaxCnt;
@property (readonly, nonatomic) unsigned long long ordinaryScoreMaxCnt;
@property (readonly, nonatomic) NSArray *staticBlurEnterCheckNumList;
@property (nonatomic) unsigned long long currBadScoreCnt;
@property (nonatomic) unsigned long long currOrdinaryScoreCnt;
@property (nonatomic) unsigned long long currAdjustedCheckNumIndex;
@property (readonly, nonatomic) unsigned long long enhanceCheckNumBadScoreStandardCnt;
@property (readonly, nonatomic) unsigned long long enhanceCheckNumOrdinaryScoreStandardCnt;
@property (readonly, nonatomic) BOOL isAdjustFailed;
@property (readonly, nonatomic) unsigned long long sumWeakScoreMaxCnt;
@property (retain, nonatomic) NSString *rootId;
@property (copy, nonatomic) id /* block */ badScoreCntOverLimitBlock;
@property (copy, nonatomic) id /* block */ ordinaryScoreCntOverLimitBlock;
@property (copy, nonatomic) id /* block */ adjustParamChangeBlock;
@property (readonly, nonatomic) unsigned long long currStaticBlurEnterCheckCnt;
@property (readonly, nonatomic) unsigned long long currRealTimeBlurEnterContrastCheckCnt;
@property (readonly, nonatomic) unsigned long long currRealTimeBlurEnterColorDisCheckCnt;
@property (readonly, nonatomic) unsigned long long maxStaticBlurEnterCheckCnt;
@property (readonly, nonatomic) unsigned long long maxRealTimeBlurEnterContrastCheckCnt;
@property (readonly, nonatomic) unsigned long long maxRealTimeBlurEnterColorDisCheckCnt;
@property (readonly, nonatomic) double similarContrastRatio;
@property (readonly, nonatomic) double similarColorDistance;

- (id)initWithTaskId:(id)a0 adjustParam:(id)a1;
- (void)analyzeStaticBlurPersistTime:(double)a0;
- (void)clearAllStates;
- (void)updateAdjustParam:(id)a0;
- (void)handleAnalysisScore:(unsigned long long)a0;
- (BOOL)enhanceCheckNumIfNeeded;
- (BOOL)reduceCheckNumIfNeeded;
- (void)clearBadScoreRecords;
- (void)increaseBadScoreCntWithCheckLimit;
- (void)clearOrdinaryScoreRecords;
- (void)increaseOrdinaryScoreCntWithCheckLimit;
- (void)checkAdjustParamEmpty;
- (double)similarStandardRate;
- (BOOL)isSilenceHandle;
- (void).cxx_destruct;

@end
