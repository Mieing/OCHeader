@class NSString, UIImageView, AWEPlayletPageContext, AWEPlayletCenterPageNaviBarView, AWEPlayletTracker, AWETripleColumnPlayletContainerViewController;

@interface AWEPlayletCenterCardViewController : UIViewController <UIScrollViewDelegate, AWERouterViewControllerProtocol, AWEPlayletCentralizationCardViewControllerProtocol>

@property (retain, nonatomic) AWEPlayletCenterPageNaviBarView *naviBarView;
@property (retain, nonatomic) AWETripleColumnPlayletContainerViewController *containerView;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) AWEPlayletPageContext *context;
@property (retain, nonatomic) AWEPlayletTracker *tracker;
@property (nonatomic) BOOL hasTrackerPageShow;
@property (nonatomic) BOOL isFromPlayletInner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ changeFeedAction;
@property (copy, nonatomic) id /* block */ skylightLoadCompletion;
@property (copy, nonatomic) id /* block */ skylightTabDidTap;
@property (nonatomic) BOOL isVisibleToUser;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)trackPageShow;
- (id)currentPageName;
- (double)containerViewTopOffset;
- (id)switchEntryCoverView;
- (void)updateCoverViewWithImage:(id)a0;
- (void)updateCoverViewWithModel:(id)a0;
- (void)openSearchPage;
- (void)enterForSwitch;
- (void)leaveForSwitch;
- (void)hiddenBackgroundView;
- (void)updateScrollEnabled:(BOOL)a0;
- (void)hiddenNaviBar;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)appWillResignActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)appDidBecomeActive:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;
- (id)pageContext;
- (void)addObservers;

@end
