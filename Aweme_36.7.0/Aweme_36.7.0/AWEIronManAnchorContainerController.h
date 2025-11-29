@class UIButton, NSArray, NSString;

@interface AWEIronManAnchorContainerController : AWESlidingViewController <AWERouterViewControllerProtocol, AWESlidingViewControllerDelegate>

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSArray *tabs;
@property (nonatomic) unsigned long long tooltipsMaxTimes;
@property (retain, nonatomic) NSString *extraJsonParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didFinishTransitionFromPreviousIndex:(long long)a1 currentIndex:(long long)a2 transitionType:(long long)a3;
- (void)closeButtonDidClick:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameAtIndex:(long long)a0;
- (void)preloadTalentPageIfNeed;
- (void)showTooltips;
- (void)ironManDidMountInCurrentTab:(id)a0;
- (id)tabbarTitleArray;
- (void)trackCurrentTabShow;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)addObserver;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setUpUI;

@end
