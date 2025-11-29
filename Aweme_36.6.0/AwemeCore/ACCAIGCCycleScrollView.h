@class NSMutableArray, UIPageControl, NSTimer, NSString, UIScrollView, ACCAIGCCycleScrollViewCell, UIView;
@protocol ACCAIGCCycleScrollViewDataSource, ACCAIGCCycleScrollViewDelegate;

@interface ACCAIGCCycleScrollView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *maskBackgroundView;
@property (retain, nonatomic) ACCAIGCCycleScrollViewCell *currentCell;
@property (nonatomic) long long currentSelectIndex;
@property (nonatomic) long long realCount;
@property (nonatomic) long long showCount;
@property (weak, nonatomic) NSTimer *timer;
@property (nonatomic) long long timerIndex;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (retain, nonatomic) NSMutableArray *visibleCells;
@property (retain, nonatomic) NSMutableArray *reusableCells;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } visibleRange;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (weak, nonatomic) id<ACCAIGCCycleScrollViewDataSource> dataSource;
@property (weak, nonatomic) id<ACCAIGCCycleScrollViewDelegate> delegate;
@property (nonatomic) unsigned long long direction;
@property (weak, nonatomic) UIPageControl *pageControl;
@property (nonatomic) long long defaultSelectIndex;
@property (nonatomic) BOOL isAutoScroll;
@property (nonatomic) BOOL isInfiniteLoop;
@property (nonatomic) BOOL isChangeAlpha;
@property (nonatomic) double minimumCellAlpha;
@property (nonatomic) double leftRightMargin;
@property (nonatomic) double topBottomMargin;
@property (nonatomic) double autoScrollTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateScrollViewAndCellSize;
- (void)initialScrollViewAndCellSize;
- (void)refreshSizeCompletion:(id /* block */)a0;
- (void)setupCellsWithContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)updateVisibleCellAppearance;
- (void)timerUpdate;
- (void)handleCellScrollWithIndex:(long long)a0;
- (void)addCellAtIndex:(long long)a0;
- (void)removeCellAtIndex:(long long)a0;
- (void)handleCellSelectWithIndex:(long long)a0;
- (void)handleScrollViewDidScroll:(id)a0;
- (id)dequeueReusableCell;
- (void)scrollToCellAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)adjustCurrentCell;
- (void)stopTimer;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)startTimer;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)initialization;

@end
