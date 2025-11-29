@class NSString, WCLoopMetricsCollector, NSMutableArray;

@interface MMLiveRemoteCustomRenderMetricsMonitor : NSObject <WCLoopMetricsCollectorDelegate>

@property (retain, nonatomic) WCLoopMetricsCollector *renderMetricsCollector;
@property (retain, nonatomic) NSMutableArray *recentMetricsList;
@property (nonatomic) double lastDecreaseTime;
@property (copy, nonatomic) id /* block */ checkCurrIsTopPerfLevelCallback;
@property (copy, nonatomic) id /* block */ increasePerfLevelCallback;
@property (copy, nonatomic) id /* block */ decreasePerfLevelCallback;
@property (copy, nonatomic) id /* block */ checkTimeRangeContainWeffectCreateCallback;
@property (copy, nonatomic) id /* block */ checkTimeRangeIsFullLoadCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initDefaultData;
- (void)onRenderBegin;
- (void)onRenderEnd;
- (id)metricsLoopKey;
- (id)metricsActionKey;
- (void)tryIncreasePerformanceLevel;
- (void)tryDecreasePerformanceLevel;
- (void)addRenderMetrics:(id)a0;
- (void)clearRenderMetrics;
- (void)checkRecentMetricsCacheExpire;
- (double)expireTime;
- (void)checkRecentMetricsCacheOverLimit;
- (unsigned long long)recentCacheMetricsCnt;
- (void)checkRecentMetricsReport;
- (BOOL)checkIsNeedToDecreasePerfLevel;
- (BOOL)checkRecentMetricsIsWorstCase;
- (BOOL)checkRecentMetricsIsCriticalCase;
- (BOOL)checkRecentMetricsIsSeriousCase;
- (double)minimumDurationBetweenDecrease;
- (double)worstDurationStandard;
- (double)criticalDurationStandard;
- (double)seriousDurationStandard;
- (unsigned long long)badCaseMetricsCheckCnt;
- (BOOL)isMetricsTimeRangeContainWeffectCreate:(id)a0;
- (BOOL)checkIsNeedToIncreasePerfLevel;
- (BOOL)checkRecentMetricsIsGoodCase;
- (double)goodDurationStandard;
- (unsigned long long)goodCaseMetricsCheckCnt;
- (BOOL)isMetricsTimeRangeFullLoad:(id)a0;
- (void)loopMetricsCollection:(id)a0 didFinishCollectingMetrics:(id)a1;
- (void)logRenderDuration:(id)a0;
- (double)metricsCollectionDuration;
- (void).cxx_destruct;

@end
