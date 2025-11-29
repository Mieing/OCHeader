@class AWEFavoriteV2ViewController_New, NSString, UIImageView, NSDictionary, AWEFavoriteTabListDataContext, AWEFavoriteTabListContainerViewModel, AWEProfileContext, AWEFavoriteTabListContainerViewController;

@interface AWEFavoriteLandingPageViewController : UIViewController <AWEUserProfileTabVCDelegate, BTMPageManagableProtocol, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEFavoriteV2ViewController_New *favoriteVC;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) unsigned long long favoriteLandingType;
@property (retain, nonatomic) UIImageView *lockImageView;
@property (retain, nonatomic) AWEFavoriteTabListContainerViewController *favoriteVCTabOptimized;
@property (retain, nonatomic) AWEFavoriteTabListDataContext *dataContextTabOptimized;
@property (retain, nonatomic) AWEFavoriteTabListContainerViewModel *viewModelTabOptimized;
@property (nonatomic) BOOL hasRedDotWhenSwitch;
@property (copy, nonatomic) NSDictionary *routeParams;
@property (retain, nonatomic) AWEProfileContext *profileContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)userProfileTabVC:(id)a0 didScroll:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })contentOffsetOfCurrentVC;
- (double)maxBannerHeight;
- (id)userForTabVC;
- (double)userProfileTabHeight;
- (void)searchButtonClicked:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)parseLandingTab:(id)a0;
- (void)addLockIconIfNeeded;
- (void)trackSearchButtonClicked;
- (void)addLocksToTabWithNoti:(id)a0;
- (void)hideLockImageView;
- (void)addLockImageView;
- (BOOL)isFavoriteLock;
- (BOOL)isFavoriteLockForTabOptimization;
- (void).cxx_destruct;
- (id)init;
- (double)headerHeight;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)addObservers;

@end
