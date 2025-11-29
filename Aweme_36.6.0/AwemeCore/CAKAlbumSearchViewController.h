@class NSString, UICollectionView, NSHashTable, CAKAlbumSearchViewModel, UIView, DUXSearchBarTextAction;
@protocol CAKAlbumSearchBarProtocol, ACCLoadingViewProtocol;

@interface CAKAlbumSearchViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, CAKAlbumInsightSectionCellDelegate>

@property (retain, nonatomic) CAKAlbumSearchViewModel *viewModel;
@property (retain, nonatomic) UIView<CAKAlbumSearchBarProtocol> *searchBar;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) DUXSearchBarTextAction *searchAction;
@property (nonatomic) BOOL viewAppearTracked;
@property (retain, nonatomic) NSHashTable *trackedSections;
@property (retain, nonatomic) NSHashTable *trackedItems;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)searchBarHeight;

- (void)dismissLoadingView;
- (double)searchBarHeight;
- (void)setupBindings;
- (void)sectionCell:(id)a0 didSelectItem:(id)a1 index:(long long)a2;
- (void)searchWithText:(id)a0 triggerType:(long long)a1;
- (void)tapSearchBarInput;
- (void)trackSearchButtonShowWithShowMethod:(long long)a0;
- (void)updateUIToDismissState:(id)a0;
- (void)updateUIToShowState;
- (void)showInViewController:(id)a0 containerView:(id)a1 sourceSearchBar:(id)a2 animation:(id /* block */)a3 completion:(id /* block */)a4;
- (void)dismissWithDestSearchBar:(id)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (void)didTapPermissionSettingButton;
- (void)sectionCell:(id)a0 willDisplayItem:(id)a1;
- (BOOL)searchBarPlaceholderMatchSuggestionSearchCondition:(id)a0;
- (void)searchSuggestionContentWithSearchFromType:(long long)a0;
- (BOOL)p_shouldSearchTextAsTag;
- (id)p_containerViewColor;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupViews;
- (void)showLoadingView;
- (void)backButtonTapped;

@end
