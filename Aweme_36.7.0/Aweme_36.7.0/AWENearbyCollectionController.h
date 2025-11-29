@protocol UIScrollViewDelegate;

@interface AWENearbyCollectionController : AWEWaterFallCollectionController

@property (weak, nonatomic) id<UIScrollViewDelegate> scrollDelegate;
@property (nonatomic) BOOL isScrolling;

- (id)constData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)store;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
