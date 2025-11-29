@interface AWEPaySwiftImpl.FKMNFCMainViewController : CJPayFullPageBaseViewController <IESLCConnectService> {
    void /* unknown type, empty encoding */ routeParams;
    void /* unknown type, empty encoding */ payStatusUpdateTaskStack;
    void /* unknown type, empty encoding */ payDeskCallback;
    void /* unknown type, empty encoding */ viewSetupFinished;
    void /* unknown type, empty encoding */ isInProgress;
    void /* unknown type, empty encoding */ requestFinished;
    void /* unknown type, empty encoding */ animationFinished;
    void /* unknown type, empty encoding */ paySucceed;
    void /* unknown type, empty encoding */ progressFinishToDoTask;
    void /* unknown type, empty encoding */ isAccountBlockAlertShowing;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ bindError;
    void /* unknown type, empty encoding */ reportLocationTimeoutTime;
    void /* unknown type, empty encoding */ blueToothAuthorized;
    void /* unknown type, empty encoding */ codeStatusManager;
    void /* unknown type, empty encoding */ unknownResultJumpShouldJump;
    void /* unknown type, empty encoding */ hasJumpToUnknownConfigUrl;
    void /* unknown type, empty encoding */ curCodeValue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_errorBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topBackgroundImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topTitleImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainLoadingView;
}

@property (nonatomic) BOOL aweDisableFullscreenPopTransition;

- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)ieslc_onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 errorStr:(id)a3 errorDict:(id)a4;
- (void)handleReachabilityChangeNotification;
- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (void)handleForegroundNotification;
- (void)handleBackgroundNotification;
- (void)goToConfigUrl;
- (void)dux_backAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
