@class AWEMusicDetailInspirationFeedDataContext, UIViewController, NSString;

@interface AWEMusicDetailInspirationFeedContainerViewController : AWEBaseListViewController <AWETabListItemViewControllerProtocol, AWEZoomTransitionOuterContextProvider>

@property (nonatomic) BOOL relatedFeedFirstPageLoaded;
@property (readonly, nonatomic) AWEMusicDetailInspirationFeedDataContext *feedDataContext;
@property (retain, nonatomic) UIViewController *hostVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (void)configWithTabItemModel:(id)a0;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)prepareTrackInstance:(id)a0;
- (void)setupMusicDetailFailType:(long long)a0;
- (id)aAWEPadModuleAdapter;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)bindViewModel;
- (BOOL)supportRotationForTabList;
- (void)registerNotification;
- (BOOL)musicDetailRelatedEnable;
- (void)preloadDetailData;
- (void)showFirstPageInspirationListDataIfNeeded;
- (void)shareRecommendedAwemeCoversForIM;
- (void)bindSectionViewModel;
- (void)showShimmerViewIfNeeded:(unsigned long long)a0;
- (BOOL)musicDetailRelatedFeedEnable;
- (BOOL)isEmptyList;
- (BOOL)relatedHasMoreData;
- (BOOL)isEmptyRelatedList;
- (void)showFirstPageRelatedFeed;
- (id)titleForSegmentedControl;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)hasMoreData;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
