@class AWEEcomSearchListConfig, NSString, UICollectionView, UINavigationController, AWEEcomSearchListContext, AWEEcomSearchListControllerManager;
@protocol AWESearchECardTracker, AWEEcomSearchListResultPageProtocol;

@interface AWEEcomSearchList : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWENewCollectionDelegateWaterfallLayout, AWEEcomSearchListContainerProtocol>

@property (retain, nonatomic) AWEEcomSearchListContext *context;
@property (retain, nonatomic) AWEEcomSearchListControllerManager *controllerManager;
@property (retain, nonatomic) AWEEcomSearchListConfig *config;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) id<AWESearchECardTracker> eCardTacker;
@property (weak, nonatomic) id<AWEEcomSearchListResultPageProtocol> resultPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UINavigationController *navigationController;

+ (id)schemaConfigKey:(id)a0;
+ (BOOL)isLynxPreprocessOptimize;

- (double)collectionView:(id)a0 layout:(id)a1 heightForHeaderInSection:(long long)a2;
- (id)createControllerManager;
- (void)loadControllerManager;
- (double)collectionView:(id)a0 layout:(id)a1 minimumColumnSpacingForSectionAtIndex:(long long)a2;
- (void)setupInit;
- (void)handleAppBecomeActive;
- (void)addAppObservers;
- (id)modelOfIndexPath:(id)a0;
- (double)contentWidthForIndexPath:(id)a0;
- (double)doubleColumnCardWidthForIndexPath:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 xOffsetForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 yOffsetForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 layout:(id)a1 stickyForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 originYForItemAtIndexPath:(id)a2;
- (BOOL)enableSections;
- (void)handleWindowDidBecomeKeyNotification:(id)a0;
- (void)handleWindowDidResignKeyNotification:(id)a0;
- (BOOL)collectionView:(id)a0 shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)collectionViewMinimumItemSpacing:(long long)a0;
- (void)willBeginRefreshData;
- (void)willReloadFirstPage;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)didReceiveMemoryWarning;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (id)createContext;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView;
- (void)setupContext;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)handleAppWillResignActive;

@end
