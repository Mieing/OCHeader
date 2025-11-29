@class NSString, NSPointerArray, AWEEcomSearchListControllerConfig;

@interface AWEEcomSearchListControllerManager : AWEBaseControllerManager <AWEEcomSearchListControllerProtocol> {
    NSPointerArray *_delegates;
}

@property (retain, nonatomic) AWEEcomSearchListControllerConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (void)loadControllersWithContainer:(id)a0 rootView:(id)a1 withContext:(id)a2;
- (void)windowDidBecomeKeyNotification;
- (double)collectionView:(id)a0 layout:(id)a1 heightForHeaderInSection:(long long)a2;
- (void)viewDidLoadAfterTableviewSetup;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (id)getClassArray;
- (void)viewDidLoadBeforeCollectionviewSetup;
- (void)registerCollectionViewCell:(id)a0;
- (void)collectionView:(id)a0 didSelectItemWithModel:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2 withModel:(id)a3;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 sizeForItemAtIndexPath:(id)a1 withModel:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 xOffsetForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 layout:(id)a1 stickyForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 originYForItemAtIndexPath:(id)a2;
- (id)identifierForModel:(id)a0;
- (void)willConfigCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)configCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)windowDidResignKeyNotification;
- (void)fetchDataWithKeyWord:(id)a0 enterFrom:(id)a1 extraLogParams:(id)a2;
- (void)sendRefreshRequestWithSearchQueryParmas:(id)a0;
- (void)managerSearchKeywordCallBack;
- (void)afterLayoutFirstPageRealDataWithContext:(id)a0;
- (void)clearGuideSearchWord;
- (void)headerViewShouldUpdateTheme:(unsigned long long)a0;
- (void)viewDidAppear;
- (void)becomeActive;
- (void)removeController:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)didReceiveMemoryWarning;
- (void)addController:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)applicationDidBecomeActive;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)applicationWillResignActive;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)viewWillAppear;
- (void)scrollViewDidScroll:(id)a0;
- (void)reset;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
