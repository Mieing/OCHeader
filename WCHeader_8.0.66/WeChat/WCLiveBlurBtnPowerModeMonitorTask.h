@class MonitorResult, WCLiveBlurPowerModeAdjustStrategy, MMLiveTaskId, NSMutableArray, WCLiveBlurButton;

@interface WCLiveBlurBtnPowerModeMonitorTask : NSObject

@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (nonatomic) unsigned long long currentState;
@property (nonatomic) BOOL isSuspendingForObserve;
@property (readonly, nonatomic) double suspendPersistTime;
@property (retain, nonatomic) WCLiveBlurButton *monitorBtn;
@property (nonatomic) unsigned long long monitorPointAlignStyle;
@property (retain, nonatomic) NSMutableArray *monitoredCoordinateList;
@property (retain, nonatomic) MonitorResult *currentMonitorResult;
@property (retain, nonatomic) NSMutableArray *recentMonitorResultList;
@property (retain, nonatomic) NSMutableArray *recentRecordColorDisResultList;
@property (retain, nonatomic) MonitorResult *staticBlurMonitorResult;
@property (retain, nonatomic) MonitorResult *realTimeCurrStandardMonitorResult;
@property (nonatomic) unsigned long long currPowerModeStyle;
@property (nonatomic) BOOL isPreparingEnterStaticBlur;
@property (retain, nonatomic) WCLiveBlurPowerModeAdjustStrategy *adjustStrategy;
@property (nonatomic) double staticBlurEnterTime;
@property (readonly, nonatomic) unsigned long long recentMonitorResultMaxCnt;
@property (copy, nonatomic) id /* block */ checkBlurBackHostViewValidBlock;
@property (copy, nonatomic) id /* block */ checkEnableActiveBlock;
@property (copy, nonatomic) id /* block */ willPendingToCatchSnapshotBlock;
@property (copy, nonatomic) id /* block */ pendingToCatchSnapshotBlock;
@property (copy, nonatomic) id /* block */ requestRootLiveVCBlock;
@property (copy, nonatomic) id /* block */ startMonitorBlock;
@property (copy, nonatomic) id /* block */ stateChangeBlock;

+ (id)getSubLiveViewFromLiveVC:(id)a0;
+ (id)getSubOperationViewFromLiveVC:(id)a0;
+ (id)cropImageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromSrcImage:(id)a1;

- (id)initWithMonitorBtn:(id)a0 liveTaskId:(id)a1 adjustStrategyParam:(id)a2;
- (void)initDefaultData;
- (void)createAdjustStrategy:(id)a0;
- (void)startMonitor;
- (void)stopMonitor;
- (BOOL)checkEnableCatchSnapShot;
- (BOOL)checkMainVideoFrameContainMonitorBtnRect;
- (void)onFinishCatchSnapShot:(BOOL)a0 snapShot:(id)a1;
- (id)getNormalizedCoordinatesToMonitor:(unsigned long long)a0;
- (void)onFinishMonitor:(id)a0 monitorId:(unsigned long long)a1;
- (void)updateAdjustStrategyParam:(id)a0;
- (id)getAdjustStrategy;
- (void)prepareToEnterStaticBlurMode;
- (void)enterStaticBlurMode;
- (BOOL)staticBlurModeRefreshBackView;
- (void)endStaticBlurModeRefresh:(id)a0;
- (void)pauseStaticBlurModeRefresh;
- (void)enterRealTimeBlurMode;
- (void)analyzeRecentMonitorResult:(id)a0;
- (void)analyzeRecentMonitorResultsForEnterStaticBlur:(id)a0;
- (void)analyzeRecentMonitorResultsForEnterRealTimeBlur:(id)a0;
- (void)checkRecentMonitorResultListOverLimit;
- (void)adjustStrategyIfNeeded;
- (void)enterSuspend:(unsigned long long)a0;
- (void)resignActive:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMonitorBtnNormalizedFrame;
- (void)clearAllStates;
- (void)suspendForObserve;
- (void)recoverForRetry;
- (void)updateMonitorPointAlignStyleIfNeeded;
- (unsigned long long)getCurrentMonitorPointAlignStyle;
- (void)onMonitorBtnSizeChanged;
- (void)onMonitorBtnFrameChanged;
- (void)onMonitorBtnContainerFrameChanged;
- (id)rootLiveVC;
- (void).cxx_destruct;

@end
