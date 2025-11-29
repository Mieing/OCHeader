@interface FlowKit.AppSettingViewController : FlowCommon.FlowBaseViewController <UITableViewDelegate, MFMailComposeViewControllerDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ _botAdapter;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _debugService;
    void /* unknown type, empty encoding */ _shareProvider;
    void /* unknown type, empty encoding */ _doraServiceProvider;
    void /* unknown type, empty encoding */ _azerothProvider;
    void /* unknown type, empty encoding */ _networkProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _notifyCenter;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ safeAreaBottom;
    void /* unknown type, empty encoding */ settingModelList;
    void /* unknown type, empty encoding */ advanceSettingEnable;
    void /* unknown type, empty encoding */ inhouseSuffix;
    void /* unknown type, empty encoding */ viewShouldTrackEnter;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ bottomView;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ footerLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerInventoryView;
    void /* unknown type, empty encoding */ versionFooterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
}

- (id)flow_trackParametersWith:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)footButtonAction:(id)a0;
- (void)advanceButtonClicked;
- (void)showDeviceId;
- (void)handlePersonalInfoCollectListClicked;
- (void)handleThirdPartyShareListClicked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end
