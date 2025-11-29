@interface AWEIMGroupImpl.GroupEssenceContainerViewController : UIViewController <DUXTabBarContainerDelegate, IESIMGroupOpenCapabilityViewController, IESIMGroupEssenceContainerProtocol> {
    void /* unknown type, empty encoding */ tabContainer;
    void /* unknown type, empty encoding */ groupChatContentViewController;
    void /* unknown type, empty encoding */ groupCollectContainerViewController;
    void /* unknown type, empty encoding */ con;
    void /* unknown type, empty encoding */ landingPage;
    void /* unknown type, empty encoding */ isFirstAppear;
    void /* unknown type, empty encoding */ model;
}

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)leave;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
