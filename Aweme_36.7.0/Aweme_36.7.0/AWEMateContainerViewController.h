@class AWESlidingViewController, NSString, AWESlidingTabbarView, NSMutableDictionary, NSMutableArray;

@interface AWEMateContainerViewController : UIViewController <AWESlidingViewControllerDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWESlidingTabbarView *tabView;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) NSMutableArray *tabModels;
@property (nonatomic) unsigned long long landingTab;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *topUserIDs;
@property (retain, nonatomic) NSMutableDictionary *logExtra;
@property (nonatomic) BOOL viewDidAppear;
@property (nonatomic) unsigned long long currentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (id)currentTabName;
- (void)backBtnClicked;
- (void)configureUI;
- (void)configNavigationBar;
- (void)configureSlidingViewController;
- (BOOL)leftEdgePan:(id)a0;
- (void)constructDefaultTabModels;
- (long long)landingTabIndex:(unsigned long long)a0;
- (double)tabViewWidth;
- (void)enterFindFriends;
- (id)p_currentEnterFrom;
- (id)findFriendsTabModel;
- (id)mateApplicationTabModel;
- (id)mateListTabModel;
- (id)landingTabModelForIndex:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;

@end
