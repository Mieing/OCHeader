@interface AWEMusicStreamingImpl.LunaListenFeedDialogViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ externalParams;
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ popupModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_header;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomMaskView;
}

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)onClickedMainBtn:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
