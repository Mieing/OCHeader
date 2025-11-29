@class NSString, NSMutableDictionary, WCFinderLongVideoPlayViewController;

@interface WCFinderLongVideoKeepMgr : MMUserService <IMinimizeTaskDelegateInterface, IVOIPWindowExt, ILiveTaskMgrExt, MultiTalkMgrExt, MMServiceProtocol, MinimizationTransitionControllerDelegate>

@property (retain, nonatomic) NSMutableDictionary *caches;
@property (weak, nonatomic) WCFinderLongVideoPlayViewController *vcContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cachePlayerVC:(id)a0 forKey:(id)a1;
- (id)cachedPlayerVCForKey:(id)a0;
- (void)removeVC:(id)a0;
- (id)taskDataForVC:(id)a0;
- (id)minimizeKey;
- (id)taskDataWithType:(unsigned long long)a0;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)a0;
- (BOOL)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)a0;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (id)currentMinimizationTaskBizName;
- (id)currentMinimizationTaskBizKey;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)a0;
- (void)updateSnapShotWithVC:(id)a0;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)a0;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (BOOL)shouldBlockMinimizationEntryInInteractivePop;
- (BOOL)isMinizing:(id)a0;
- (void)minizeVC:(id)a0;
- (void)updateMinizedVC:(id)a0;
- (void)dismissVCAndUpdateMinimieInfoIfNeed:(id)a0;
- (void)onRecoverTaskData:(id)a0;
- (void)onEnterRecentUsedTask:(id)a0;
- (id)shareListViewControllerWithMegaVideo:(id)a0;
- (BOOL)videoPlayCompleted;
- (void)updateVcContextUsedRecord;
- (void).cxx_destruct;

@end
