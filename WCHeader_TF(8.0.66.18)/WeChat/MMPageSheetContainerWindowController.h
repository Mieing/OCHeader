@class NSString, MMPageSheetProviderView;
@protocol MMPageSheetContainerDelegate;

@interface MMPageSheetContainerWindowController : MMWindowViewController <WCFinderHalfScreenProtocol, MMPageSheetProviderViewDelegate, MMPageSheetWindowDelegate, MMPageSheetContainer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MMPageSheetProviderView *providerView;
@property (nonatomic) unsigned long long supportOrientation;
@property (weak, nonatomic) id<MMPageSheetContainerDelegate> containerDelegate;
@property (nonatomic) BOOL pageSheetDismissed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getHalfContainerView;
- (id)getCurTargetRatioValue;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)hideWithAnimated:(int)a0;
- (BOOL)shouldHandleStatusBarAppearance;
- (BOOL)shouldTransferTouchEventInPoint:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)supportAdjustOrientationMask;
- (void)notifySupportedOrientationMaskShouldAdjust;
- (void)resetSupportOrientation;
- (void)onPageSheetDismiss:(id)a0 complete:(id /* block */)a1;
- (id)getContainerViewController;
- (void)setupWithProvider:(id)a0;
- (void)showPageSheetAnimated:(BOOL)a0 parentView:(id)a1 parentViewController:(id)a2 complete:(id /* block */)a3;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateContentHeightWithAnimated:(BOOL)a0;
- (void)pushPageSheet:(id)a0 animated:(BOOL)a1;
- (void)popPageSheetWithAnimated:(BOOL)a0;
- (void)adjustContainerYOffset:(double)a0 animated:(BOOL)a1;
- (void)popPageSheetTo:(id)a0 animated:(BOOL)a1;
- (id)pageSheetContainerView;
- (id)pageSheetHeightRatioValue;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;

@end
