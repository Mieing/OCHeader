@class WCFinderRefreshTableFooterView, UITableViewDiffableDataSource, WCFinderAggregatedMentionHalfVM, WCFinderDataLoadTips, NSString, UITableView;

@interface WCFinderAggregatedMentionHalfVC : WCFinderCustomPanelSheet <UITableViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderAggregatedMentionHalfVMDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderDataLoadTipsDelegate, WCFinderListLoadingStateModelObserver>

@property (retain, nonatomic) WCFinderAggregatedMentionHalfVM *vm;
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderDataLoadTips *dataLoadTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMention:(id)a0 finderContact:(id)a1;
- (void)baseInit;
- (id)loadContentView;
- (id)mainScrollView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupDataSource;
- (void)reloadTableData;
- (void)clickToShowUserProfileWithMention:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setupLoadingState;
- (void)updateLoadingState;
- (void)showDataLoadTips;
- (void)removeDataLoadTips;
- (void)layoutLoadTips;
- (int)feedViewControllerScene;
- (void)onListLoadingStateModified;
- (void)onAggregatedMentionListDataChanged;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)onDataLoadTipsClickRetry;
- (void).cxx_destruct;

@end
