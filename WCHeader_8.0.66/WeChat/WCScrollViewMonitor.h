@class UIScrollView;

@interface WCScrollViewMonitor : NSObject

@property (readonly, weak, nonatomic) UIScrollView *targetScrollView;

- (id)initWithTargetScrollView:(id)a0;
- (id)searchVisibleScrollViewsInView:(id)a0;
- (void)_recursivelySearchVisibleScrollViewsInView:(id)a0 context:(id)a1;
- (void)checkScrollingToTop;
- (BOOL)canScrollViewScrollToTop:(id)a0;
- (BOOL)isScrollViewPossibleScrollingToTop:(id)a0;
- (void).cxx_destruct;

@end
