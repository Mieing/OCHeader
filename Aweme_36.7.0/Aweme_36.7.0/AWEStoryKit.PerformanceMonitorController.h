@interface AWEStoryKit.PerformanceMonitorController : AWEStoryKit.StoryKitBaseController <UIScrollViewDelegate>

- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
