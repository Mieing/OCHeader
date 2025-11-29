@class NSArray, AWESlidingViewController, AWEMultiTabActivitySegmentControl, NSString;

@interface AWEMultiTabActivityViewController : UIViewController <AWERouterViewControllerProtocol, AWESlidingViewControllerDelegate, AWEMultiTabActivitySegmentDelegate>

@property (retain, nonatomic) AWESlidingViewController *slidingController;
@property (retain, nonatomic) AWEMultiTabActivitySegmentControl *tabbar;
@property (copy, nonatomic) NSArray *dataSource;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *targetCampaignID;
@property (nonatomic) BOOL initialTabTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didFinishTransitionFromPreviousIndex:(long long)a1 currentIndex:(long long)a2 transitionType:(long long)a3;
- (void)didClickBackButton;
- (void)willChangeToSegmentAtIndex:(unsigned long long)a0 userClick:(BOOL)a1 hasRedBadge:(BOOL)a2;
- (void)didClickWalletButton;
- (id)commonActivityTrackerInfo;
- (id)currentTopViewController;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)init;
- (id)currentDate;
- (void)viewDidLoad;

@end
