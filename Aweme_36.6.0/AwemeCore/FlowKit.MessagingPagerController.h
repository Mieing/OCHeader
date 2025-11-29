@interface FlowKit.MessagingPagerController : FlowCommon.FlowPageController <FlowIMX.FlowIMConnectionServiceDelegate, FlowUIKit.FlowNavChildViewController> {
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ messagingVC;
    void /* unknown type, empty encoding */ viewControllers;
    void /* unknown type, empty encoding */ inputHandler;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ musicTmplController;
    void /* unknown type, empty encoding */ currentUserInterfaceStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_connectingLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isConnecting;
    void /* unknown type, empty encoding */ _localDefaultPage;
    void /* unknown type, empty encoding */ commonParam;
    void /* unknown type, empty encoding */ enterMethod;
    void /* unknown type, empty encoding */ lastMsgVCEnterMethod;
    void /* unknown type, empty encoding */ switchTabWithClick;
    void /* unknown type, empty encoding */ hidesBottomBarWhenPushedValue;
    void /* unknown type, empty encoding */ initConfigPagerBarLayout;
    void /* unknown type, empty encoding */ selectMode;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ shouldPreloadFallsVideo;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fallsFeedVC;
}

@property (nonatomic) BOOL hidesBottomBarWhenPushed;

- (void)onConnectionFailedWithState:(long long)a0 error:(id)a1;
- (void)onChangeConnectionStatusWithState:(long long)a0;
- (id)flow_trackParametersWith:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)pagerViewLayoutDidScroll:(id)a0;
- (long long)numberOfControllersInPagerController;
- (id)pagerController:(id)a0 controllerForIndex:(long long)a1 prefetching:(BOOL)a2;
- (void)pagerController:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 progress:(double)a3;
- (void)pagerController:(id)a0 viewDidAppear:(id)a1 forIndex:(long long)a2;
- (void)pagerController:(id)a0 viewDidDisappear:(id)a1 forIndex:(long long)a2;
- (void)pagerControllerDidEndScrolling:(id)a0 animate:(BOOL)a1;
- (void)pagerTabBar:(id)a0 configureLayout:(id)a1;
- (void)pagerTabBar:(id)a0 didSelectItemAtIndex:(long long)a1;
- (long long)numberOfItemsInPagerTabBar;
- (BOOL)shouldNavBeginWithGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
