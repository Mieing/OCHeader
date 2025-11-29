@class BDPAppPageURL, NSString, BDPFakeTabBar, BDPTabBarConfig, NSMutableArray, BDPUniqueID;

@interface BDPTabBarPageController : UITabBarController <BDPFakeTabBarDelegate> {
    BOOL _isTabBarDoubleClick;
    BDPTabBarConfig *_tabBarConfig;
    long long _lastClickedIndex;
    double _tabbarHeight;
    long long _configImageCount;
    long long _loadedConfigImageCount;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAppPageURL *page;
@property (nonatomic) BOOL isAppeared;
@property (nonatomic) BOOL isTabBarVisible;
@property (readonly, nonatomic) BOOL didLoadAllConfigImages;
@property (retain, nonatomic) NSMutableArray *setTabBarImageActions;
@property (nonatomic) BOOL hasAddTabBarOnIPadOS18;
@property (nonatomic) BOOL isSpecialRoute;
@property (retain, nonatomic) BDPFakeTabBar *customTabBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addFixIPadOS18TabBarIfNeeded;
- (BOOL)isFixTarBarOnIPadOS18;
- (id)tabBarTargetSubViewOnIPadOS18;
- (void)fixIPadOS18TabBar;
- (void)fixIPadOS26TabBarNotDisplayIfNeeded;
- (id)initWithUniqueID:(id)a0 page:(id)a1 tabBar:(id)a2 delegate:(id)a3;
- (BOOL)isiOS26Adaptor;
- (void)setTabBarVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)disableTabCustomBarAdaptorInIOS26;
- (BOOL)lazyCreateViewController;
- (id)initWithUniqueID:(id)a0 page:(id)a1 tabBar:(id)a2 isSpecialRoute:(BOOL)a3 delegate:(id)a4;
- (void)setTabBarVisibleBeforeAppear:(BOOL)a0;
- (void)customTabBar:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)setTabBarItem:(long long)a0 text:(id)a1 iconPath:(id)a2 selectedIconPath:(id)a3 completion:(id /* block */)a4;
- (void)setTabBarStyle:(id)a0 textSelectedColor:(id)a1 backgroundColor:(id)a2 borderStyle:(id)a3 completion:(id /* block */)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateTabBarFrame;
- (id /* block */)setTabBarImageActionBlk;
- (id)createTabBarItemWithPageConfig:(id)a0;
- (BOOL)isFixTabBarOnIPADOS26;
- (id)navControllerWithPageConfig:(id)a0 pagePath:(id)a1 item:(id)a2;
- (id)createNavControllerAtIndex:(long long)a0 item:(id)a1;
- (void)createNavControllerIfNeededAtIndex:(long long)a0;
- (id)subStringIn:(id)a0 forMaxLength:(unsigned long long)a1;
- (void)setCustomTabBarItem:(long long)a0 text:(id)a1 iconPath:(id)a2 selectedIconPath:(id)a3 completion:(id /* block */)a4;
- (void)setCustomTabBarStyle:(id)a0 textSelectedColor:(id)a1 backgroundColor:(id)a2 borderStyle:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)shouldAutorotate;
- (void)setSelectedIndex:(unsigned long long)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)tabBar:(id)a0 didSelectItem:(id)a1;

@end
