@interface FlowKit.AppAboutSettingViewController : FlowCommon.FlowBaseViewController <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ _networkProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ safeAreaBottom;
    void /* unknown type, empty encoding */ margin;
    void /* unknown type, empty encoding */ aboutModelList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ contentBack;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ hotlineLabel;
}

- (id)flow_trackParametersWith:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
