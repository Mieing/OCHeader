@interface AWEStoryImpl.StoryFeedAutoPlayController : AWEStoryKit.StoryKitBaseController <AWEStoryKit.StoryKitViewControllerLifeCycle, UIScrollViewDelegate, AWEBaseListUpdateDelegate> {
    void /* unknown type, empty encoding */ isAppearing;
}

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
