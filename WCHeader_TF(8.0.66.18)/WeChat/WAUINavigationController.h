@class MMUINavigationBar, WAMenuPopInteractiveTransition, UIView, NSMutableArray, UIViewController;
@protocol WAUINavigationControllerDelegate;

@interface WAUINavigationController : MMUINavigationController

@property (retain, nonatomic) MMUINavigationBar *customNavigationBar;
@property (nonatomic) BOOL hasLoadResizable;
@property (nonatomic) BOOL hasAdjustSize;
@property (nonatomic) BOOL isPortrait;
@property (nonatomic) BOOL isResizable;
@property (nonatomic) BOOL isAuto;
@property (retain, nonatomic) UIView *bottomView;
@property (nonatomic) BOOL isGame;
@property (nonatomic) BOOL isEnableDark;
@property (nonatomic) double lastScreenWidth;
@property (retain, nonatomic) NSMutableArray *arrAppearAction;
@property (retain, nonatomic) NSMutableArray *arrDidBeDismissedAction;
@property (weak, nonatomic) UIViewController *weakTopVC;
@property (weak, nonatomic) id<WAUINavigationControllerDelegate> naviDelegate;
@property (retain, nonatomic) UIViewController *viewControllerBeingPushedOrPopTo;
@property (readonly, nonatomic) BOOL hasScaleToAdaptIpad;
@property (readonly, nonatomic) BOOL isCurrentPagePortraitForIpad;
@property (readonly, nonatomic) double bottomViewHeight;
@property (readonly, nonatomic) double bottomViewWidth;
@property (nonatomic) BOOL isInSheetMode;
@property (retain, nonatomic) WAMenuPopInteractiveTransition *dismissInteractiveTransition;
@property (nonatomic) long long viewState;

+ (BOOL)shouldUseCustomeNavigationBar;

- (id)initWithRootViewController:(id)a0;
- (id)init;
- (void)PushViewController:(id)a0 animated:(BOOL)a1;
- (void)PushViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)PresentModalViewControllerInPushAnimation:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissPresentedViewController;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)popViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (void)tryForceRotationWhenPushOrPop:(id)a0 ToViewController:(id)a1;
- (void)viewDidPresent:(BOOL)a0;
- (void)addAppearAction:(id /* block */)a0;
- (void)addDidBeDismissedAction:(id /* block */)a0;
- (void)viewDidBeDismissed;
- (void)doViewDidBeDismissedAction;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)doAppearAction;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)resizeAndTransformNavigationViewIfNeeded;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredNavigationViewSize;
- (void)adjustViewSizeIfUnresizable;
- (void)scaleViewIfUnresizable;
- (void)addBottomView;
- (id)ipadCompatibleModeBottomViewBackgroundColor;
- (void)layoutCenterLoading;
- (BOOL)shouldUsePresentWhenPushViewController:(id)a0 animated:(BOOL)a1;
- (void)updateStatusBarColorIfNeededForVC:(id)a0;
- (long long)overrideUserInterfaceStyle;
- (void).cxx_destruct;

@end
