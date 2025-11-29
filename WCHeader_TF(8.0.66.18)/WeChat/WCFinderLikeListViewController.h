@class WCFinderShareCustomTransition, NSString, WCFinderFeedListView, WCFinderLikeListViewModel;

@interface WCFinderLikeListViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedListViewMinimizeDelegate, WCFinderLikeListViewModelDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell>

@property (retain, nonatomic) WCFinderLikeListViewModel *viewModel;
@property (nonatomic) unsigned long long firstAppearOffset;
@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (retain, nonatomic) WCFinderShareCustomTransition *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
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
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidTransitionToNewSize;
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
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)a0;
- (id)finderFeedListViewCustomTableViewParam:(id)a0 contentVM:(id)a1;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewShowsMoreButton:(id)a0;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (void)finderFeedListView:(id)a0 willBeginDraging:(id)a1;
- (void)finderFeedListViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)finderFeedListViewDidEndDecelerating:(id)a0;
- (id)minimizePageBizKey;
- (void)finderLikeListLoadFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)finderLikeListNoMoreData;
- (void)finderLikeListDisinclineContentVM:(id)a0 index:(long long)a1;
- (void)finderLikeListDeleteDataItemVM:(id)a0 index:(long long)a1;
- (void)finderLikeListEmpty;
- (void)finderLikeListFetchFailWithErrorCode:(int)a0;
- (void)finderLikeListStartTopLoadingData;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)registerYReportSdk;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)a0;
- (void)updateTransitionAnimator:(id)a0;
- (void).cxx_destruct;

@end
