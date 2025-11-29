@class AWESlidingViewController, AWEIMFansContainerViewController, NSString, AWEIMFansAndInteractMergeViewControllerNaviBar, UIViewController;
@protocol AWERouterViewControllerProtocol;

@interface AWEIMFansAndInteractMergeViewController : UIViewController <AWEIMMessageTabPadSplitSecondaryViewController, AWESlidingViewControllerDelegate, AWEIMFansAndInteractMergeViewControllerNaviBarDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEIMFansContainerViewController *fansViewController;
@property (retain, nonatomic) UIViewController<AWERouterViewControllerProtocol> *interactViewController;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) AWEIMFansAndInteractMergeViewControllerNaviBar *customNaviBar;
@property (nonatomic) long long currentSelectedIndex;
@property (nonatomic) BOOL hasShownInteractPage;
@property (nonatomic) BOOL hasShownFansPage;
@property (nonatomic) long long landingTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)slidingViewControllerDidScroll:(id)a0;
- (unsigned long long)bizLine;
- (id)bizIdentifier;
- (void)backBtnClicked:(id)a0;
- (void)didSelectIndex:(long long)a0;
- (void)p_setupNaviBar;
- (void)p_realDidSelectIndex:(long long)a0 needTrack:(BOOL)a1 enterMethod:(long long)a2;
- (void)p_trackSlideWithName:(id)a0 enterFrom:(id)a1 enterMethod:(long long)a2;
- (void)p_showPopoverIfNecessary;
- (id)initWithLandingTab:(long long)a0;
- (void).cxx_destruct;
- (void)setupObservers;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
