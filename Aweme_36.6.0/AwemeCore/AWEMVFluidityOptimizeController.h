@interface AWEMVFluidityOptimizeController : AWEDCFeedBaseController

- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewDidEndScrollingAnimation:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)suspendScatterTaskScheduler:(BOOL)a0;

@end
