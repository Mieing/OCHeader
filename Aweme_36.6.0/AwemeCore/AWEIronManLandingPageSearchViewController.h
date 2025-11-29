@class UIView, NSString, AWESearchBar, UIImageView, UIButton, AWEIronManLandingPageSearchHistoryCollectionCell, UICollectionView, AWEIronManLandingPageSearchResultViewModel, UILabel;

@interface AWEIronManLandingPageSearchViewController : UIViewController <UISearchBarDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWEIronManLandingPageSearchResultViewModel *viewModel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *backgroundImage;
@property (retain, nonatomic) AWESearchBar *searchBar;
@property (retain, nonatomic) UICollectionView *searchHistoryView;
@property (retain, nonatomic) UICollectionView *searchResultView;
@property (retain, nonatomic) UIView *searchEmptyView;
@property (retain, nonatomic) UIImageView *emptyResultImageView;
@property (retain, nonatomic) UILabel *searchEmptyDesc;
@property (retain, nonatomic) AWEIronManLandingPageSearchHistoryCollectionCell *testCell;
@property (nonatomic) unsigned long long enterFrom;
@property (nonatomic) unsigned long long searchRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotifications;
- (void)cancelButtonDidClick;
- (void)backButtonDidClick;
- (void)trackItemClickAtIndex:(unsigned long long)a0;
- (void)trackItemShowAtIndex:(unsigned long long)a0;
- (id)initWithBDPTrackParams:(id)a0;
- (void)clearButtonDidClick;
- (void)trackSearchHistoryViewShow;
- (void)updateSearchHistoryView;
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
- (void)addObserver;
- (void)viewDidLoad;
- (void)removeNotifications;
- (void)themeDidChange;

@end
