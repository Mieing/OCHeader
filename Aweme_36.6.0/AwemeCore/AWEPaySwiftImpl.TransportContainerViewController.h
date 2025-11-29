@interface AWEPaySwiftImpl.TransportContainerViewController : UIViewController <AWERouterViewControllerProtocol, AWEUserMessage, AWEShellViewControllerProtocol, AWEYAPTransportDelegate, CJPayTabBarContainerDelegate> {
    void /* unknown type, empty encoding */ statusBarStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewHolder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_controllerManager;
    void /* unknown type, empty encoding */ tabBarControllers;
    void /* unknown type, empty encoding */ tabBarSelectedIndex;
    void /* unknown type, empty encoding */ isGuideLogin;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)didFinishLoginWithUid:(id)a0;
- (void)refreshContainer:(id)a0;
- (BOOL)canShowDesktopShortcutGuide;
- (void)updateScreenBrightnessIfNeed;
- (id)containerViewController;
- (id)currentViewController;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)dux_backAction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
