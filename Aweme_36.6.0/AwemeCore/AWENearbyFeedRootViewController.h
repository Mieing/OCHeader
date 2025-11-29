@class AWENearbyFeedContainerViewController, NSString, UIPanGestureRecognizer;
@protocol AWEFeedRefreshAnimationProtocol;

@interface AWENearbyFeedRootViewController : UIViewController <UIGestureRecognizerDelegate, AWEViewControllerRefreshable, AWEViewControllerNewRefreshable, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWENearbyFeedContainerViewController *contentViewController;
@property (nonatomic) long long refreshState;
@property (retain, nonatomic) id<AWEFeedRefreshAnimationProtocol> refreshAnimation;
@property (retain, nonatomic) UIPanGestureRecognizer *verticalPan;
@property (nonatomic) BOOL verticalPanActive;
@property (nonatomic) BOOL tapticEngineTapped;
@property (nonatomic) unsigned long long verticalPanType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (id)aAWEPadModuleAdapter;
- (void)refreshWithType:(long long)a0 completion:(id /* block */)a1;
- (unsigned long long)directionForPan:(id)a0;
- (void)dragToEndConfirmRefresh:(struct CGPoint { double x0; double x1; })a0;
- (void)dragCancelRefreshing;
- (void)refreshWithOutResultWithCompletion:(id /* block */)a0;
- (void)generateContentViewController;
- (void)createRefreshAnimationView;
- (void)cancelRefreshing;
- (void)_addPanGesture;
- (BOOL)pullRefreshEnable:(id)a0;
- (BOOL)p_refreshWithCompletion:(id /* block */)a0 freshType:(long long)a1;
- (void)p_resetContainerViewController;
- (BOOL)enableRefresh;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (long long)preferredStatusBarStyle;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (BOOL)refreshWithCompletion:(id /* block */)a0;
- (void)handlePanGesture:(id)a0;

@end
