@class MMLiveTaskId, NSMutableArray, NSRecursiveLock;

@interface PAGRenderStatistics : NSObject

@property long long perfMode;
@property (nonatomic) long long frameTime;
@property (nonatomic) long long avgFrameTime;
@property (nonatomic) double avgFrameTimeFp;
@property (nonatomic) long long recent3AvgFrameTime;
@property (nonatomic) double time;
@property (retain, nonatomic) NSMutableArray *frames;
@property (retain, nonatomic) NSMutableArray *recentStatisticResults;
@property long long worstAnalysisRet;
@property (retain, nonatomic) NSRecursiveLock *actionLock;
@property BOOL isTargetViewPlaying;
@property double lastTargetPAGPlayTime;
@property double lastTargetPAGPlayInterval;
@property (nonatomic) long long liveUserType;
@property (retain) MMLiveTaskId *liveTaskId;
@property (nonatomic) long long pagModuleType;
@property (nonatomic) BOOL useStrategy;

+ (void)setPagTargetView:(void *)a0;
+ (void *)getPagTargetView;
+ (void)setRfxTargetView:(void *)a0;
+ (void *)getRfxTargetView;

- (id)init;
- (void)handleFrameTime:(double)a0;
- (long long)analyzeCurrentFrameTime;
- (double)avg;
- (double)recent3FramesTime;
- (void)updatePerfMode:(long long)a0;
- (void)updateTargetViewIsPlaying:(BOOL)a0;
- (void)onTargetViewPlayingChanged;
- (void)invokeAutoDowngradePerfModeIfNeed;
- (double)getAutoDowngradeDuration;
- (void)clear;
- (void)analyzeStatisticsDataWhenEnd;
- (BOOL)tryToDowngradePerfModeIfEnabled;
- (id)getRecentStatisticsResultsNotMoreThanAnalysisRet:(long long)a0;
- (unsigned long long)getDowngradeFitRequireCount;
- (void)scheduleAutoDowngradePerfMode;
- (void)checkRecentStatisticResultsOverLimit;
- (long long)transferAnalysisRetToPerfMode:(long long)a0;
- (long long)transferPerfModeToAnalysisRet:(long long)a0;
- (void)notifyPerfModeForMonitorIfNeeded:(long long)a0;
- (void)notifyPerfMode:(long long)a0 targetViewState:(BOOL)a1;
- (void)report;
- (void)updateTargetPAGPlayTime;
- (void)recordAveFrameTime;
- (id)currLiveTask;
- (void)onTargetViewStartPlay;
- (void)onTargetViewStopPlay;
- (long long)getPerfMode;
- (BOOL)getIsTargetViewRunning;
- (void).cxx_destruct;

@end
