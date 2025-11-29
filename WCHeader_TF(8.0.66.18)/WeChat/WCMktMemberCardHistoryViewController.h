@class NSString, WCMktMemberCardHistoryLogicController, UIView, MMTableView;

@interface WCMktMemberCardHistoryViewController : WCMktCardBaseViewController <UITableViewDelegate, UITableViewDataSource, WCMktMemberCardHistoryLogicControllerDelegate, WCActionSheetDelegate>

@property (retain, nonatomic) WCMktMemberCardHistoryLogicController *logicController;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *emptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)setupEmptyView;
- (void)handleHeaderRefresh;
- (void)updateFooterView;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)updateNavigationBar;
- (void)rightBarButtonClick;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)genTableFooterView;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetMemberCardHistoryHomepageFail;
- (void)onDeleteMemberCardHistoryListElemDataSuccWithIndexPath:(id)a0;
- (void).cxx_destruct;

@end
