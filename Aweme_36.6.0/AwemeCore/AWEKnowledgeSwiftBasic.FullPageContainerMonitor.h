@interface AWEKnowledgeSwiftBasic.FullPageContainerMonitor : AWEKnowledgeSwiftBasic.FullPageBaseComponent <AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.ListContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.FullPageContainerMonitorProtocol>

- (void)onContainerViewDidLoad;
- (void)onScrollViewWillBeginDraggingWithScrollView:(id)a0;
- (void)onScrollViewDidEndDraggingWithScrollView:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollViewDidEndDeceleratingWithScrollView:(id)a0;
- (id)init;

@end
