@class AWESearchArticleDetailPageContext, AWESearchArticleContentDetailViewController, AWESearchArticleCommentListViewController;

@interface AWESearchArticleTabListViewController : AWEBaseTabListViewController

@property (retain, nonatomic) AWESearchArticleContentDetailViewController *contentVC;
@property (retain, nonatomic) AWESearchArticleCommentListViewController *commentVC;
@property (weak, nonatomic) AWESearchArticleDetailPageContext *pageContext;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;

- (void)duxGrid_viewDidChangeBreakPointFrom:(struct { long long x0; long long x1; })a0 toBreakPoint:(struct { long long x0; long long x1; })a1;
- (id)aAWEPadModuleAdapter;
- (void)setupContainerScrollView:(id)a0;
- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (void)tabListContainerScrollViewDidScroll:(id)a0;
- (void)tabListContainerScrollViewWillBeginDragging:(id)a0;
- (void)tabListContainerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)tabListContainerDidEndScrolling:(id)a0;
- (BOOL)tabContentUseMaxHeight;
- (void)setupTabListWithConfig:(id)a0;
- (BOOL)tabListContainerScrollViewShouldScrollToTop:(id)a0;
- (void)startTick;
- (id)aAWEPadBizUIAdapter;
- (void)setupObserver;
- (void)trackPlayTime;
- (void)bindPageContext:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
