@class UIView, NSString, UITapGestureRecognizer, WCFinderAnimationLoadingView, MMUISearchBar, UIImageView, NSArray, UITableView, WCFinderRefreshTableFooterView, MMUILabel, UILabel;
@protocol WCFinderAuthorityListViewModelProtocol, WCFinderShieldOtherLiedSearchFeedViewControllerDelegate;

@interface WCFinderAuthoritySearchListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFollowSearchContactViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, UISearchBarDelegate, UITextFieldDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderAuthorityListViewModelSearchDelegate>

@property (retain, nonatomic) UIView *navigationView;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) MMUILabel *cancelSearchLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (retain, nonatomic) UIImageView *retryImageView;
@property (retain, nonatomic) id<WCFinderAuthorityListViewModelProtocol> viewModel;
@property (retain, nonatomic) NSArray *searchResult;
@property (weak, nonatomic) id<WCFinderShieldOtherLiedSearchFeedViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willDisappear;
- (void)initNaviBar;
- (void)configTableView;
- (void)onTextFieldChanged:(id)a0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)stateRetryGestureAction:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void)onFinderSearchContactResultEmpty;
- (void)onFinderSearchContactResultError;
- (void)onFinderSearchContactResultNoMore;
- (void)onFinderSearchContactNextPageError;
- (void)onFinderSearchContactReload:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)clickQuitAction;
- (void)setSearchTextFieldBecomeFirstResponder;
- (void)doSearchAction:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)doThrottleSearch;
- (int)feedViewControllerScene;
- (void)viewModel:(id)a0 onSearchResultUpdated:(id)a1;
- (void)configStatusTips:(id)a0;
- (void)viewModelSearchResultHasNoMoreData:(id)a0;
- (void)viewModelSearchResultRequestNextPageFailed:(id)a0 errorMsg:(id)a1;
- (void)onDataFetchFinish;
- (void).cxx_destruct;

@end
