@interface WeChat.WCFinderInterestFeedListVC : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewMinimizeDelegate> {
    void /* unknown type, empty encoding */ vm;
    void /* unknown type, empty encoding */ commentVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_finderFeedListView;
}

- (id)getCurMediaListObject;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)a0;
- (BOOL)finderFeedListViewShowsMoreButton:(id)a0;
- (id)finderFeedList:(id)a0 actionConfigureWithContentVM:(id)a1;
- (void)finderFeedListView:(id)a0 deleteContentVM:(id)a1;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 rowOfCustomViewAtSection:(long long)a1;
- (double)finderFeedListView:(id)a0 heightForCustomRowAtIndexPath:(id)a1;
- (id)minimizePageBizKey;
- (BOOL)finderFeedListViewControllerForbidenDragDownClose;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (BOOL)useTransparentNavibar;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)popSelf;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
