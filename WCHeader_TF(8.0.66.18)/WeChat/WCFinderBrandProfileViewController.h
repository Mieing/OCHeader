@class WCFinderShareCustomTransition, NSString, WCFinderFeedListView, WCFinderBrandProfileViewModel;

@interface WCFinderBrandProfileViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderBrandProfileViewModelDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewMinimizeDelegate, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell>

@property (retain, nonatomic) WCFinderBrandProfileViewModel *viewModel;
@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (nonatomic) unsigned long long firstOffset;
@property (retain, nonatomic) WCFinderShareCustomTransition *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0 offset:(unsigned long long)a1;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)currentFeedMediaCell;
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
- (BOOL)finderFeedListViewControllerShuldUseAnimationFromVC:(id)a0 toVC:(id)a1 isClosure:(BOOL)a2;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (BOOL)finderFeedListView:(id)a0 processingHeaderClick:(id)a1 avatarType:(unsigned long long)a2 contentVM:(id)a3;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (id)minimizePageBizKey;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)a0 contentVM:(id)a1 finderPlayerReport:(id)a2;
- (void)finderFeedListView:(id)a0 changeCurrentFocusIndexPath:(id)a1 currentFocusTid:(id)a2;
- (BOOL)finderFeedListViewEnableSwipeGesturePushProfilePage:(id)a0;
- (void)finderBrandProfileReloadAllData;
- (void)finderBrandProfileAppendDataFrom:(long long)a0 toIndex:(long long)a1;
- (void)finderBrandProfileNoMoreData;
- (void)finderBrandProfileRequestFailWithErrorCode:(int)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)doShareAnimation;
- (void)updateTransitionAnimator:(id)a0;
- (id)getCustomTransitionAnimator:(BOOL)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
