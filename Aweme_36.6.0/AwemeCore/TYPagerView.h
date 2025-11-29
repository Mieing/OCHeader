@class NSArray, NSString, UIScrollView, TYPagerViewLayout;
@protocol TYPagerViewDelegate, TYPagerViewDataSource;

@interface TYPagerView : UIView <TYPagerViewLayoutDataSource, TYPagerViewLayoutDelegate> {
    struct { unsigned char willAppearViewForIndex : 1; unsigned char didAppearViewForIndex : 1; unsigned char willDisappearViewForIndex : 1; unsigned char didDisappearViewForIndex : 1; unsigned char transitionFromIndexToIndex : 1; unsigned char transitionFromIndexToIndexProgress : 1; unsigned char viewDidScroll : 1; unsigned char viewWillBeginScrolling : 1; unsigned char viewDidEndScrolling : 1; } _delegateFlags;
}

@property (retain, nonatomic) TYPagerViewLayout *layout;
@property (weak, nonatomic) id<TYPagerViewDataSource> dataSource;
@property (weak, nonatomic) id<TYPagerViewDelegate> delegate;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) long long countOfPagerViews;
@property (readonly, nonatomic) long long curIndex;
@property (readonly, nonatomic) NSArray *visibleViews;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pagerViewLayout:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 animated:(BOOL)a3;
- (void)pagerViewLayout:(id)a0 transitionFromIndex:(long long)a1 toIndex:(long long)a2 progress:(double)a3;
- (void)pagerViewLayoutDidScroll:(id)a0;
- (void)pagerViewLayoutWillBeginScrollToView:(id)a0 animate:(BOOL)a1;
- (void)pagerViewLayoutDidEndScrollToView:(id)a0 animate:(BOOL)a1;
- (void)pagerViewLayoutDidEndDecelerating:(id)a0;
- (void)pagerViewLayoutWillBeginDragging:(id)a0;
- (void)pagerViewLayoutDidEndScrollingAnimation:(id)a0;
- (void)willBeginScrollingAnimate:(BOOL)a0;
- (void)didEndScrollingAnimate:(BOOL)a0;
- (long long)numberOfItemsInPagerViewLayout;
- (id)pagerViewLayout:(id)a0 itemForIndex:(long long)a1 prefetching:(BOOL)a2;
- (id)pagerViewLayout:(id)a0 viewForItem:(id)a1 atIndex:(long long)a2;
- (void)pagerViewLayout:(id)a0 addVisibleItem:(id)a1 atIndex:(long long)a2;
- (void)pagerViewLayout:(id)a0 removeInVisibleItem:(id)a1 atIndex:(long long)a2;
- (void)addFixAutoAdjustInsetScrollView;
- (void)addLayoutScrollView;
- (void)scrollToViewAtIndex:(long long)a0 animate:(BOOL)a1;
- (void)registerNib:(id)a0 forViewWithReuseIdentifier:(id)a1;
- (id)dequeueReusableViewWithReuseIdentifier:(id)a0 forIndex:(long long)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)updateData;
- (void)registerClass:(Class)a0 forViewWithReuseIdentifier:(id)a1;
- (id)viewForIndex:(long long)a0;

@end
