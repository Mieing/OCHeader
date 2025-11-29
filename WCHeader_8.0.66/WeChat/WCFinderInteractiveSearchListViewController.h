@class WCFinderFeedListView, NSString, WCFinderInteractiveSearchViewModel;

@interface WCFinderInteractiveSearchListViewController : MMUIViewController <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewMinimizeDelegate, WCFinderStreamLoadingStateDelegate>

@property (retain, nonatomic) WCFinderInteractiveSearchViewModel *viewModel;
@property (retain, nonatomic) WCFinderFeedListView *listView;
@property (nonatomic) long long openInitialIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 index:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)onFeedArray:(id)a0 change:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (void)onSearchVMSecitonChanged:(id)a0;
- (void)onSearchVMSectionLoadingStateChanged:(id)a0;
- (void)onSearchVMSectionEmpty;
- (void)onLoadingStateChanged:(id)a0;
- (void)updateLoadState;
- (void)finderFeedList:(id)a0 scrollActionSheet:(id)a1 delContentVM:(id)a2;
- (void)removeContentVM:(id)a0;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (void).cxx_destruct;

@end
