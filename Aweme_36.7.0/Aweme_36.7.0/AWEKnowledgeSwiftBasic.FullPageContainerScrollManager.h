@interface AWEKnowledgeSwiftBasic.FullPageContainerScrollManager : AWEKnowledgeSwiftBasic.FullPageBaseComponent <AWEKnowledgeSwiftBasic.FullPageContainerScrollManagerProtocol, AWEKnowledgeSwiftBasic.ListContainerLifeCycleProtocol> {
    void /* unknown type, empty encoding */ lastContentOffset;
}

- (void)onScrollViewDidScrollWithScrollView:(id)a0;
- (void)onScrollViewWillBeginDraggingWithScrollView:(id)a0;
- (void)onScrollViewWillEndDraggingWithScrollView:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)onScrollViewDidEndDraggingWithScrollView:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollViewDidEndDeceleratingWithScrollView:(id)a0;
- (void)onScrollViewDidEndScrollingAnimationWithScrollView:(id)a0;
- (id)init;

@end
