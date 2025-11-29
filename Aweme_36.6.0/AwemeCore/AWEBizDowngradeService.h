@class AWEUITaskDelaySpreadExecutor, NSString;

@interface AWEBizDowngradeService : HTSService <AWEBizDowngradeService>

@property (retain, nonatomic) AWEUITaskDelaySpreadExecutor *uiTaskSpreadExecutor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableBizDowngrade;
+ (BOOL)enableBizDowngradeEntrance;
+ (BOOL)enableExtremePerformanceEntrance;
+ (void)enableBizDowngradeMode:(BOOL)a0;
+ (BOOL)enableThermalMitigationEntrance;
+ (BOOL)isBizDowngradeModeSwitchBtnOn;
+ (id)bizDowngradeModeDescription;
+ (long long)bizDowngradeType:(id)a0;
+ (BOOL)shouldBizDowngradeWithKey:(id)a0;
+ (void)bizDowngradeWithBlock:(id /* block */)a0 andDowngradeType:(id)a1;
+ (void)bizDowngradeWithBlock:(id /* block */)a0 andKey:(id)a1;
+ (id)bizDowngradeBootTaskConfig;
+ (BOOL)bizDowngradeDelayLaunchCompletionTask;
+ (BOOL)bizDowngradeBootTaskAsyncPriority;
+ (id)delayOrForbidElementWithName:(id)a0;
+ (BOOL)enableFixElementLifeTimeOrder;
+ (BOOL)enableBizDowngradeLiveElements;
+ (id)delayOrForbidLiveElementWithName:(id)a0;
+ (BOOL)enablebizDowngradeElementReset;
+ (id)delayElementAfterSetData;
+ (BOOL)forbidAnchorWithName:(id)a0;
+ (BOOL)abBoolForKey:(id)a0;
+ (id)abNumberForKey:(id)a0;
+ (BOOL)enableNunki;
+ (BOOL)enableBizDowngradeBootTaskAsyncPriority;
+ (BOOL)enableBizDowngradeDelayLaunchCompletionTask;
+ (BOOL)enableBizDowngradeBootTaskConfig;
+ (BOOL)forbidSpecialCard;
+ (BOOL)forbidProfileDynamicCover;
+ (void)pauseProfileDynamicCoverDowngrade;
+ (unsigned long long)bizDowngradeFrameRatePlayerViewLayer;
+ (BOOL)enableOptimizeAsyncAwesomeSplashCache;
+ (BOOL)bizDowngradeFrameRateMusicInfo;
+ (BOOL)enableBizDowngradeMessage;
+ (void)updateBizDowngradeStateWithResult:(BOOL)a0;
+ (id)Register;

- (void)startUIDealySpreadExcutor;
- (void)invokeBlock:(id /* block */)a0 afterDelay:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invokeBlock:(id /* block */)a0;

@end
