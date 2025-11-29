@interface WeChat.BrandProfileAudioTabViewController : UITableViewController <BrandProfileTabVCProtocol, MMRefreshTableFooterDelegate> {
    void /* unknown type, empty encoding */ finderUsername;
    void /* unknown type, empty encoding */ bizUsername;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerTerminatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_loadingView;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)initWithBizUsername:(id)a0 finderUsername:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setExternalGestureRecognizer:(id)a0;
- (id)tabTitle;
- (unsigned long long)tabType;
- (id)viewController;
- (void)updateSectionWidthInSectionDataList;
- (id)initWithStyle:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
