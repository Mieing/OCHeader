@class NSString, NSMutableDictionary;

@interface WCFinderMultiContentMgr : MMUserService <WCFinderFeedListTransitionHelperDelegate, IMinimizeTaskDelegateInterface, MMImageLoaderObserver, MinimizeTaskPlayCtrlDelegate, WCFinderFeedListTransitionHelperExt, WCFinderZoomAnimatorBehavior, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *dictTaskDatas;
@property (retain, nonatomic) NSMutableDictionary *dictCacheVcs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createAnimation:(BOOL)a0 forVC:(id)a1;
- (id)contentVMFromVC:(id)a0;
- (id)keepHoldDelegateFromVC:(id)a0;
- (void)onTransitionTriggerMininize:(id)a0 userInfo:(id)a1 giveUpClose:(BOOL *)a2;
- (void)onTransitionHelperWillClousureFromVC:(id)a0 toVC:(id)a1 userInfo:(id)a2;
- (void)onTransitionHelperDoClosureForVC:(id)a0 userInfo:(id)a1;
- (id)zoomAnimator:(id)a0 chooseWithOther:(id /* block */)a1;
- (id)zoomAnimatorTransitionSnapView:(id)a0 cornerRaidus:(double *)a1;
- (void)onAnimatorAnimationWillStart:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)generateOneTaskDataWithContentVM:(id)a0 generateType:(unsigned long long)a1;
- (void)addMinimizeTaskWithContentVM:(id)a0 coverImage:(id)a1 snapShotView:(id)a2 animationStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 fromViewControler:(id)a4 generateType:(unsigned long long)a5 sender:(id)a6 completion:(id /* block */)a7;
- (void)tryAddMinimizeTask:(id)a0 minimizeAction:(id /* block */)a1;
- (void)updateSnapShotWithImage:(id)a0 taskData:(id)a1;
- (void)removeMinimizeTaskWithKey:(id)a0;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (id)generateOneShareVCWithMinimizeKey:(id)a0 nonceId:(id)a1 startPlayVideoTime:(double)a2;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)a0;
- (void).cxx_destruct;

@end
