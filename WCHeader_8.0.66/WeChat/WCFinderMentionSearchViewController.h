@class UIView, NSString, UITapGestureRecognizer, WCFinderAnimationLoadingView, MMUISearchBar, UIImageView, UITableView, WCFinderRefreshTableFooterView, MMUILabel, UILabel, WCFinderMentionSearchContactViewModel;
@protocol WCFinderMentionSearchViewControllerDelegate;

@interface WCFinderMentionSearchViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate, UISearchBarDelegate, UITextFieldDelegate, WCFinderMentionSearchContactViewModelDelegate>

@property (retain, nonatomic) UIView *navigationView;
@property (retain, nonatomic) MMUISearchBar *searchBar;
@property (retain, nonatomic) MMUILabel *cancelSearchLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (retain, nonatomic) UIImageView *retryImageView;
@property (retain, nonatomic) WCFinderMentionSearchContactViewModel *viewModel;
@property (weak, nonatomic) id<WCFinderMentionSearchViewControllerDelegate> delegate;
@property (nonatomic) BOOL hideHistoryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
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
- (void)onFinderSearchContactResultChanged;
- (void)onFinderSearchContactResultError;
- (void)onFinderSearchContactResultNoMore;
- (void)onFinderSearchContactNextPageError;
- (void)onFinderSearchContactReload:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)getTableViewHeaderWithTitle:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)clickQuitAction;
- (void)setSearchTextFieldBecomeFirstResponder;
- (void)doSearchAction:(id)a0;
- (void)onClickMoreView:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void).cxx_destruct;

@end
