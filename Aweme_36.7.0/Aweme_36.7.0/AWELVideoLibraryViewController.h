@class AWELVideoLibraryPageContext, NSString, AWELVideoHallTracker, AWELVideoFilterChildViewController;

@interface AWELVideoLibraryViewController : AWEBaseListViewController <UIScrollViewDelegate>

@property (copy, nonatomic) NSString *filterPageID;
@property (retain, nonatomic) AWELVideoHallTracker *tracker;
@property (retain, nonatomic) AWELVideoFilterChildViewController *searchFilterChildVC;
@property (nonatomic) BOOL isFirstRequestData;
@property (nonatomic) double stayDuration;
@property (nonatomic) double pageCreateTime;
@property (nonatomic) double requestFinishTime;
@property (nonatomic) double lastWidth;
@property (nonatomic) BOOL hasSetSearchFilterViewFrame;
@property (retain, nonatomic) AWELVideoLibraryPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)backBtnClick;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)addNotifications;
- (double)naviBarHeight;
- (void)trackStayTime;
- (void)startStayTime;
- (void)handleAppDidBecomeActive:(id)a0;
- (void)handleAppWillResignActive:(id)a0;
- (void)handleFetchDataState:(long long)a0;
- (void)setupAPIMonitor;
- (void)gotoAnotherPage:(id)a0 extraParams:(id)a1;
- (void)bindState;
- (void)adjustTheme;
- (void)p_updateSearchCategoryChildVCFrame:(BOOL)a0;
- (void)updateNavigationBarForFeedShare;
- (id)getAlbumsIDsWithExtraParams:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupData;
- (void)setupCollectionView:(id)a0;
- (void)setupNavigationBar;

@end
