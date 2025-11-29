@class NSString, MMPageSheetAdapter, MMPageSheetProviderView;
@protocol MMPageSheetProvider, MMPageSheetContainerViewControllerDelegate, MMPageSheetContainerDelegate;

@interface MMPageSheetContainerViewController : MMUIViewController <WCFinderHalfScreenProtocol, MMPageSheetProviderViewDelegate, UIViewControllerTransitioningDelegate, MMPageSheetAdapterDelegate, MMPageSheetContainer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MMPageSheetProviderView *providerView;
@property (weak, nonatomic) id<MMPageSheetProvider, MMPageSheetContainerDelegate> currPageProvider;
@property (nonatomic) unsigned long long supportOrientation;
@property (nonatomic) BOOL isPageSheetDismissed;
@property (nonatomic) BOOL isPageSheetPresented;
@property (nonatomic) BOOL hasCallShowPageSheet;
@property (nonatomic) BOOL showPageSheetAnimated;
@property (copy, nonatomic) id /* block */ showPageSheetComplete;
@property (retain, nonatomic) MMPageSheetAdapter *pageSheet;
@property (weak, nonatomic) id<MMPageSheetContainerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getHalfContainerView;
- (void)updateHalfScreenHeightRatio:(double)a0;
- (id)initWithPageSheet:(id)a0;
- (void)dealloc;
- (id)pageSheetAdapter;
- (id)hostViewController;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)willAppear;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetContainerDidDismiss:(id)a0;
- (void)pageSheetPresentAnimateWillBegin:(id)a0;
- (void)pageSheetPresentAnimateDidEnd:(id)a0;
- (void)setupWithProvider:(id)a0;
- (void)showPageSheetAnimated:(BOOL)a0 parentView:(id)a1 parentViewController:(id)a2 complete:(id /* block */)a3;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateContentHeightWithAnimated:(BOOL)a0;
- (void)pushPageSheet:(id)a0 animated:(BOOL)a1;
- (void)popPageSheetWithAnimated:(BOOL)a0;
- (void)popPageSheetTo:(id)a0 animated:(BOOL)a1;
- (void)adjustContainerYOffset:(double)a0 animated:(BOOL)a1;
- (id)pageSheetContainerView;
- (void)onPageSheetDismiss:(id)a0 complete:(id /* block */)a1;
- (id)getContainerViewController;
- (void).cxx_destruct;

@end
