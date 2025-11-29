@interface WeChat.WCPayLedgerViewController : WCPayBaseViewController <UITableViewDataSource, UITableViewDelegate, MMRefreshTableFooterDelegate, ILinkEventExt> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dateFormatter;
    void /* unknown type, empty encoding */ logicContext;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ categoryelectModal;
    void /* unknown type, empty encoding */ datePicker;
    void /* unknown type, empty encoding */ isLoadingRecords;
    void /* unknown type, empty encoding */ isClose;
    void /* unknown type, empty encoding */ kChangeGroupModeLink;
    void /* unknown type, empty encoding */ $__lazy_storage_$_categoryFilter;
    void /* unknown type, empty encoding */ kLastMonthRecordsEntryLink;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lastMonthRecordsEntry;
    void /* unknown type, empty encoding */ $__lazy_storage_$_modeFilter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expenseIncomeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expenseLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_incomeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadMoreFooter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_separator;
}

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)showNavigationBarSepLine;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)navigationBarBackgroundColor;
- (BOOL)useTransparentNavibar;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handleClose;
- (void)viewDidBePoped:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
