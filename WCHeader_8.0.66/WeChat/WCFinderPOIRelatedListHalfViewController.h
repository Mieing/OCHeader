@class WCFinderPOIRelatedListHalfTableViewSearchHeader, NSString, FinderUserPagePoi, WCFinderPOIRelatedListHalfViewModel, WCFinderAnimationLoadingView, UIImageView, UITableView, WCFinderRefreshTableFooterView, UILabel;
@protocol WCFinderPOIRelatedListHalfViewControllerDelegate;

@interface WCFinderPOIRelatedListHalfViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource, WCFinderPOIRelatedListHalfTableViewSearchHeaderDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderPOIRelatedListHalfViewModelDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) FinderUserPagePoi *finderUserPagePoi;
@property (retain, nonatomic) WCFinderPOIRelatedListHalfViewModel *viewModel;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderPOIRelatedListHalfTableViewSearchHeader *headerView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UIImageView *retryImageView;
@property (weak, nonatomic) id<WCFinderPOIRelatedListHalfViewControllerDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initSubView;
- (void)configTableView;
- (void)setupTipsLabel;
- (void)stateRetryGestureAction:(id)a0;
- (void)startLoadingState;
- (void)fetchFirstPageData;
- (void)resetLoadingState;
- (void)resetStateTipsLabelWithRetry:(BOOL)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)onBeginSearch;
- (void)onSearchAction:(id)a0;
- (void)onSearchCancel;
- (void)onSearchStateChanged:(BOOL)a0;
- (void)onFetchResultNoMore;
- (void)onFetchResultError;
- (void)onFetchResultSuccess;
- (void)onSearchActionStart;
- (void).cxx_destruct;

@end
