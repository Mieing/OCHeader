@class NSString, AWEPageContext, UIScrollView, NSIndexPath, UIViewController;
@protocol AWEFeedSpiltControllerDelegate, AWEPadSplitViewService, AWEPadSplitViewPrimaryViewLayoutController;

@interface AWEFeedSplitController : AWEBaseController <AWEPadSplitViewPrimaryController, AWEPadSplitViewInteractionTransitionDelegate, AWEPadSplitScreenBizControllerProtocol, AWEFeedSplitControllerProtocol>

@property (retain, nonatomic) NSIndexPath *willDisplayIndexPath;
@property (retain, nonatomic) NSIndexPath *didEndDisplayingIndexPath;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) BOOL disableScrollViewScrollDismiss;
@property (nonatomic) BOOL isScrollBegin;
@property (retain, nonatomic) id<AWEPadSplitViewService> currentService;
@property (weak, nonatomic) id<AWEFeedSpiltControllerDelegate> splitDelegate;
@property (weak, nonatomic) UIViewController *splitViewContainer;
@property (retain, nonatomic) UIViewController<AWEPadSplitViewPrimaryViewLayoutController> *primaryViewLayoutController;
@property (retain, nonatomic) UIViewController *primaryViewController;
@property (retain, nonatomic) UIScrollView *primaryScrollView;
@property (weak, nonatomic) AWEPageContext *splitViewContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isSplitScreen;
@property (readonly, nonatomic) BOOL supportSplit;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadSplitScreenAdapterClass;
+ (Class)aAWEPadUserPageAdapterClass;

- (id)aAWEPadModuleAdapter;
- (BOOL)supportSplitWithoutSize;
- (void)dismissWithAnimated:(BOOL)a0 method:(id)a1 completion:(id /* block */)a2;
- (void)popSplitViewController:(BOOL)a0;
- (void)postSplitStatusChange;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)beginRefresh;
- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoadAfterTableviewSetup;
- (id)aAWEPadSplitScreenAdapter;
- (BOOL)enableSlideToUserPageSplitScreen;
- (BOOL)enableUserPageSplitScreen;
- (id)userPageViewControllerWithPan:(id)a0;
- (void)switchVideoWithNoAnimated;
- (void)switchLongVideoWithNoAnimated;
- (void)enableScrollDismiss;
- (void)disableScrollDismiss;
- (void)openSplitViewWithViewController:(id)a0 with:(long long)a1 enterMethod:(id)a2;
- (void)openSplitViewWithViewController:(id)a0 with:(long long)a1 enterMethod:(id)a2 animate:(BOOL)a3;
- (void)keyboardWillScrollTableView;
- (BOOL)primaryScrollViewHasMoreDataWithIsUpDirection:(BOOL)a0;
- (void)postTableViewUpdateStateChange;
- (void)updateCurrentCommentWithCell:(id)a0;
- (void)handleScrollBegin;
- (id)aAWEPadUserPageAdapter;
- (void)createServiceIfNeeded;
- (void)updateAdapterWith:(id)a0 enterMethod:(id)a1 showType:(long long)a2;
- (id)interactionForCell:(id)a0;
- (BOOL)enableSplitViewInteractionTransition:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)currentInteractionController;
- (void)handleScrollEnd;

@end
