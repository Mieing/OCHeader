@class WCFinderFeedListView, WCFinderMJSetTabModel, NSString;

@interface WCFinderMJSetFeedListViewController : MMUIViewController <WCFinderMJSetTabModelDelegate, WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderMJSetTabModel *viewModel;
@property (nonatomic) long long viewIndex;
@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 viewIndex:(long long)a1;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)onTabModelDataStateChanged:(id)a0;
- (void)updateFooterState;
- (void)onTabModel:(id)a0 appendDataFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (id)finderFeedListViewCustomTableViewParam:(id)a0 contentVM:(id)a1;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void).cxx_destruct;

@end
