@class WCFinderAnimationLoadingView, WCFinderStreamLoadingState, NSString, WCFinderFeedArray, WCFinderFeedListView;
@protocol WCFinderFeedListViewControllerDelegate;

@interface WCFinderFeedListViewController : MMUIViewController <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderStreamLoadingStateDelegate, WCFinderFeedListTransitionVerticalGestureBehavior>

@property (nonatomic) int scene;
@property (retain, nonatomic) WCFinderAnimationLoadingView *emptyLoadingView;
@property (nonatomic) BOOL hadLightShock;
@property (weak, nonatomic) id<WCFinderFeedListViewControllerDelegate> delegate;
@property (readonly, nonatomic) WCFinderFeedListView *feedListView;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (retain, nonatomic) NSString *enterTid;
@property (nonatomic) long long enterOffset;
@property (nonatomic) BOOL allowMinimize;
@property (copy, nonatomic) id /* block */ feedListBackBlock;
@property (copy, nonatomic) id /* block */ fetchMoreData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(int)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)getBarButtonWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 style:(unsigned long long)a3;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillPopOrDismiss:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_afterViewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (void)finderFeedListView:(id)a0 scrollViewDidScroll:(id)a1;
- (BOOL)currentSceneIsLandSpace;
- (BOOL)beyondBufferArea:(id)a0 bufferOffset:(double)a1;
- (void)_requestNextPage;
- (void)onFeedArray:(id)a0 batchUpdate:(id)a1;
- (id)finderFeedListView:(id)a0 contentVMAtSection:(long long)a1;
- (id)finderFeedListView:(id)a0 contentVMOfTid:(id)a1;
- (long long)finderFeedListView:(id)a0 sectionOfTid:(id)a1;
- (void)finderFeedListView:(id)a0 dislikeContentVM:(id)a1;
- (void)finderFeedListView:(id)a0 changeCurrentFocusIndexPath:(id)a1 currentFocusTid:(id)a2;
- (long long)numberOfContentVMsInTableView;
- (id)getViewController;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)onLoadingStateChanged:(id)a0;
- (void)_updateLoadingState;
- (void)_updateFooterView;
- (void)showEmptyLoading:(BOOL)a0;
- (void)onScrollViewContentOffsetChange;
- (void)layoutEmptyLoading;
- (void).cxx_destruct;

@end
