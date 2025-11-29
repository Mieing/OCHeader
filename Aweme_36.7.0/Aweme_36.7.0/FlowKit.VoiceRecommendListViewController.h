@interface FlowKit.VoiceRecommendListViewController : FlowCommon.FlowBaseViewController <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _trackerProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ didTrackShowCells;
    void /* unknown type, empty encoding */ hasTrackVoiceButton;
    void /* unknown type, empty encoding */ mutedVoiceId;
    void /* unknown type, empty encoding */ safeAreaBottom;
    void /* unknown type, empty encoding */ childCanScroll;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ currentPlayingId;
    void /* unknown type, empty encoding */ viewDidLoadTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadMoreFooter;
    void /* unknown type, empty encoding */ isAppearing;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)loadMoreWithFooterOperate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
