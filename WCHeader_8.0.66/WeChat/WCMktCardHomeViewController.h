@class MMTableView, NSString, WCMktCardHomeLogicController;

@interface WCMktCardHomeViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCMktCardHomeLogicControllerDelegate, WCMktMerchantItemCellDelegate, WCNewCardDetailViewControllerDelegate, WCActionSheetDelegate, WCMktStoreSectionCellDelegate>

@property (retain, nonatomic) WCMktCardHomeLogicController *logicController;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSString *currentSelectCardDetailMerchantID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)setupEmptyView:(id)a0;
- (void)handleHeaderRefresh;
- (void)faqButtonClick;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)genTableFooterView;
- (void)updateFooterView;
- (void)updateRightBarButton;
- (void)rightBarButtonClick;
- (void)scrollToRowWithIndexPath:(id)a0;
- (void)onMktmerchantItemCellClickExpandBtnWithMerchantID:(id)a0;
- (void)onMktmerchantItemCellClickMerchantTagBtnToOpenTinyApp:(id)a0 merchantID:(id)a1;
- (void)onMktmerchantItemCellClickCardItemViewTagBtnToOpenTinyApp:(id)a0 merchantID:(id)a1;
- (void)onMktmerchantItemCellClickCardItemViewToOpenCardDetail:(id)a0 mchID:(id)a1 cardIndex:(unsigned int)a2;
- (void)onMktmerchantItemCellClickMerchantAreaWithMerchantID:(id)a0;
- (void)storeCellClickSortrule;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetHomePageDataFail;
- (void)onUpdateStoreElemDataSuccWithIndexPath:(id)a0;
- (void)onUpdateTopCellWithIndexPath:(id)a0;
- (void)onTableViewNeedRefresh;
- (void)onDeleteCard:(id)a0;
- (void)handleMerchantInfoUpdateWithCardData:(id)a0;
- (void)onGiftCard:(id)a0 lastIndex:(id)a1;
- (void)onShareCard:(id)a0 lastIndex:(id)a1;
- (void)onUseCard:(id)a0 lastIndex:(id)a1 delayTime:(double)a2;
- (void)onUseCard:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
