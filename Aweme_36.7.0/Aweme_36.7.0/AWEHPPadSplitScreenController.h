@class NSString, UIViewController, UIPanGestureRecognizer;
@protocol AWEPadSplitViewSecondaryController, AWEPadSplitViewTransitionContext;

@interface AWEHPPadSplitScreenController : AWEBaseController <AWEHPPadSplitScreenControllerProtocol, AWEHPHomeContainerViewControllerLifeCycle, UIGestureRecognizerDelegate, AWEFeedSpiltControllerDelegate>

@property (nonatomic) BOOL enableUserPageSplitScreen;
@property (nonatomic) BOOL shouldOpenSplitScreenByPan;
@property (retain, nonatomic) id<AWEPadSplitViewTransitionContext> splitViewTransitionContext;
@property (retain, nonatomic) UIPanGestureRecognizer *slideOpenUserPagePan;
@property (retain, nonatomic) UIViewController<AWEPadSplitViewSecondaryController> *slideOpenViewController;
@property (nonatomic) BOOL isReloading;
@property (nonatomic) BOOL isSplitScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEPadUserPageAdapterClass;

- (id)currentSecondaryScene;
- (id)aAWEPadSplitScreenAdapter;
- (void)hpBeginReloadTopTabWithDetail:(id)a0;
- (void)hpEndReloadTopTabWithDetail:(id)a0;
- (BOOL)hpRefreshPanGestureRecognizerShouldBegin:(id)a0 reason:(id *)a1;
- (void)hpTopTabDidSelectToIndex:(long long)a0 previousIndex:(long long)a1;
- (void)hpTopTabSlidingViewController:(id)a0 repeatTapIndex:(long long)a1 shouldRepeat:(BOOL)a2;
- (void)hpTopTabSlidingViewController:(id)a0 willScrollToIndex:(long long)a1 preIndex:(long long)a2;
- (unsigned long long)hpCanLeftSlideToUserPageWithPan:(id)a0 reason:(id *)a1;
- (BOOL)hpCantUpdateThemeInScrollView;
- (void)hpScrollMultiTabSegmentedControlToRight;
- (void)dismissWithAnimated:(BOOL)a0 closeMethod:(id)a1 completion:(id /* block */)a2;
- (id)splitViewContainer;
- (id)primaryViewLayoutController;
- (void)updateOffsetWithOffsetX:(double)a0;
- (id)aAWEPadUserPageAdapter;
- (BOOL)enableSplitViewInteractionTransition:(id)a0;
- (BOOL)shouldBeginFeedPullRefreshGesture:(id)a0;
- (void)splitStatusChanged:(id)a0;
- (void)splitScreenCancelDismiss:(id)a0;
- (void)setupSlideGesture;
- (id)feedSplitController;
- (id)splitViewService;
- (BOOL)enableFixReloadTopBarRemoveSplit;
- (void)dismissSplitIfNeed;
- (id)findFeedTableViewController:(id)a0;
- (id)currentTableViewController;
- (BOOL)enableFixHPGetSplitService;
- (void)viewDidAppear;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (id)privateContainer;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (void)viewDidLoad;
- (BOOL)isLandscape;

@end
