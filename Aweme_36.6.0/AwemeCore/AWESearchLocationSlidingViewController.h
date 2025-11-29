@class AWESlidingViewController, NSArray, AWEPOITouchThroughView, AWESlidingTabbarView, AWEPOIPageTracker, NSString;

@interface AWESearchLocationSlidingViewController : UIViewController <AWESlidingViewControllerDelegate, AWESearchLocationMonitorProtocol>

@property (retain, nonatomic) AWEPOITouchThroughView *naviBarContainerView;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) AWESlidingTabbarView *slidingTabbarView;
@property (copy, nonatomic) NSArray *searchViewControllers;
@property (copy, nonatomic) NSArray *tabTitles;
@property (copy, nonatomic) NSArray *searchLocationContexts;
@property (retain, nonatomic) AWEPOIPageTracker *pageTracker;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didFinishTransitionToIndex:(unsigned long long)a1;
- (void)backBtnClicked;
- (void)__setUpUI;
- (id)initWithSearchLocationContexts:(id)a0;
- (void)markRequestSend;
- (void)markRequestCost;
- (void)markRequestFinishWithError:(id)a0;
- (void)markContentFillStartWithRequestError:(id)a0;
- (void)markCalculateFMPWithRequestError:(id)a0;
- (void)__selectPoiListInfo:(id)a0;
- (BOOL)isFromPublishPath;
- (id)publishCreationId;
- (id)publishMonitorCommonParams;
- (void)__setUpRequiredConfig;
- (id)__getTitleWithType:(unsigned long long)a0;
- (void)__setUpNaviBarContainerView;
- (void)__setUpSlidingTabbarView;
- (void)__setUpBackButton;
- (void)_setUpSlidingViewController;
- (long long)p_slidingViewDefaultSelectedIndex;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
