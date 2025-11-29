@interface AWEKnowledgeRichContentImpl.FullPageFeedSectionDetailComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent <AWEFullPageFeedListViewControllerLifeCycleProtocol, AWEListSectionControllerDelegate, AWEKnowledgeRichContentImpl.FullPageFeedSectionBaseDetailComponentProtocol, AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.AppLifeCycleProtocol, AWEKnowledgeSwiftBasic.ListContainerLifeCycleProtocol, AWEFullPageFeedPageModeSensitiveComponentProtocol> {
    void /* unknown type, empty encoding */ feedSectionController;
    void /* unknown type, empty encoding */ sectionViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sectionManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioManager;
    void /* unknown type, empty encoding */ willUnfoldContentTargetContentOffset;
    void /* unknown type, empty encoding */ willFoldContentTargetContentOffset;
    void /* unknown type, empty encoding */ removeCardTargetContentOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visibleCardManager;
    void /* unknown type, empty encoding */ startDraggingPosition;
    void /* unknown type, empty encoding */ lastContentOffset;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topBarManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomBarManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panelBackgroundView;
    void /* unknown type, empty encoding */ volumeIdentifierNumber;
}

- (void)sectionControllerWillEnterWorkingRange:(id)a0;
- (void)sectionControllerWillDisplay:(id)a0;
- (void)sectionControllerDidEndDisplaying:(id)a0;
- (void)sectionControllerDidExitWorkingRange:(id)a0;
- (void)onContainerViewWillDisappear;
- (void)onContainerViewDidAppear;
- (void)onScrollViewDidScrollWithScrollView:(id)a0;
- (void)onScrollViewWillBeginDraggingWithScrollView:(id)a0;
- (void)onScrollViewWillEndDraggingWithScrollView:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)onScrollViewDidEndScrollingAnimationWithScrollView:(id)a0;
- (void)onPageModeWillChange:(unsigned long long)a0;
- (void)executePageModeChangeAnimation:(unsigned long long)a0;
- (void)onPageModeDidChage:(unsigned long long)a0;
- (void)listVCViewDidLoad:(id)a0;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1 atListVC:(id)a2;
- (void)setupCollectionView:(id)a0 forBusinessType:(id)a1 atListVC:(id)a2;
- (void)listDidReloadDataWithCollectionView:(id)a0 atListVC:(id)a1;
- (void)listWillPerformBatchUpdatesWithCollectionView:(id)a0 atListVC:(id)a1;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0 atListVC:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appWillEnterForeground;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
