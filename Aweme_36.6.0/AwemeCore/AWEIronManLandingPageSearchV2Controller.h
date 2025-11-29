@class AWELandingPageEmptyDataView, UIView, NSString, AWESearchBar, AWEIronManLandingPageSearchHistoryCollectionCell, UIButton, NSDictionary, UICollectionView, AWEIronManLandingPageSearchResultViewModel;

@interface AWEIronManLandingPageSearchV2Controller : UIViewController <UISearchBarDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEIronManLandingPageSearchResultViewModel *viewModel;
@property (retain, nonatomic) UIView *naviBar;
@property (retain, nonatomic) UIButton *searchButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) AWESearchBar *searchBar;
@property (retain, nonatomic) UICollectionView *searchHistoryView;
@property (retain, nonatomic) UICollectionView *searchResultView;
@property (retain, nonatomic) AWELandingPageEmptyDataView *searchEmptyView;
@property (retain, nonatomic) AWEIronManLandingPageSearchHistoryCollectionCell *testCell;
@property (copy, nonatomic) NSString *placeHolder;
@property (nonatomic) unsigned long long enterFrom;
@property (nonatomic) unsigned long long searchRange;
@property (copy, nonatomic) NSDictionary *commonTrackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)addNotifications;
- (void)setupObserver;
- (void)setupNaviBar;
- (void)backButtonDidClick;
- (void)searchButtonDidClick;
- (void)trackItemShowWithItemModel:(id)a0 event:(id)a1 extra:(id)a2;
- (id)initWithBDPTrackParams:(id)a0 placeHolder:(id)a1 commonTrackDict:(id)a2;
- (void)trackSearchClick;
- (void)setupSearchUI;
- (void)clearButtonDidClick;
- (void)trackSearchHistoryViewShow;
- (void)trackSearchResultViewShow;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)removeNotifications;
- (void)setupUI;
- (void)themeDidChange;

@end
