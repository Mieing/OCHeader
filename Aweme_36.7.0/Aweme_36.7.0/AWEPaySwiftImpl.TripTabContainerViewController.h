@interface AWEPaySwiftImpl.TripTabContainerViewController : UIViewController <AWERouterViewControllerProtocol, DUXTabBarContainerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backImage;
    void /* unknown type, empty encoding */ loadingVC;
    void /* unknown type, empty encoding */ tabBarControllers;
    void /* unknown type, empty encoding */ tabBarSelectedIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tabBarContainer;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (BOOL)configWithRouterParamDict:(id)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
