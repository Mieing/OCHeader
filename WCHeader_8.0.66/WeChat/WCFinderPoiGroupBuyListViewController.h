@class WCFinderPoiGroupBuyListViewModel, WCFinderRefreshTableFooterView, NSString, UITableView;

@interface WCFinderPoiGroupBuyListViewController : MMUIViewController <WCFinderPoiGroupBuyListViewModelDelegate, UITableViewDataSource, UITableViewDelegate, WCFinderPoiGroupBuyTableViewCellDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderPoiGroupBuyListViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOpenParams:(id)a0;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)finderPoiGroupBuyReloadAllData;
- (void)finderPoiGroupBuyAppendDataFrom:(long long)a0 toIndex:(long long)a1;
- (void)finderPoiGroupBuyNoMoreData;
- (void)finderPoiGroupBuyRequestFailWithErrorCode:(int)a0;
- (void)onPoiGroupBuyActionButtonDidClick:(id)a0;
- (void)didClickFooterRefreshRetry:(id)a0;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (BOOL)finderFooterStatrLoadingWithoutDragging;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
