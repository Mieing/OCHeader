@class WCFinderFeedListView, NSString, WCFinderNearbyFlowViewModel;
@protocol WCFinderNearbyFlowViewControllerDelegate;

@interface WCFinderNearbyFlowViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderNearbyFlowViewModelDelegate>

@property (retain, nonatomic) WCFinderNearbyFlowViewModel *viewModel;
@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (nonatomic) long long firstViewOffset;
@property (nonatomic) unsigned long long eventTime;
@property (weak, nonatomic) id<WCFinderNearbyFlowViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 offset:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (void)configureTableView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListView:(id)a0 changeCurrentFocusIndexPath:(id)a1 currentFocusTid:(id)a2;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)a0;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (id)minimizePageBizKey;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)nearByListDataSourceFetchError:(unsigned long long)a0;
- (void)nearByListSourceNoMoreData:(unsigned long long)a0;
- (void)nearByListDataSourceChanged;
- (void)nearByListNextPageAppendData:(id)a0;
- (void)nearByListDataWillRemoved:(id)a0;
- (void)nearByListWillChangeOriginDataIndex;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
