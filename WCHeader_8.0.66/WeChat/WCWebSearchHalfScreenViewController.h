@class UIViewController, NSString, WCFinderSteramProfileBarView, WCWebSearchViewControllerNewH5;

@interface WCWebSearchHalfScreenViewController : MMUIHalfScreenViewController <WCFinderHalfScreenProtocol, MMUIHalfScreenViewDismissInteractiveTransitionDelegate>

@property (nonatomic) BOOL isFullScreen;
@property (retain, nonatomic) WCFinderSteramProfileBarView *headerView;
@property (retain, nonatomic) WCWebSearchViewControllerNewH5 *searchPage;
@property (weak, nonatomic) UIViewController *actualPresentingViewController;
@property (nonatomic) double heightRatio;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isPanning;
@property (nonatomic) BOOL shouldManualInvokeParentAppearEventWhenPresented;
@property (nonatomic) BOOL isVCPopedOrDismissed;
@property (weak, nonatomic) UIViewController *fromViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSearchPage:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillBePresented:(BOOL)a0;
- (void)viewDidBePresented:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewDidTransitionToNewSize;
- (void)handleTopViewPanGesture:(id)a0;
- (void)handleScrollViewPanGesture:(id)a0;
- (void)handleViewPanGesture:(id)a0 fromScrollView:(BOOL)a1;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldHideNavigationBar;
- (void)doClickCloseWithNeedAnimated:(BOOL)a0 action:(long long)a1;
- (void)onDismissInteractiveTransitionFinish:(id)a0;
- (BOOL)needCloseOnOrientationChanged;
- (double)getMaxHalfScreenHeight;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)a0;
- (BOOL)isTopViewControllerWebSearch;
- (void)notifyHeightWillChange:(double)a0;
- (void)notifyHeightDidChange:(double)a0;
- (void)notifyHeightIsChanging:(double)a0;
- (void)toggleFullScreen:(double)a0;
- (void)toggleHalfScreenUpdateHeightRatio:(double)a0 withDuration:(double)a1;
- (void)toggleHalfScreenUpdateDraggableUpward:(BOOL)a0;
- (void).cxx_destruct;

@end
