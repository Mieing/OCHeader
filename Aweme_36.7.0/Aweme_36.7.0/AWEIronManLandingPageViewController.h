@class AWEIronManLandingPageCollectionViewModel, AWEIronManLandingPageDataEmptyView, AWEIronManLandingPageDiscoveryBannerViewModel, NSString, UIImageView, NSDictionary, UITableView, AWENavigationBar, AWEIronManLandingPageFooterView, UIButton, AWEIronManLandingPageDeepRelationViewModel, AWEIronManLandingPageRecentlyUsedViewModel;

@interface AWEIronManLandingPageViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWERouterViewControllerProtocol>

@property (nonatomic) unsigned long long enterFrom;
@property (copy, nonatomic) NSDictionary *bdpExtra;
@property (copy, nonatomic) NSDictionary *homepageParamDict;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) AWENavigationBar *naviBar;
@property (retain, nonatomic) AWEIronManLandingPageFooterView *footerView;
@property (retain, nonatomic) AWEIronManLandingPageDataEmptyView *emptyView;
@property (nonatomic) unsigned long long countOfSections;
@property (retain, nonatomic) AWEIronManLandingPageDeepRelationViewModel *deepRelationModel;
@property (retain, nonatomic) AWEIronManLandingPageRecentlyUsedViewModel *recentlyUsedModel;
@property (retain, nonatomic) AWEIronManLandingPageCollectionViewModel *collectionModel;
@property (retain, nonatomic) AWEIronManLandingPageDiscoveryBannerViewModel *discoveryModel;
@property (copy, nonatomic) NSString *extraMicroAppId;
@property (nonatomic) double enterTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transition_didPopDoneTransitionWithContext:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)addNotifications;
- (void)backButtonDidClick:(id)a0;
- (void)trackSearchButtonDidClick;
- (void)searchButtonDidCLick:(id)a0;
- (void)trackLandingPageLeave;
- (void)trackLandingPageShow;
- (void)p_fetchSidebarGuidanceAndShow;
- (void)configTableViewDataSource;
- (void)p_configTableViewDataSourceForHomePageEntrance;
- (void)p_configTableViewDataSourceForOldVersionEntrance;
- (void)addDeepRelationSection;
- (void)addRecentlyUsedSection;
- (void)addCollectionSection;
- (void)addDiscoveryBannerSection;
- (void)setBaseViewModel:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)fetchData;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)addObserver;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)removeNotifications;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)themeDidChange;
- (void)setUpUI;

@end
