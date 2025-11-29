@interface FlowKit.AppSettingsSubscribeInfoViewController : FlowCommon.FlowBaseViewController <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ safeAreaBottom;
    void /* unknown type, empty encoding */ margin;
    void /* unknown type, empty encoding */ topInset;
    void /* unknown type, empty encoding */ cellModels;
    void /* unknown type, empty encoding */ _notifyCenter;
    void /* unknown type, empty encoding */ cellHeightForType;
    void /* unknown type, empty encoding */ enterMethod;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ navigationBar;
    void /* unknown type, empty encoding */ tableViewHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_feedbackButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_renewButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_termsLabel;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)termsTapHandle;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
