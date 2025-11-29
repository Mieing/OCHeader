@class WCFinderShareCustomTransition, NSString, WCFinderWXInteractiveDetailViewModel, WCFinderFeedListView;

@interface WCFinderWXInteractiveDetailViewController : MMUIViewController <WCFinderShareAbstractCell, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderWXInteractiveDetailViewModelDelegate, WCFinderWXInteractiveDetailViewModelDataSource>

@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (retain, nonatomic) WCFinderWXInteractiveDetailViewModel *viewModel;
@property (retain, nonatomic) WCFinderShareCustomTransition *animator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genDeleteTransferCtxByCommentScene:(int)a0;

- (id)initWithSelectType:(long long)a0 dataProvider:(id)a1 contentTid:(id)a2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)configureTableView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)useTransparentNavibar;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewDidTransitionToNewSize;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)a0;
- (id)finderFeedListViewCustomTableViewParam:(id)a0 contentVM:(id)a1;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewShowsMoreButton:(id)a0;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (id)minimizePageBizKey;
- (void)finderFeedList:(id)a0 scrollActionSheet:(id)a1 delContentVM:(id)a2;
- (void)removeContentVM:(id)a0;
- (void)onWXInteractiveListEmpty;
- (void)onWXInteractiveListModifyWithDeletes:(id)a0 inserts:(id)a1;
- (void)onWXInteractiveListLoadFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)onWXInteractiveListResultNoMore;
- (void)onWXInteractiveListResultChanged;
- (void)onWXInteractiveListResultReloadData;
- (void)onWXInteractiveListNextPageError;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)mmNavigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)a0;
- (void)updateTransitionAnimator:(id)a0;
- (id)getWXInteractiveListFocusTid;
- (void).cxx_destruct;

@end
