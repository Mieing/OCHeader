@class WCFinderRefreshTableFooterView, UITableViewDiffableDataSource, NSString, WCFinderDataLoadTips, UIView, UITableView;

@interface WCFinderProfilePaidCollectionPage : WCFinderStreamProfileViewPage <UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderProfilePaidCollectionVMDelegate, WCFinderDataLoadTipsDelegate, WCFinderListLoadingStateModelObserver>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) WCFinderDataLoadTips *emptyTips;
@property (retain, nonatomic) UIView *topSeperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadView;
- (void)viewDidLoad;
- (void)viewWillApear;
- (void)setupDataSource;
- (void)updateLoadingState;
- (void)layoutEmptyTips;
- (void)onProfilePaidCollectionVMDataChanged;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (void)didClickFooterRefreshRetry:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)onListLoadingStateModified;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)reportPaidCollectionWithIndexPath:(id)a0;
- (void)onDataLoadTipsClickRetry;
- (void).cxx_destruct;

@end
