@class UIView, NSString, NSArray, AWEAnchorMediumSearchEmptyView, AWEAnchorMediumDataController, UITableView, AWEAnchorMediumSearchHistoryViewController, AWEAnchorMediumSearchBarView;

@interface AWEAnchorMediumListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWERouterViewControllerProtocol, UISearchBarDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEAnchorMediumSearchEmptyView *emptyView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) AWEAnchorMediumDataController *dataController;
@property (retain, nonatomic) AWEAnchorMediumSearchBarView *anchorSearchBar;
@property (retain, nonatomic) UIView *fakeNavigationBar;
@property (retain, nonatomic) UIView *tableHeaderView;
@property (nonatomic) BOOL isSearchModal;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) AWEAnchorMediumSearchHistoryViewController *searchHistoryViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)showSearchCancelButton;
- (void)hideSearchCancelButton;
- (void)searchCancelButtonTapped:(id)a0;
- (void)animationWithSearchBarBeginEditing:(BOOL)a0;
- (void)loadMoreData;
- (void)loadMoreSearchData;
- (void)refreshRecommendDataSource;
- (void)trackerPageShow;
- (void)loadMoreRecommendData;
- (id)tableViewdataSource;
- (void)refreshSearchDataSourceWithKeyword:(id)a0;
- (void)backTapped:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateSubviews;

@end
