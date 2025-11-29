@class MMLiveTaskId, FinderLiveBoxId;

@interface MMLiveCommentVMState : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) FinderLiveBoxId *boxId;
@property (readonly, nonatomic) BOOL isCommentAppendBeginDelay;
@property (readonly, nonatomic) BOOL isCommentAppendEndDelay;
@property (nonatomic) unsigned long long maxAppendLineCount;
@property (nonatomic) double twoLinesEndDelay;
@property (nonatomic) double threeLinesEndDelay;
@property (nonatomic) double fourLinesEndDelay;
@property (nonatomic) unsigned long long enableAdjustPerformanceMode;
@property (nonatomic) BOOL needEnterLowFrequencyRefreshMode;
@property (nonatomic) BOOL isInLowFrequencyRefreshMode;
@property (nonatomic) double lowFrequencyModeEnterTime;
@property (nonatomic) double lowFrequencyModeLastDuration;
@property (nonatomic) unsigned long long lowFrequencyDistanceCnt;
@property (nonatomic) BOOL isRefreshLowFrequencyDistanceData;
@property (nonatomic) BOOL isAppendLowFrequencyDistanceData;
@property (nonatomic) BOOL isCustomAppendData;
@property (nonatomic) BOOL enableCustomAppendData;
@property (nonatomic) BOOL isDisplayUnReadCount;
@property (nonatomic) BOOL isInSmoothMode;
@property (nonatomic) BOOL isInLowPowerMode;
@property (readonly, nonatomic) unsigned long long currUnMergeCnt;
@property (readonly, nonatomic) unsigned long long currAppendSpeed;
@property (copy, nonatomic) id /* block */ getCommentVMUnMergeCount;

- (id)initWithTaskId:(id)a0 boxId:(id)a1;
- (void)initData;
- (id)commentDataMgr;
- (unsigned long long)currAppendSpeedToRefresh;
- (double)getAppendBeginDuration;
- (unsigned long long)getCurrAppendSpeedForPublicBox;
- (unsigned long long)getCurrAppendSpeedToRefreshForPublicBox;
- (unsigned long long)getCurrAppendSpeedForPrivateBox;
- (void)updateIsInLowFrequencyRefreshMode;
- (void)keepProgressAfterExitPowerMode;
- (double)getBeginDelayDurationForFinderCellFrames:(id)a0 lastCustomAppendLines:(long long)a1;
- (BOOL)hasRank:(id)a0;
- (double)getEndDelayDurationForFinderCellFrames:(id)a0;
- (double)getCustomAppendDurationForIndex:(unsigned long long)a0 finderCellFrames:(id)a1;
- (double)getCustomAppendPubbleCellInitTopForIndex:(unsigned long long)a0 finderCellFrames:(id)a1;
- (unsigned long long)getAppendCountWithCellFrameArray:(id)a0;
- (unsigned long long)getSumContentLines:(id)a0;
- (double)getScrollSpeed;
- (BOOL)isSpeedUseCustomLinearScroll:(double)a0;
- (BOOL)isLinearScrollSpeed:(double)a0;
- (BOOL)isCurrentLinearScrollSpeed;
- (double)getLinearScrollFastSpeed;
- (double)estimateRefreshInterval;
- (double)getEstimateInterval;
- (double)getIntervalNormalizedScale:(double)a0;
- (unsigned int)estimateRefreshCommentCountOnce;
- (unsigned long long)getCurrentScrollMode;
- (double)getActualScrollSpeed;
- (void)enterLowFrequencyRefreshModeIfNeeded;
- (void)exitLowFrequencyRefreshModeWithKeepProgress:(BOOL)a0;
- (BOOL)hasDistanceDataForRefreshToKeepProgress;
- (BOOL)hasDistanceDataForAppendToKeepProgress;
- (BOOL)hasDistanceDataToKeepProgress;
- (void)onDistanceDataKeepProgressRefreshed;
- (void)onDistanceDataKeepProgressAppended;
- (void)checkLowFrequencyDistanceDataHasHandled;
- (void)updateLowFrequencyDistanceCnt:(unsigned long long)a0;
- (void).cxx_destruct;

@end
