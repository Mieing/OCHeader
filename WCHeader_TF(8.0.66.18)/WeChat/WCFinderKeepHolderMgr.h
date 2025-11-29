@class NSString, NSMutableDictionary;

@interface WCFinderKeepHolderMgr : MMUserService <WCFinderFeedListTransitionHelperDelegate, IMinimizeTaskDelegateInterface, MMImageLoaderObserver, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *loadingImageDict;
@property (retain, nonatomic) NSMutableDictionary *loadingImageAnimationDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldMinimizeWithTLRecFinderCardData:(id)a0;

- (id)createAnimation:(BOOL)a0 forVC:(id)a1;
- (id)keepHoldDelegateFromVC:(id)a0;
- (void)onTransitionTriggerMininize:(id)a0 userInfo:(id)a1 giveUpClose:(BOOL *)a2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)closeVCForKeepHold:(id)a0;
- (id)minimizeTaskDataWithTid:(id)a0;
- (BOOL)shouldMinimizeWithDataItem:(id)a0 cell:(id)a1;
- (void)tryMinimizeTaskWithContentVM:(id)a0 cell:(id)a1;
- (void)addMinimizeTaskWithContentVM:(id)a0 coverImage:(id)a1 generateType:(unsigned long long)a2;
- (void)addMinimizeTaskWithContentVM:(id)a0 coverImage:(id)a1 snapShotView:(id)a2 animationStartFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 fromViewControler:(id)a4 generateType:(unsigned long long)a5 completion:(id /* block */)a6;
- (void)updateMinimizeTaskDataWithContentVM:(id)a0;
- (void)removeMinimizeTaskWithContentVM:(id)a0;
- (void)updateSnapShotWithCell:(id)a0 contentVM:(id)a1;
- (void)updateSnapShotWithImage:(id)a0 contentVM:(id)a1;
- (id)takeMediaCellSnapshot:(id)a0;
- (id)takeCurrentScreenSnapshot;
- (BOOL)tryAddMinimizeTask:(id)a0;
- (id)minimizeTaskDataWithTLRecFinderCardData:(id)a0;
- (id)generateOneShareVCWithMinimizeKey:(id)a0 nonceId:(id)a1 startPlayVideoTime:(double)a2;
- (id)generateOneTaskDataWithContentVM:(id)a0 generateType:(unsigned long long)a1;
- (id)generateOneTaskDataWithTLRecFinderCardData:(id)a0 generateType:(unsigned long long)a1;
- (id)generateOneTaskDataWithNSDictionary:(id)a0;
- (void)addMinimizeTaskWithNSDictionary:(id)a0 animationViewImage:(id)a1 fromViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)removeMinimizeTaskWithNSDictionary:(id)a0;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void)onRemoveMinimizedTask:(id)a0;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)a0;
- (BOOL)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)a0;
- (void)onRecoverTaskData:(id)a0;
- (void)onEnterRecentUsedTask:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
