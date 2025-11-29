@interface AWEKnowledgeSwiftBasic.FullPageContainerComponentManager : AWEShellControllerManager <AWEKnowledgeSwiftBasic.ListContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.AppLifeCycleProtocol, AWEControllerProtocol, AWEKnowledgeSwiftBasic.FullPageContainerComponentProtocol> {
    void /* unknown type, empty encoding */ cacheSelectorDict;
    void /* unknown type, empty encoding */ container;
}

- (void)onSetupCollectionViewWithCollectionView:(id)a0;
- (void)onScrollViewDidScrollWithScrollView:(id)a0;
- (void)onScrollViewWillBeginDraggingWithScrollView:(id)a0;
- (void)onScrollViewWillEndDraggingWithScrollView:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)onScrollViewDidEndDraggingWithScrollView:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollViewDidEndDeceleratingWithScrollView:(id)a0;
- (void)onScrollViewDidEndScrollingAnimationWithScrollView:(id)a0;
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
- (void)onContainerDidReceiveAwemeDeleteWithItemID:(id)a0;
- (void)onContainerViewDidSetup;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (id)classNameArray;
- (void).cxx_destruct;
- (void)addController:(id)a0;
- (id)init;

@end
