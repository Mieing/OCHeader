@interface WeChat.LedgerUserTransactionsViewController : WCPayBaseViewController <UITableViewDataSource, UITableViewDelegate, ILinkEventExt> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ username;
    void /* unknown type, empty encoding */ talkerName;
    void /* unknown type, empty encoding */ isClose;
    void /* unknown type, empty encoding */ kLastMonthRecordsEntryLink;
    void /* unknown type, empty encoding */ $__lazy_storage_$_lastMonthRecordsEntry;
    void /* unknown type, empty encoding */ categoryelectModal;
    void /* unknown type, empty encoding */ datePicker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
}

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)handleClose;
- (void)viewDidBePoped:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
