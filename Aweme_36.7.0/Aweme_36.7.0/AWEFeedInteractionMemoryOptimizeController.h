@class NSLock, NSMutableArray, NSString;

@interface AWEFeedInteractionMemoryOptimizeController : AWEBaseController <AWEFeedControllerProtocol>

@property (retain, nonatomic) NSMutableArray *cellInfoArr;
@property (retain, nonatomic) NSMutableArray *estimatingModelInfo;
@property (nonatomic) int memoryLevel;
@property (nonatomic) BOOL haveRemoved;
@property (retain, nonatomic) NSLock *lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoadAfterTableviewSetup;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (double)secondDelayForOpt;
- (void)delayViewDidLoadAfterTableviewSetup;
- (void)delayViewDidDisappear;
- (BOOL)enableConfigureCellDelay;
- (void)delayTableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)delayConfigureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)removeOffScreenCellDirect;
- (int)secondDisappearForOpt;
- (void)removeValidCellIfNeed;
- (void)releaseMemoryForSpecialScene;
- (void)removeOffScreenCellIfNeed;
- (void)checkValidOfCellInfo;
- (id)beUsedInfoOfCell:(id)a0;
- (BOOL)enableRefinedStrategyForMemoryOpt;
- (void)estimateScoreForMemoryOptIfNeedWithCellInfo:(id)a0 model:(id)a1;
- (void)removeByMemoryCondition;
- (void)removeBySmartService;
- (void)removeByRefinedStrategy;
- (int)numberValidForCellNotUsed;
- (BOOL)enableSmartEstimatedForMemoryOpt;
- (double)estimatedScoreThresholdForMemoryOpt;
- (id)refinedStrategyIdentifierList;
- (int)refinedStrategyNumber;
- (void)safeReleaseMemoryForSpecialScene;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)viewDidDisappear;

@end
