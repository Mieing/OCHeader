@class NSString, WCMktTicketListLogicController, UIView, MMTableView;

@interface WCMktTicketListViewControler : WCMktCardBaseViewController <UITableViewDelegate, UITableViewDataSource, WCMktTicketListLogicControllerDelegate, WCMktTicketItemCellDelegate, WCNewCardDetailViewControllerDelegate, WCActionSheetDelegate>

@property (retain, nonatomic) WCMktTicketListLogicController *logicController;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *emptyTipsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)setupEmptyView;
- (void)invalidTicketBtnClick;
- (void)handleHeaderRefresh;
- (void)rightBarButtonClick;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)genTableFooterView;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)makeMedicateBannerCellConetnt:(id)a0;
- (void)onTicketItemCellTagBtnClick:(id)a0;
- (void)updateFooterView;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)reportTicketDataListWithIndexPath:(id)a0 reportScene:(unsigned int)a1;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetTicketHomepageFail;
- (void)onDeleteTicketListElemDataSuccWithIndexPath:(id)a0;
- (void)handleCardDataNeedDeleteWithCardData:(id)a0;
- (void)onDeleteCard:(id)a0;
- (void)onGiftCard:(id)a0 lastIndex:(id)a1;
- (void)onShareCard:(id)a0 lastIndex:(id)a1;
- (void)onUseCard:(id)a0 lastIndex:(id)a1 delayTime:(double)a2;
- (void)onUseCard:(id)a0;
- (void).cxx_destruct;

@end
