@class AWEPOIUGCRateTabsNavigationBar, NSString, NSDictionary, NSArray, AWEPOIUGCRateSelectShopBar, AWESlidingViewController;

@interface AWEPOIUGCRateTabsContainerViewController : UIViewController <AWEPOIUGCRateTabsNavigationBarDelegate, AWEPOIUGCRateSelectShopBarDelegate, AWESlidingViewControllerDelegate, BTMPageManagableProtocol, AWERouterViewControllerProtocol>

@property (copy, nonatomic) NSDictionary *routerParamDict;
@property (nonatomic) BOOL showSelectivePoiBar;
@property (copy, nonatomic) NSDictionary *selectivePoiBarParams;
@property (copy, nonatomic) NSString *productID;
@property (nonatomic) long long selectedTabIndexFromRouter;
@property (copy, nonatomic) NSString *selectedTabTypeWhenFirstRequest;
@property (copy, nonatomic) NSString *selectedPoiID;
@property (copy, nonatomic) NSString *selectedBrandID;
@property (nonatomic) BOOL hasSelectedShopBar;
@property (copy, nonatomic) NSArray *pageTabs;
@property (copy, nonatomic) NSString *traceSessionID;
@property (copy, nonatomic) NSArray *ugcRateControllers;
@property (nonatomic) BOOL hasClickBack;
@property (retain, nonatomic) AWEPOIUGCRateTabsNavigationBar *navigationBar;
@property (retain, nonatomic) AWEPOIUGCRateSelectShopBar *shopBar;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (nonatomic) BOOL hasTrackedContainerShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)didClickBackButton;
- (id)commonTrackParams;
- (void)trackExit;
- (void)didClickShopBar;
- (void)didSelectWithItemId:(id)a0 itemName:(id)a1 itemType:(unsigned long long)a2 isDifferent:(BOOL)a3 poiScore:(id)a4;
- (void)didShowShopItemWithScore:(id)a0;
- (void)configPOIBarWithParams:(id)a0;
- (void)sendRequestIfNeedWithIndex:(long long)a0;
- (id)viewControllerRouterParamDictAtIndex:(long long)a0;
- (void)bindStateAndActionWithController:(id)a0;
- (void)trackUgcRateTabsContainerShow;
- (void)didClickWithDifferentTab:(BOOL)a0 index:(long long)a1;
- (id)trackingParamsForRightIcon;
- (id)routeParamsForRightIcon;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)didMoveToParentViewController:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
