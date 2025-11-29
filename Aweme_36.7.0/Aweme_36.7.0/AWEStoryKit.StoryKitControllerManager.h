@interface AWEStoryKit.StoryKitControllerManager : AWEShellControllerManager <AWEBaseListUpdateDelegate, UIScrollViewDelegate, AWEStoryKit.StoryKitViewControllerLifeCycle> {
    void /* unknown type, empty encoding */ serviceContainer;
    void /* unknown type, empty encoding */ customControllers;
}

- (void)listDidReloadDataWithCollectionView:(id)a0;
- (void)listWillPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)listWillReloadDataWithCollectionView:(id)a0;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)didEnterBackground;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)viewWillDisappear:(BOOL)a0 isBeingDismissed:(BOOL)a1 isMovingFromParentViewController:(BOOL)a2;
- (void)onThemeChanged;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)classNameArray;
- (void).cxx_destruct;
- (id)init;

@end
