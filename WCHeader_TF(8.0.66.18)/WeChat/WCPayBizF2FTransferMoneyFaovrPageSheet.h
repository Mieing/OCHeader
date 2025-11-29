@class NSMutableArray, NSString, MMPageSheetAdapter, WCPayBizF2FTransferMoneyFaovrPageSheetConfig, MMTableView;
@protocol WCPayBizF2FTransferMoneyFaovrPageSheetDelegate;

@interface WCPayBizF2FTransferMoneyFaovrPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate, UITableViewDataSource, UITableViewDelegate, WCPayFavorSelectCellDelegate>

@property (weak, nonatomic) id<WCPayBizF2FTransferMoneyFaovrPageSheetDelegate> delegate;
@property (retain, nonatomic) WCPayBizF2FTransferMoneyFaovrPageSheetConfig *config;
@property (nonatomic) BOOL bIsShowing;
@property (retain, nonatomic) MMPageSheetAdapter *pageAdapter;
@property (retain, nonatomic) MMTableView *m_tableView;
@property (retain, nonatomic) NSMutableArray *m_selectedArray;
@property (nonatomic) int tableViewHeight;
@property (nonatomic) int pageSheetMarginTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0 delegate:(id)a1;
- (void)setupDetailView;
- (void)updateConfig:(id)a0;
- (void)initPageSheet;
- (void)showPageSheet;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)updateTableView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)getTableViewHeight;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onWCPayFavorSelectCellSelectIndex:(long long)a0;
- (void)reportWithScene:(unsigned long long)a0;
- (void)dismissPageSheet;
- (void)dismissPage;
- (BOOL)isPageSheetShowing;
- (void)pageSheetWillAppear:(id)a0;
- (void)pageSheetDidAppear:(id)a0;
- (void)pageSheetWillDisappear:(id)a0;
- (void)pageSheetDidDisappear:(id)a0;
- (void)pageSheetWillClose:(id)a0;
- (void)pageSheetDidClose:(id)a0;
- (void).cxx_destruct;

@end
