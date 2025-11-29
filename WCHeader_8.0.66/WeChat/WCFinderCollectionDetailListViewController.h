@class MMUIButton, NSArray, WCFinderRefreshTableFooterView, WCFinderDetailTimeStringConfig, NSString, WCFinderCollectionDetailListViewModel, UITableView;

@interface WCFinderCollectionDetailListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderCollectionDetailListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate>

@property (nonatomic) int commentScene;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *collectionList;
@property (retain, nonatomic) WCFinderCollectionDetailListViewModel *viewModel;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) MMUIButton *emptyTipsRetryButton;
@property (retain, nonatomic) WCFinderDetailTimeStringConfig *timeStringConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (BOOL)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (BOOL)useCustomNavibar;
- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)configureTableView;
- (void)_setupPageReport;
- (void)showEmptyTips:(id)a0 canRetry:(BOOL)a1;
- (void)hideEmptyTips;
- (void)onBack;
- (void)retryButtonClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)makeTimeStringConfig;
- (void)_setupReportWithCell:(id)a0 collection:(id)a1 indexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)finderCollectionDetailListDataChangedWithContinueFlag:(BOOL)a0;
- (void)finderCollectionDetailListRequestFailed;
- (void)finderCollectionDetailListStartLoading;
- (void)finderCollectionDetailListEndLoading;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void).cxx_destruct;

@end
