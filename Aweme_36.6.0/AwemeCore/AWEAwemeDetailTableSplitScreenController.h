@class NSString, AWEAwemeModel, UIScrollView, AWEPageContext, UIViewController;
@protocol AWEPadSplitViewService, AWEPadSplitViewPrimaryViewLayoutController;

@interface AWEAwemeDetailTableSplitScreenController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, AWEPadSplitViewPrimaryController, AWEPadSplitScreenBizControllerProtocol, AWEPadDetailSplitScreenProtocol>

@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isMixVideoScene;
@property (nonatomic) BOOL needJudgeVisible;
@property (nonatomic) BOOL isScrollBegin;
@property (retain, nonatomic) id<AWEPadSplitViewService> currentService;
@property (retain, nonatomic) AWEAwemeModel *lastDisplayModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController *splitViewContainer;
@property (retain, nonatomic) UIViewController<AWEPadSplitViewPrimaryViewLayoutController> *primaryViewLayoutController;
@property (retain, nonatomic) UIViewController *primaryViewController;
@property (retain, nonatomic) UIScrollView *primaryScrollView;
@property (weak, nonatomic) AWEPageContext *splitViewContext;
@property (readonly, nonatomic) BOOL isSplitScreen;
@property (readonly, nonatomic) BOOL supportSplit;

+ (Class)aAWEPadSplitScreenAdapterClass;

- (BOOL)supportSplitWithoutSize;
- (void)dismissWithAnimated:(BOOL)a0 method:(id)a1 completion:(id /* block */)a2;
- (void)popSplitViewController:(BOOL)a0;
- (void)postSplitStatusChange;
- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoadAfterTableviewSetup;
- (void)transitionDidStartTransitionWithContext:(id)a0;
- (void)switchVideoWithAnimated:(BOOL)a0;
- (void)hotPointCardDidChangeModel;
- (id)aAWEPadSplitScreenAdapter;
- (void)openSplitViewWithViewController:(id)a0 with:(long long)a1 enterMethod:(id)a2;
- (void)openSplitViewWithViewController:(id)a0 with:(long long)a1 enterMethod:(id)a2 animate:(BOOL)a3;
- (BOOL)isInCurrentSplitLeftContainerWithGesture:(id)a0;
- (void)updateContentViewWithOffsetX:(double)a0;
- (BOOL)primaryScrollViewHasMoreDataWithIsUpDirection:(BOOL)a0;
- (void)postTableViewUpdateStateChange;
- (void)updateCurrentCommentWithCell:(id)a0;
- (void)handleScrollBegin;
- (void)createServiceIfNeeded;
- (void)updateAdapterWith:(id)a0 enterMethod:(id)a1 showType:(long long)a2;
- (id)interactionForCell:(id)a0;
- (void)closeSplitPanel;
- (void)longVideoDetailVideoChangFinish:(id)a0;
- (BOOL)canSplitWithScrollView:(id)a0;
- (void)addSplitScreenContainerIfNeeded;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)currentInteractionController;
- (void)handleScrollEnd;

@end
