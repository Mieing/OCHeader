@class WCFinderPOIFavListViewModel, WCFinderRefreshTableFooterView, WCFinderAnimationLoadingView, UIButton, UILabel, NSString, UITableView;

@interface WCFinderPOIFavListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderPOIFavListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderPOIFavListTableViewCellDelegate>

@property (retain, nonatomic) WCFinderPOIFavListViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateUI;
- (void)showLoading;
- (void)hideLoading;
- (void)showRetryButton;
- (void)hideRetryButton;
- (void)showEmptyLabel;
- (void)hideEmptyLabel;
- (struct CGPoint { double x0; double x1; })tipsCenterPoint;
- (int)commentScene;
- (void)onRetryBtnClicked;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)reportCellEventWithFavItem:(id)a0 event:(id)a1;
- (void)onPOIFavListViewModelNoMoreData;
- (void)onPOIFavListViewModelFetchDataFail;
- (void)onPOIFavListViewModelDataChanged;
- (void)adjustDataLoadState;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)onPOIFavListTableViewCellClickedWithFavPOIItem:(id)a0;
- (void).cxx_destruct;

@end
