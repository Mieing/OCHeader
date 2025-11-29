@class AWEAwemeModel, NSString, UIView, AWEAdWebViewController, AWEAdFeedCommentViewController, AWEAdCustomHeaderWebViewNaviBar, DUXTabBarContainerController, DUXTabBar, AWEBDARifleViewController, UIPanGestureRecognizer, AWEAdCustomHeaderWebViewTopCard;
@protocol AWEAdLandingPageProtocol;

@interface AWEAdCustomHeaderWebViewController : AWEAdCommentBaseViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, AWEBDARifleViewControllerLifeCycleProtocol, DUXTabBarContainerDelegate, AWEAdCustomHeaderWebViewController>

@property (retain, nonatomic) AWEAdWebViewController *webViewController;
@property (retain, nonatomic) AWEBDARifleViewController *lynxViewController;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) UIPanGestureRecognizer *topCardPanGesture;
@property (retain, nonatomic) AWEAdCustomHeaderWebViewTopCard *topCard;
@property (retain, nonatomic) AWEAdCustomHeaderWebViewNaviBar *naviBar;
@property (copy, nonatomic) NSString *barType;
@property (nonatomic) double naviBarHeight;
@property (nonatomic) double topCardHeight;
@property (nonatomic) double topCardHeightDiff;
@property (nonatomic) BOOL isUserSliding;
@property (nonatomic) double canScrollDisdance;
@property (nonatomic) double topCardShowHeight;
@property (nonatomic) double containerViewOriginFrame;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL isWebViewVerticalScollBlocked;
@property (retain, nonatomic) AWEAdFeedCommentViewController *commentViewController;
@property (retain, nonatomic) DUXTabBarContainerController *tabBarContainer;
@property (retain, nonatomic) DUXTabBar *tabBar;
@property (nonatomic) long long tabBarSelectedIndex;
@property (retain, nonatomic) id<AWEAdLandingPageProtocol> finalDisplayedController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adCustomHeaderWebViewControllerWithAwemeModel:(id)a0;
+ (BOOL)canShowAdCustomHeaderWebViewControllerWithAwemeModel:(id)a0;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (id)initWithAwemeModel:(id)a0;
- (void)trackShow;
- (void)onAWEUIThemeChangeNotification;
- (void)setupContainerViewAndFrame;
- (void)setupLynxViewControllerIfNeed;
- (void)setupWebViewController;
- (void)setupTabBarContainer;
- (void)setupTopBarWithBarType:(id)a0;
- (void)setupNaviBar;
- (void)updateSubViewFollowedCompletion;
- (void)startFetchUserModel;
- (void)adCommentTrack:(id)a0 event:(id)a1 refer:(id)a2;
- (BOOL)shouldShowLynxContentWithSmallBarType;
- (void)reportButtonTapped:(id)a0;
- (void)updateSubViewFollowButton;
- (BOOL)checkShowRetain;
- (void)blockContentOffsetAtVerticalZero:(id)a0;
- (void)updateContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateNaviBarContentAlpha;
- (void)rifleViewController:(id)a0 loadFailedWithErrorInfo:(id)a1;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (unsigned long long)currentState;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)backButtonTapped:(id)a0;

@end
