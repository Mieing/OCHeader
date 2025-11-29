@class NSString, WCWebSearchViewControllerNewH5, CircleToSearchScrollView, CircleToSearchLoadingView, ShowFullScreenAnimationController, MMUIView, CircleToSearchEntity, MMUIButton;

@interface CircleToSearchViewController : MMUIViewController <TransitioningAnimationDelegate, INetworkStatusMgrExt>

@property (retain, nonatomic) CircleToSearchEntity *entity;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUIButton *debugButton;
@property (retain, nonatomic) CircleToSearchScrollView *scrollView;
@property (retain, nonatomic) CircleToSearchLoadingView *loadingView;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) WCWebSearchViewControllerNewH5 *searchPage;
@property (nonatomic) int halfScreenType;
@property (retain, nonatomic) ShowFullScreenAnimationController *transitionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentFromViewController:(id)a0 withEntity:(id)a1;

- (id)initWithEntity:(id)a0;
- (void)configFullScreenTransitionForNavigationController:(id)a0;
- (void)viewDidLoad;
- (void)viewDidBePresented:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)dealloc;
- (BOOL)DismissMyselfAnimated:(BOOL)a0;
- (void)showVCAnimation;
- (void)hideVCAnimation;
- (void)handleCloseButtonClick:(id)a0;
- (void)handleDebugButtonClick:(id)a0;
- (void)handleScrollViewTapGesture:(id)a0;
- (void)handleEdgeGesture:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)updateScreenEdgesDeferringSystemGestures;
- (id)getShadowedImage:(id)a0;
- (id)getHalfScreenTypeNameForType:(int)a0;
- (double)getHalfScreenHeightForType:(int)a0 andViewHeight:(double)a1;
- (double)getHalfScreenHeightForType:(int)a0;
- (int)getHalfScreenTypeForTypeName:(id)a0;
- (void)willSwitchHalfScreenType;
- (void)doSwitchHalfScreenType:(int)a0 withAnimationDuration:(double)a1 andCompletion:(id /* block */)a2;
- (void)doSwitchHalfScreenTypeInitAndDismissAnimated:(BOOL)a0;
- (void)onCircleToSearchEvent:(id)a0 andData:(id)a1;
- (void)handleCircleToSearchAction:(id)a0 andCompletion:(id /* block */)a1;
- (void)handleCircleToSearchActionStartLoadingAnimation:(id)a0 andCompletion:(id /* block */)a1;
- (void)handleCircleToSearchActionStopLoadingAnimation:(id)a0 andCompletion:(id /* block */)a1;
- (void)handleCircleToSearchActionGetImageUrlList:(id)a0 andCompletion:(id /* block */)a1;
- (void)handleCircleToSearchActionFocus:(id)a0 andCompletion:(id /* block */)a1;
- (void)handleCircleToSearchActionChangeHeight:(id)a0 andCompletion:(id /* block */)a1;
- (void)handleCircleToSearchActionDismiss:(id)a0 andCompletion:(id /* block */)a1;
- (void)handleCircleToSearchActionShowToast:(id)a0 andCompletion:(id /* block */)a1;
- (void)handleCircleToSearchActionDebug:(id)a0 andCompletion:(id /* block */)a1;
- (BOOL)shouldFixParentAppearEventWhenPresented;
- (BOOL)hidesStatusBar;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldHideNavigationBar;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)onNetworkStatusChange:(unsigned int)a0;
- (void)onNetworkWeakChanged:(BOOL)a0 currentRTT:(unsigned int)a1;
- (void).cxx_destruct;

@end
