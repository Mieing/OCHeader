@class WCFinderFeedListView, WCFinderHotWordsFeedViewModel, NSString;

@interface WCFinderHotWordsFeedListViewController : MMUIViewController <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderHotWordsFeedViewModelDelegate>

@property (retain, nonatomic) WCFinderHotWordsFeedViewModel *viewModel;
@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (nonatomic) long long scrollToIndexWhenViewDidAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupListView;
- (BOOL)useTransparentNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)linkTopicVM:(id)a0 fetchDataFinishWithAppendDataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)linkTopicVMStateChanged:(id)a0;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void).cxx_destruct;

@end
