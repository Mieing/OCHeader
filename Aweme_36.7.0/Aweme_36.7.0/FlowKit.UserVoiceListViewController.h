@interface FlowKit.UserVoiceListViewController : FlowCommon.FlowBaseViewController <UIScrollViewDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _tabBarControllerProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _loginProvider;
    void /* unknown type, empty encoding */ didTrackShowCells;
    void /* unknown type, empty encoding */ hasTrackVoiceButton;
    void /* unknown type, empty encoding */ mutedVoiceId;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ preSelectTTSModel;
    void /* unknown type, empty encoding */ ugcTTSList;
    void /* unknown type, empty encoding */ ugcLocalTTSList;
    void /* unknown type, empty encoding */ allUgcTTSList;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ selectStyleType;
    void /* unknown type, empty encoding */ flowMenuView;
    void /* unknown type, empty encoding */ updateVoiceAlertVC;
    void /* unknown type, empty encoding */ currentPageName;
    void /* unknown type, empty encoding */ previousPageName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_languageCode;
    void /* unknown type, empty encoding */ isAppearing;
    void /* unknown type, empty encoding */ allowTrackCellShow;
}

- (void)scrollViewDidScroll:(id)a0;
- (void)textFieldDidChanged:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
