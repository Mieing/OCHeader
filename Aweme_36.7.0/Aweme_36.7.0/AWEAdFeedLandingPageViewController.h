@class AWEAwemeModel, NSString, DUXTabBarContainerController, AWEAdWebViewController, AWEAdFeedCommentViewController, DUXTabBar, AWEBDARifleViewController, UIViewController, AWEAdSifWebViewController;
@protocol AWEAdLandingPageProtocol, AWEAdFeedLandingPageUpgradeHelper, AWEAdPartOfFeedLandingPageProtocol;

@interface AWEAdFeedLandingPageViewController : AWEAdCommentBaseViewController <AWEAdFeedLandingPageViewController, DUXTabBarContainerDelegate, AWEBDARifleViewControllerLifeCycleProtocol> {
    AWEAdFeedCommentViewController *_commentViewController;
}

@property (retain, nonatomic) AWEAdWebViewController *webViewController;
@property (retain, nonatomic) AWEAdSifWebViewController *sifViewController;
@property (retain, nonatomic) AWEBDARifleViewController *lynxViewController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) DUXTabBarContainerController *tabBarContainer;
@property (retain, nonatomic) DUXTabBar *tabBar;
@property (nonatomic) long long tabBarSelectedIndex;
@property (retain, nonatomic) UIViewController<AWEAdLandingPageProtocol, AWEAdPartOfFeedLandingPageProtocol> *finalDisplayedController;
@property (retain, nonatomic) id<AWEAdFeedLandingPageUpgradeHelper> upgradeHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adLandingPageControllerWithAwemeModel:(id)a0;

- (id)commentViewController;
- (void)setCommentViewController:(id)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (id)initWithAwemeModel:(id)a0;
- (void)trackShow;
- (void)setupGesture;
- (void)setupLynxViewControllerIfNeed;
- (void)setupWebViewController;
- (void)setupTabBarContainer;
- (void)setupNaviBar;
- (void)adCommentTrack:(id)a0 event:(id)a1 refer:(id)a2;
- (void)reportButtonTapped:(id)a0;
- (BOOL)checkShowRetain;
- (void)rifleViewController:(id)a0 loadFailedWithErrorInfo:(id)a1;
- (BOOL)shouldShowLynxContent;
- (void)setupWebViewGuaranteeBannerIfNeeded;
- (void)upgradeSelf;
- (void)backBtnClicked:(id)a0;
- (id)commentTabName:(long long)a0;
- (BOOL)sifSDKEnable;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
