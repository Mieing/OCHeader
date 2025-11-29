@interface FlowAweme.FlowSettingViewControler : FlowCommon.FlowBaseViewController <FlowIMX.FlowIMConversationServiceDelegate, UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _diversionProvider;
    void /* unknown type, empty encoding */ safeAreaBottom;
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ botInfoData;
    void /* unknown type, empty encoding */ eventTrackerParams;
    void /* unknown type, empty encoding */ handleDeleteBotFinished;
    void /* unknown type, empty encoding */ clearMessageFinished;
    void /* unknown type, empty encoding */ clearChatContextClick;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ flowMenuView;
    void /* unknown type, empty encoding */ headerViewBottomButton;
    void /* unknown type, empty encoding */ _networkProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_botNameLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_diversionBackgroundView;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerButton;
    void /* unknown type, empty encoding */ contentBack;
    void /* unknown type, empty encoding */ versionFooterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_settingMenuButton;
}

- (void)conversationInfosChanged:(id)a0;
- (id)flow_trackParametersWith:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)footButtonAction:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)applicationDidBecomeActive;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
