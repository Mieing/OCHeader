@class UIView, AWEIronManLandingPageCommonCollectionCell, AWEIronManLandingPageCommonItemModel, NSString, UIImageView, AWENavigationBar, UIButton, AWEIronManLandingPageBottomBarView, UICollectionView;
@protocol AWEIronManLandingPageViewModelProtocol, AWEIronManLandingPageInteractiveProtocol, AWEIronManLandingPageDetailPageViewModelProtocol, AWEIronManLandingPageTrackerViewModelProtocol;

@interface AWEIronManLandingPageDetailViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWENavigationBar *naviBar;
@property (nonatomic) unsigned long long dragingIndex;
@property (retain, nonatomic) UIView *dragingView;
@property (retain, nonatomic) AWEIronManLandingPageCommonCollectionCell *dragingCell;
@property (retain, nonatomic) AWEIronManLandingPageCommonItemModel *dragingItemModel;
@property (retain, nonatomic) AWEIronManLandingPageBottomBarView *bottomBar;
@property (nonatomic) unsigned long long recordType;
@property (retain, nonatomic) id<AWEIronManLandingPageDetailPageViewModelProtocol, AWEIronManLandingPageInteractiveProtocol, AWEIronManLandingPageViewModelProtocol, AWEIronManLandingPageTrackerViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotifications;
- (void)backButtonDidClick:(id)a0;
- (void)trackItemClickAtIndex:(unsigned long long)a0;
- (void)trackItemShowAtIndex:(unsigned long long)a0;
- (void)impactFeedback;
- (void)addBottomBar;
- (void)dragingBegan:(id)a0;
- (void)dragingChanged:(id)a0;
- (void)dragingEnded:(id)a0;
- (id)getDragingIndexPathWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)removeBottomBar;
- (void)restoreDragingView;
- (void)restoreDragingCell;
- (void)trackDragingToDeleteCollectionAtIndex:(unsigned long long)a0;
- (void)trackDragingToDeleteRecentlyUsedAtIndex:(unsigned long long)a0;
- (void)trackDragingToAddCollectionAtIndex:(unsigned long long)a0;
- (void)trackSearchButtonDidClick;
- (void)searchButtonDidCLick:(id)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)addObserver;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)removeNotifications;
- (void)longPressGesture:(id)a0;
- (void)themeDidChange;

@end
