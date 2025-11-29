@class AWEHotSearchCommentAISummaryFeedDataController, AWEHotSearchCommentFeedPageContext, AWECommonFeedContainerViewController, DUXLoadingParticleView, UIView, NSMutableArray;

@interface AWEHotSearchCommentAISummaryFeedViewController : UIViewController

@property (retain, nonatomic) AWECommonFeedContainerViewController *commonContainerVC;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) UIView *networkErrorPage;
@property (retain, nonatomic) UIView *emptyPage;
@property (retain, nonatomic) AWEHotSearchCommentAISummaryFeedDataController *dataController;
@property (retain, nonatomic) NSMutableArray *displayItems;
@property (retain, nonatomic) AWEHotSearchCommentFeedPageContext *context;
@property (nonatomic) BOOL hasInitFetched;
@property (nonatomic) unsigned long long currState;

- (id)getScrollView;
- (void)p_initialFetch;
- (void)p_loadMore;
- (void)p_addSkeleton;
- (id)p_createPlaceholderModels;
- (void)p_insertDisplayObjectsFromArray:(id)a0 animated:(BOOL)a1 intoIndex:(id /* block */)a2 completion:(id /* block */)a3;
- (void)p_toggleLoadingViewHidden:(BOOL)a0;
- (void)p_clearSkeleton;
- (void)locateViewPointIfNeeded;
- (void)p_addNetworkErrorPage;
- (void)p_addEmptyPage;
- (void)p_removeErrorOrEmptyPageIfNeeded;
- (id)p_rawItemToCommonFeedCardModel:(id)a0;
- (void)p_refreshPosition;
- (void)p_endRefreshFooter;
- (void)updateContainerVC:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;

@end
