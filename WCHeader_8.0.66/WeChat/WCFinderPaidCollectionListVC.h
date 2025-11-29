@class WCFinderRefreshTableFooterView, UITableViewDiffableDataSource, WCFinderPaidCollectionListVM, WCFinderDataLoadTips, NSString, UITableView;

@interface WCFinderPaidCollectionListVC : MMUIViewController <WCFinderPaidCollectionListVMDelegate, UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderDataLoadTipsDelegate, WCFinderListLoadingStateModelObserver>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderDataLoadTips *dataLoadTips;
@property (retain, nonatomic) WCFinderPaidCollectionListVM *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupLoadingState;
- (void)setupDataSource;
- (void)viewWillLayoutSubviews;
- (void)layoutLoadTips;
- (void)showDataLoadTips;
- (void)removeDataLoadTips;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)reloadTableData;
- (void)onPaidCollectionListDataChanged;
- (void)onListLoadingStateModified;
- (void)updateLoadingState;
- (void)onDataLoadTipsClickRetry;
- (void).cxx_destruct;

@end
