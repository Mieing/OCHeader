@class NSString, DitoMultiTabDataModel, DitoMultiTabViewPagerScrollView, DitoMultiTabViewPagerComponentViewModel, NSMutableArray;

@interface DitoMultiTabViewPagerComponentView : DitoComponentView <UIScrollViewDelegate, DitoMultiTabContainerProtocol>

@property (weak, nonatomic) DitoMultiTabViewPagerComponentViewModel *viewModel;
@property (nonatomic) BOOL hasFirstScrollToTab;
@property (nonatomic) BOOL hasUpdateForCellHeight;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) BOOL isDraggingWhileDisappear;
@property (retain, nonatomic) NSMutableArray *transitionAppearArray;
@property (retain, nonatomic) NSMutableArray *transitionDisappearArray;
@property (retain, nonatomic) NSMutableArray *appearCompleteArray;
@property (retain, nonatomic) NSMutableArray *appearNeedDisappearArray;
@property (retain, nonatomic) DitoMultiTabViewPagerScrollView *scrollView;
@property (retain, nonatomic) DitoMultiTabDataModel *cacheScrollingStartModel;
@property (nonatomic) BOOL hasCallWillAppearBefore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onScrollDidEnd;
- (void)updateViewModel:(id)a0;
- (void)vcHasCompleteAppear:(id)a0;
- (void)vcHasCompleteDisappear:(id)a0;
- (long long)nextIndexForScrollView:(id)a0;
- (void)handleTransitionAppearArray:(long long)a0;
- (void)traverseAppearNeedDisappearArraySendDisAppear;
- (id)fetchMultiTabUtil;
- (void)setMultiTabContainerScrollEnable:(BOOL)a0;
- (id)fetchScrollView;
- (void)addDitoMultiTabDelegate:(id)a0;
- (double)subTabPageWidth;
- (void)addViewControllerAtIndex:(long long)a0;
- (void)makeControllersDidAppear;
- (void)reloadScrollViewWithCurrentIndex:(long long)a0;
- (long long)currentPageIndexForScrollView:(id)a0;
- (BOOL)controllerNeedSendWillAppearWithIndex:(long long)a0;
- (void)makeControllersWillAppearAtIndex:(long long)a0;
- (void)makeControllersWillAppearAtPreIndex:(long long)a0 nextIndex:(long long)a1;
- (void)makeControllersWillDisappearAtIndex:(long long)a0;
- (BOOL)isMultiTabContainerScrollEnable;
- (void)viewDidAppear;
- (long long)currentIndex;
- (long long)nextIndex;
- (id)items;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)setupUI;
- (id)itemForIndex:(long long)a0;
- (long long)indexForItem:(id)a0;
- (void)scrollToItem:(id)a0 animated:(BOOL)a1;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameAtIndex:(long long)a0;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
