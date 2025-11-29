@class NSString, UIView, DUXSearchBar, DUXSearchBarTextAction;
@protocol ACCLoadingViewProtocol;

@interface CAKAlbumSearchListViewController : CAKAlbumListViewController <CAKSearchSugesstionTagListViewDelegate>

@property (retain, nonatomic) DUXSearchBar *searchBar;
@property (retain, nonatomic) DUXSearchBarTextAction *searchAction;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) NSString *originalSearchQuery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoadingView;
- (void)searchWithText:(id)a0 triggerType:(long long)a1;
- (void)tapSearchBarInput;
- (void)trackSearchButtonShowWithShowMethod:(long long)a0;
- (void)didSelectedAssetWithCell:(id)a0 isSelected:(BOOL)a1 indexPath:(id)a2;
- (id)createBlankContentView;
- (void)setupTitleView:(id)a0;
- (void)setupTagListView;
- (void)p_trackSearchResultLoadingFinished;
- (id)p_createNewSearchBar;
- (void)searchSuggestionContentWithSearchFromType:(long long)a0;
- (BOOL)p_shouldSearchTextAsTag;
- (void)tagListView:(id)a0 didSelectTagAtIndex:(long long)a1 withText:(id)a2;
- (void)tagListView:(id)a0 willDisplayTagAtIndex:(long long)a1 withText:(id)a2;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupSearchBar;
- (void)showLoadingView;
- (void)backButtonTapped:(id)a0;
- (void)backButtonTapped;

@end
