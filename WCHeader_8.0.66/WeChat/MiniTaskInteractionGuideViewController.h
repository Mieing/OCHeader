@class MiniTaskDurantionCounter, NSString, UIImageView, MiniTaskPanGestureHandler, UIView, MMUIButton, MMUILabel;

@interface MiniTaskInteractionGuideViewController : MMUIViewController <MiniTaskPanGestureHandlerDelegate>

@property (retain, nonatomic) NSString *educationTips;
@property (retain, nonatomic) UIImageView *fakeMainFrameSnapshotView;
@property (retain, nonatomic) MMUIButton *fakeSnapshotMaskView;
@property (retain, nonatomic) UIView *fakeSnapshotShadowView;
@property (retain, nonatomic) MMUILabel *swipeEducationLabel;
@property (copy, nonatomic) id /* block */ guideConfirmBlock;
@property (retain, nonatomic) MiniTaskPanGestureHandler *leftPanPopGestureHandler;
@property (retain, nonatomic) MiniTaskDurantionCounter *eduDurantionCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGuideConfirmBlock:(id /* block */)a0 educationTips:(id)a1;
- (void)dealloc;
- (void)initMainUI;
- (void)setupBackgroundView;
- (void)setupFakeSnapshot;
- (void)initNavigationItems;
- (void)setupEducationLabel;
- (void)setupSwipeExitGesture;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidPush:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)registerAppActiveStateObsever;
- (void)unregisterAppActiveStateObsever;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)onFakeSnapshotClicked;
- (void)onSwipeLeftOnView:(id)a0;
- (id)genGuideEducationLabel;
- (void)setupLeftPanGestureHandler;
- (void)onMiniInteractiveTransitionBeginOfPanGesture:(id)a0;
- (void)onMiniInteractiveTransitionDidEndOfPanGesture:(id)a0 isComplete:(BOOL)a1;
- (BOOL)shouldMiniInteractiveTransitionBeginOfPanGesture:(id)a0;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;

@end
