@class WCFinderShareCustomTransition, NSString, WCFinderFeedListView, WCFinderNearbyRelatedViewModel;
@protocol WCFinderNearbyRelatedViewControllerDelegate;

@interface WCFinderNearbyRelatedViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderNearbyRelatedViewModelDelegate, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell, WCFinderShareCustomTransitionProtocol>

@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (retain, nonatomic) WCFinderNearbyRelatedViewModel *viewModel;
@property (retain, nonatomic) WCFinderShareCustomTransition *animator;
@property (weak, nonatomic) id<WCFinderNearbyRelatedViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 isFromSNSPoi:(BOOL)a1 location:(id)a2;
- (void)viewDidLoad;
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
- (BOOL)finderFeedListView:(id)a0 customViewAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 customCellForRowAtIndexPath:(id)a1;
- (double)finderFeedListView:(id)a0 heightForCustomRowAtIndexPath:(id)a1;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (id)minimizePageBizKey;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)a0;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (long long)finderFeedListView:(id)a0 rowOfCustomViewAtSection:(long long)a1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)a0;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (id)specialParamsForFeedId:(id)a0;
- (void)onNearbyRelatedNoMore;
- (void)onNearbyRelatedAppendMore:(id)a0;
- (void)onNearbyRelateFetchFailWithErrorCode:(int)a0;
- (void)onNearbyRelateReloadAllData;
- (void)onNearbyRelateExit;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)getCustomTransitionAnimator:(BOOL)a0;
- (void)updateTransitionAnimator:(id)a0;
- (void)doShareAnimation;
- (void).cxx_destruct;

@end
