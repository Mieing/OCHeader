@class NSString, UIViewController, UIView;
@protocol WCFinderInPictureProtocol;

@interface WCFinderInPictureKeepMgr : MMUserService <IMinimizeTaskDelegateInterface, IVOIPWindowExt, ILiveTaskMgrExt, MultiTalkMgrExt, WCFinderMinimizeExt, MMServiceProtocol, MinimizationTransitionControllerDelegate>

@property (retain, nonatomic) UIViewController<WCFinderInPictureProtocol> *cache;
@property (retain, nonatomic) UIView *inPictureCacheView;
@property (weak, nonatomic) UIViewController<WCFinderInPictureProtocol> *vcContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)inPictureFromVC:(id)a0 mediaCell:(id)a1 contentVM:(id)a2 silencePlay:(BOOL)a3;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cachePlayerVC:(id)a0 forKey:(id)a1;
- (id)cachedPlayerVCForKey:(id)a0;
- (void)removeVC:(id)a0;
- (id)taskDataForVC:(id)a0;
- (BOOL)isInPicture;
- (BOOL)isInPicturePlaying;
- (BOOL)isInPictureForVC:(id)a0;
- (void)removeTaskFor:(id)a0;
- (void)closeInPicture;
- (BOOL)resolveExternalConflicts;
- (BOOL)setInPictureMute:(BOOL)a0;
- (void)finderFeedListMediaDidEndPlay;
- (void)finderFeedListMediaWillStarPlay;
- (id)taskData:(id)a0 animated:(BOOL)a1;
- (id)customMaximizeTransitionForTaskData:(id)a0 transitionContext:(id)a1;
- (id)customMinimizeTransitionForTaskData:(id)a0 transitionContext:(id)a1;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)a0;
- (BOOL)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)a0;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (id)currentMinimizationTaskBizName;
- (id)currentMinimizationTaskBizKey;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)a0;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (BOOL)shouldBlockMinimizationEntryInInteractivePop;
- (BOOL)isMinizing:(id)a0;
- (void)inPictureVC:(id)a0 animated:(BOOL)a1;
- (void)updateMinizedVC:(id)a0;
- (void)dismissVCAndUpdateMinimieInfoIfNeed:(id)a0;
- (void)onRecoverTaskData:(id)a0;
- (void)onEnterRecentUsedTask:(id)a0;
- (BOOL)videoPlayCompleted;
- (void)updateVcContextUsedRecord;
- (void)onMMLiveStartForNotifyOuter;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)onBeginMultiTalk;
- (void)onVoipWindowDidAppear;
- (void)onVideoVoipViewDidAppear:(id)a0;
- (void)BeginInterruption;
- (void)onFinderWillMinimizeFloatingView;
- (void).cxx_destruct;

@end
