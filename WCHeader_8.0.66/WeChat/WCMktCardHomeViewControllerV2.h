@class WCMktCardHomeLogicControllerV2, NSString, MMTableView;

@interface WCMktCardHomeViewControllerV2 : WCMktCardBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCMktCardHomeLogicControllerV2Delegate>

@property (retain, nonatomic) WCMktCardHomeLogicControllerV2 *logicController;
@property (retain, nonatomic) MMTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)updateRightBarButton;
- (void)updateFooterView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)genTableFooterView;
- (void)setupEmptyView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)handleHeaderRefresh;
- (void)rightBarButtonClick;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableViewNeedRefresh;
- (void)onTableViewNeedDeleteWithIndexPath:(id)a0;
- (void)onTableViewNeedReloadCellWithIndexPath:(id)a0;
- (void)onTableViewNeedShowLoading;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
