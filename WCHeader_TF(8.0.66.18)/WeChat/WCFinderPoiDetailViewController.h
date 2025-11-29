@class WCFinderShareCustomTransition, NSString, WCFinderFeedListView, WCFinderPoiDetailViewModel;

@interface WCFinderPoiDetailViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderPoiDetailViewModelDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewMinimizeDelegate, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell>

@property (retain, nonatomic) WCFinderPoiDetailViewModel *viewModel;
@property (nonatomic) unsigned long long firstOffset;
@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (retain, nonatomic) WCFinderShareCustomTransition *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPoiParams:(id)a0 tabInfo:(id)a1 DataArray:(id)a2 lastBuffer:(id)a3 continueFlag:(BOOL)a4 offset:(unsigned long long)a5 syncKey:(id)a6;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)a0;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (void)finderPoiDetailReloadAllData;
- (void)finderPoiDetailAppendDataFrom:(long long)a0 toIndex:(long long)a1;
- (void)finderPoiDetailNoMoreData;
- (void)finderPoiDetailRequestFailWithErrorCode:(int)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (id)minimizePageBizKey;
- (void)registerYReportSdk;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)a0;
- (void)updateTransitionAnimator:(id)a0;
- (void).cxx_destruct;

@end
