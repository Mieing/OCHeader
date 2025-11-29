@interface AWEStoryImpl.AutoPlayController : AWEStoryImpl.StoryListBaseController <UIScrollViewDelegate, AWEStoryImpl.StoryListControllerViewLifeCycle, AWEBaseListUpdateDelegate> {
    void /* unknown type, empty encoding */ lastOffsetY;
    void /* unknown type, empty encoding */ currentPlayingSectionViewModel;
}

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)didBecomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (id)init;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillDisappear:(BOOL)a0;

@end
