@class MMUILabel, WCMktCouponHomeLogicController, UIButton, NSString, UIView, MMTableView;

@interface WCMktCouponHomeViewController : WCMktCardBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCMktCouponHomeLogicControllerDelegate, WCMktMerchantItemCellDelegate, WCNewCardDetailViewControllerDelegate>

@property (retain, nonatomic) WCMktCouponHomeLogicController *logicController;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUILabel *headerContentLabel;
@property (retain, nonatomic) UIButton *headerContentCoverBtn;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) NSString *currentSelectCardDetailMerchantID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)setupData;
- (void)setupView;
- (void)setupTableView;
- (void)updateFooterView;
- (void)forceUseSortByAcceptTime;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)genTableFooterView;
- (void)scrollToRowWithIndexPath:(id)a0;
- (void)onMktmerchantItemCellClickExpandBtnWithMerchantID:(id)a0;
- (void)onMktmerchantItemCellClickMerchantTagBtnToOpenTinyApp:(id)a0 merchantID:(id)a1;
- (void)onMktmerchantItemCellClickCardItemViewTagBtnToOpenTinyApp:(id)a0 merchantID:(id)a1;
- (void)onMktmerchantItemCellClickCardItemViewToOpenCardDetail:(id)a0 mchID:(id)a1 cardIndex:(unsigned int)a2;
- (void)onMktmerchantItemCellClickMerchantAreaWithMerchantID:(id)a0;
- (void)handleHeaderRefresh;
- (void)sortRuleCoverBtnClick;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)updateRightBarButton;
- (void)rightBarButtonClick;
- (void)setupEmptyView;
- (id)getViewController;
- (void)vcStartLoading;
- (void)vcStopLoading;
- (void)onTableviewNeedReloadWhenLoadCache;
- (void)onTableviewNeedReloadWhenGetResp;
- (void)onTableviewGetHomePageDataFail;
- (void)onTableViewNeedShowLoading;
- (void)onTableViewNeedUpdateWithIndexPath:(id)a0;
- (void)onTableViewNeedUpdateSortContent;
- (void)onDeleteCard:(id)a0;
- (void)handleMerchantInfoUpdateWithCardData:(id)a0;
- (void)onGiftCard:(id)a0 lastIndex:(id)a1;
- (void)onShareCard:(id)a0 lastIndex:(id)a1;
- (void)onUseCard:(id)a0 lastIndex:(id)a1 delayTime:(double)a2;
- (void)onUseCard:(id)a0;
- (void).cxx_destruct;

@end
