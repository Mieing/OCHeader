@interface FlowKit.AppSettingAccountViewController : FlowCommon.FlowBaseViewController <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _networkProvider;
    void /* unknown type, empty encoding */ _loginProvider;
    void /* unknown type, empty encoding */ _profileProvider;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ safeAreaBottom;
    void /* unknown type, empty encoding */ settingModelList;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ contentBack;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_speechOptOutsectionFooterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_personalizedRecommendFooterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pictureLocationFooterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_saveChatHistoryFooterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_allowTrainingFooterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_encryptionFooterView;
}

- (id)flow_trackParametersWith:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
