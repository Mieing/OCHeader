@class NSString, WCShareCardInvoiceHeaderView;
@protocol WCCardInvoiceCardContentViewDelegate;

@interface WCCardInvoiceCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDataSource, UITableViewDelegate, WCCardDetailContentLogicDelegate, WCShareCardInvoiceCardHeaderDelegate, ILinkEventExt> {
    BOOL _bUserHasClickUnfoldBtn;
}

@property (weak, nonatomic) id<WCCardInvoiceCardContentViewDelegate> delegte;
@property (nonatomic) BOOL bIsShareCardMode;
@property (retain, nonatomic) WCShareCardInvoiceHeaderView *invoiceCardHeaderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isShareCardMode:(BOOL)a1 withCardDataSource:(id)a2 withOneUsedStoreInfo:(id)a3 withServiceContact:(id)a4 withDelegate:(id)a5;
- (void)initContentView;
- (id)createTableViewHeaderView;
- (id)createTableViewFooterView;
- (id)createItemDetailView;
- (void)reloadContentData;
- (void)onInvoiceCardViewApplyBtnClick;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)makeCellBottomLineWithRowType:(id)a0 withIndexPath:(id)a1 withCell:(id)a2 withCellContentHeight:(double)a3;
- (void)makeDetailTableCell:(id)a0;
- (double)calcDetailTableCellHeight;
- (void)onClickFlatBtn:(id)a0;
- (void)onClickAcceptCardBtn:(id)a0;
- (double)getTableViewCellSumHeight;
- (void)realOpenUrl:(id)a0;
- (void)realOpenTinyAppWithUsername:(id)a0 path:(id)a1;
- (void).cxx_destruct;

@end
