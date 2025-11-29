@interface AWEKnowledgeRichContentImpl.FullPageFeedCommentComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent <AWEFullPageFeedListViewControllerLifeCycleProtocol, AWEListSectionControllerDelegate, AWEKnowledgeSwiftBasic.ListContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.AppLifeCycleProtocol, AWEKnowledgeRichContentImpl.FullPageFeedCommentBaseProtocol, AWECommentSectionControllerContainerProtocol> {
    void /* unknown type, empty encoding */ hasLogCommentShow;
    void /* unknown type, empty encoding */ hasDisplayFirstComment;
    void /* unknown type, empty encoding */ commentCount;
    void /* unknown type, empty encoding */ isInputViewShowing;
    void /* unknown type, empty encoding */ hideInputViewBlock;
    void /* unknown type, empty encoding */ commentHasMore;
    void /* unknown type, empty encoding */ currentCommentVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentListViewController;
    void /* unknown type, empty encoding */ commentInputView;
}

- (void)sectionControllerWillDisplay:(id)a0;
- (void)onContainerViewDidDisappear;
- (void)onContainerViewDidAppear;
- (void)onScrollViewDidScrollWithScrollView:(id)a0;
- (void)onScrollViewWillBeginDraggingWithScrollView:(id)a0;
- (void)onScrollViewDidEndDraggingWithScrollView:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollViewDidEndDeceleratingWithScrollView:(id)a0;
- (id)commentSectionControllerContainer;
- (id)commentSectionControllerContainerView;
- (id)commentSectionControllerContainerSectionModelsArray;
- (void)commentSectionControllerUpdateByFinalModels:(id)a0 actionModels:(id)a1 actionType:(unsigned long long)a2 animated:(BOOL)a3 sync:(BOOL)a4;
- (void)commentSectionControllerFooterTextDidUpdate:(id)a0 noMoreData:(BOOL)a1 hideFooter:(BOOL)a2;
- (id)commentSectionControllerContainerActualScrollview;
- (BOOL)shouldFollowPanelCollectionViewColorWhenThemeChange;
- (BOOL)allowScrollToInputTop;
- (BOOL)allowScrollAfterReplyComment;
- (void)listVCViewDidLoad:(id)a0;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1 atListVC:(id)a2;
- (void)setupCollectionView:(id)a0 forBusinessType:(id)a1 atListVC:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)scrollToItemAtIndexPath:(id)a0 atScrollPosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
