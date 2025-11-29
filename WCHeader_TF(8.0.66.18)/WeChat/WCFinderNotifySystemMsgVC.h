@class WCFinderRefreshTableFooterView, UITableViewDiffableDataSource, WCFinderNotifySystemMsgVM, WCFinderDataLoadTips, NSString, UITableView;

@interface WCFinderNotifySystemMsgVC : MMUIViewController <UITableViewDelegate, WCGeneralMonitorDelegate, WCFinderDataLoadTipsDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderNotifySystemMsgVMDelegate, WCFinderListLoadingStateModelObserver, WCFinderFeedBaseViewControllerProtocol>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderDataLoadTips *dataLoadTips;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) WCFinderNotifySystemMsgVM *vm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderUsername:(id)a0 identityScene:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)setupTableView;
- (void)setupDataSource;
- (id)cellWithIndexPath:(id)a0 itemID:(id)a1;
- (void)setupLoadingState;
- (void)layoutLoadTips;
- (void)updateLoadingState;
- (void)reloadTableData;
- (void)reportPrivateMsgJumperWithViewModel:(id)a0 eventType:(long long)a1;
- (void)showNotifyLinkActionWithViewModel:(id)a0;
- (void)showDataItemDetailVCActionWithViewModel:(id)a0 shouldShowLikeList:(BOOL)a1;
- (void)showDataItemWasDeletedTips;
- (void)showDataItemWasPrivateSetTips;
- (void)showMentionDetailViewController:(id)a0 navigationTitle:(id)a1 viewModel:(id)a2 shouldShowLikeList:(BOOL)a3;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onDataLoadTipsClickRetry;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void)onNotifySystemMsgDataChanged;
- (void)onListLoadingStateModified;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
