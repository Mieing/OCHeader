@class NSMutableDictionary, NSString, NSMutableSet, UIScrollView, UITapGestureRecognizer;
@protocol InfiniteLoopContainerViewDelegate;

@interface InfiniteLoopContainerView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *containerView;
@property (retain, nonatomic) NSMutableDictionary *indexToViewDict;
@property (nonatomic) long long maxVisibleItemCount;
@property (nonatomic) long long itemCount;
@property (nonatomic) long long index;
@property (nonatomic) long long pivotIndex;
@property (nonatomic) double pivotOffset;
@property (nonatomic) long long beginDraggingIndex;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) NSMutableSet *lastVisibleItems;
@property (readonly, nonatomic) BOOL doubleDataSource;
@property (weak, nonatomic) id<InfiniteLoopContainerViewDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) BOOL pagingEnabled;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly, nonatomic) long long curIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;
- (void)initData;
- (void)initGesture;
- (void)initContainerView;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadData;
- (void)changeToNextItem;
- (void)changeToItemAtIndex:(long long)a0;
- (void)onTap:(id)a0;
- (void)updatePivot;
- (void)refreshView;
- (id)viewAtIndex:(long long)a0;
- (long long)indexOffset;
- (long long)indexOffsetForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForViewAtIndex:(long long)a0;
- (double)unitLength;
- (BOOL)canLoop;
- (BOOL)horizontal;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)checkFullyVisibleItems;
- (void).cxx_destruct;

@end
