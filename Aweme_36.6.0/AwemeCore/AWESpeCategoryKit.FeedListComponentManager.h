@interface AWESpeCategoryKit.FeedListComponentManager : AWEBaseControllerManager <AWESpeCategoryKit.PlayerControlProtocol, AWESpeCategoryKit.DataChangeProtocol, AWESpeCategoryKit.TabContainerLifeCycleProtocol, AWESpeCategoryKit.ListContainerLifeCycleProtocol, AWESpeCategoryKit.ContainerLifeCycleProtocol, AWESpeCategoryKit.AppLifeCycleProtocol, AWESpeCategoryKit.ComponentProtocol> {
    void /* unknown type, empty encoding */ componentProvider;
    void /* unknown type, empty encoding */ cacheSelectorDict;
}

- (void)onPlay;
- (void)onPause;
- (void)onReplayWithTimes:(long long)a0;
- (void)onLoadPlaceholderDataStart;
- (void)onFetchListDataStartWithReason:(long long)a0;
- (void)onLoadMoreListDataStartWithReason:(long long)a0;
- (void)onLoadPlaceholderDataEndWithSuccess:(BOOL)a0 response:(id)a1 error:(id)a2;
- (void)onFetchListDataEndWithReason:(long long)a0 success:(BOOL)a1 response:(id)a2 error:(id)a3;
- (void)onLoadMoreListDataEndWithReason:(long long)a0 success:(BOOL)a1 response:(id)a2 error:(id)a3;
- (void)onListDidReloadData;
- (void)onTabContainerViewWillAppear;
- (void)onTabContainerViewDidAppear;
- (void)onTabContainerViewWillDisappear;
- (void)onTabContainerViewDidDisappear;
- (void)onTabContainerViewWillLayoutSubviews;
- (void)onTabContainerViewDidLayoutSubviews;
- (void)onSetupCollectionViewWithCollectionView:(id)a0;
- (void)onScrollViewDidScrollWithScrollView:(id)a0;
- (void)onScrollViewWillBeginDraggingWithScrollView:(id)a0;
- (void)onScrollViewDidEndDraggingWithScrollView:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollViewDidEndDeceleratingWithScrollView:(id)a0;
- (void)onContainerViewDidDisappear;
- (void)onContainerViewWillDisappear;
- (void)onContainerViewDidAppear;
- (void)onContainerViewWillAppear;
- (void)onContainerViewDidLoad;
- (void)onContainerWillMoveToParent:(id)a0;
- (void)onContainerDidMoveToParent:(id)a0;
- (void)onContainerViewWillLayoutSubviews;
- (void)onContainerViewDidLayoutSubviews;
- (void)onContainerDidReceiveMemoryWarning;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (void).cxx_destruct;
- (void)addController:(id)a0;
- (id)init;

@end
