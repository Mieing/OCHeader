@class NSString;

@interface AWEPaySwiftImpl.FKMMainContainerViewController : CJPayFullPageBaseViewController <UIGestureRecognizerDelegate, AWERouterViewControllerProtocol, UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewHolder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_guideManager;
    void /* unknown type, empty encoding */ brightness;
    void /* unknown type, empty encoding */ useCodeBrightness;
    void /* unknown type, empty encoding */ disableNextBrightnessRestore;
    void /* unknown type, empty encoding */ reportLocationTimeoutTime;
    void /* unknown type, empty encoding */ payDeskCallback;
    void /* unknown type, empty encoding */ payStatusUpdateTaskStack;
    void /* unknown type, empty encoding */ isAccountBlockAlertShowing;
    void /* unknown type, empty encoding */ paySucceed;
    void /* unknown type, empty encoding */ codeFirstShowTime;
    void /* unknown type, empty encoding */ isPaying;
    void /* unknown type, empty encoding */ isFirstPaying;
    void /* unknown type, empty encoding */ popGesDelegate;
}

@property (nonatomic, copy) NSString *btm_pageIdentifier;
@property (nonatomic) BOOL btm_autoManaged;
@property (nonatomic) BOOL aweDisableFullscreenPopTransition;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)handleScreenshotNotification;
- (void)handleScreenCaptureStateChange;
- (void)handleDidBecomeActiveNotification;
- (void)handleWillResignActiveNotification;
- (void)handleReachabilityChangeNotification;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)dux_backAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
