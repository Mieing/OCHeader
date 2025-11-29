@class NSString, NSHashTable;
@protocol UIScrollViewDelegate;

@interface AWEMScrollViewDelegateDistribute : NSObject <UIScrollViewDelegate>

@property (retain, nonatomic) NSHashTable *distributes;
@property (weak, nonatomic) id<UIScrollViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDistribute:(id)a0;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)initWithScrollView:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)conformsToProtocol:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
