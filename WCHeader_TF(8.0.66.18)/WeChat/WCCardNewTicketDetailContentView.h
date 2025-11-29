@class NSString;
@protocol WCCardNewTicketContentDelegate;

@interface WCCardNewTicketDetailContentView : WCCardBaseCardDetailContentView <WCCardDetailContentLogicDelegate, UITableViewDelegate, UITableViewDataSource, WCShareCardNewTicketHeaderDelegate, WCCardTicketCodeCellViewDelegate, ILinkEventExt>

@property (weak, nonatomic) id<WCCardNewTicketContentDelegate> delegte;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withCardDataSource:(id)a1 withNearbyStore:(id)a2 withServiceContact:(id)a3 withDelegate:(id)a4;
- (void)reloadContentData;
- (void)initContentView;
- (id)createTableViewHeaderView;
- (id)createTableViewFooterView;
- (double)getTableViewCellSumHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)configureCell:(id)a0 forRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)makeCodeCell:(id)a0;
- (BOOL)ticketHeaderHaveNearByStoreInfo;
- (id)ticketHeaderGetStoreInfo;
- (BOOL)ticketHeaderHaveUsedStoreInfo;
- (void)onTicketHeaderUsredStoreBtnClick;
- (void)onTicketHeaderAcceptBtnClick;
- (void)jumpButtonDidClikced;
- (void)onTicketCodeCellViewSecondaryFieldClick:(id)a0;
- (void)onTicketCodeCellViewCodeClick;
- (void)realOpenUrl:(id)a0;
- (void)realOpenTinyAppWithUsername:(id)a0 path:(id)a1;
- (void).cxx_destruct;

@end
