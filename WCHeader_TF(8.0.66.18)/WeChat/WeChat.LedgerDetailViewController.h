@interface WeChat.LedgerDetailViewController : WCPayBaseViewController <UITableViewDataSource, UITableViewDelegate, ILinkEventExt> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ records;
    void /* unknown type, empty encoding */ username;
    void /* unknown type, empty encoding */ isIncome;
    void /* unknown type, empty encoding */ groupMode;
    void /* unknown type, empty encoding */ titlePrefix;
    void /* unknown type, empty encoding */ isClose;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transactionsEntry;
    void /* unknown type, empty encoding */ footerRichTextView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerTransactionsEntry;
}

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewWillLayoutSubviews;
- (void)handleClose;
- (void)viewDidBePoped:(BOOL)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
