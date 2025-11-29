@class WCFinderShareCustomTransition, NSString, WCFinderMemberShipPlaybackTabDetailViewModel, WCFinderFeedContentVM, WCFinderFeedListView;

@interface WCFinderMemberShipLivePlaybackTabDetailViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedListViewReportDelegate, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderMemberShipPlaybackTabDetailViewModelDelegate, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell>

@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (retain, nonatomic) WCFinderMemberShipPlaybackTabDetailViewModel *viewModel;
@property (retain, nonatomic) WCFinderFeedContentVM *preVCData;
@property (retain, nonatomic) WCFinderShareCustomTransition *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLivePlaybackTabViewModel:(id)a0 preVCData:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidTransitionToNewSize;
- (void)deleteContentVM:(id)a0;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)a0;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewShowsMoreButton:(id)a0;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (id)minimizePageBizKey;
- (BOOL)canShowAutoScrollItem;
- (id)finderFeedList:(id)a0 actionConfigureWithContentVM:(id)a1;
- (BOOL)finderFeedListView:(id)a0 showDislikeWithContentVM:(id)a1;
- (void)finderFeedListView:(id)a0 deleteContentVM:(id)a1;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)a0;
- (void)updateTransitionAnimator:(id)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)finderMemberShipZonePlaybackTabDetailViewNoMoreData;
- (void)finderMemberShipZonePlaybackTabDetailViewFetchListSuc;
- (void)finderMemberShipZonePlaybackTabDetailViewFetchListFail;
- (void)finderMemberShipZonePlaybackTabDetailViewDeleteDataItemVM;
- (void).cxx_destruct;

@end
