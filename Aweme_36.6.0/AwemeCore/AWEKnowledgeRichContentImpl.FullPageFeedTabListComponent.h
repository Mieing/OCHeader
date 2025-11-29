@interface AWEKnowledgeRichContentImpl.FullPageFeedTabListComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent <AWEFullPageFeedTabListLifeCycleProtocol, AWERelatedRecommendViewControllerDelegate, AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.AppLifeCycleProtocol, AWEKnowledgeRichContentImpl.FullPageFeedTabListComponentProtocol> {
    void /* unknown type, empty encoding */ hasShowTabBar;
    void /* unknown type, empty encoding */ hasInitRelated;
    void /* unknown type, empty encoding */ showingRelated;
}

- (void)onContainerViewDidDisappear;
- (void)onContainerViewDidAppear;
- (id)getRecentClickAndShowItems;
- (BOOL)shouldShowNoMoreButton;
- (void)tabListContainerScrollViewDidScroll:(id)a0;
- (void)tabListDidTapItemAtIndex:(long long)a0 locationType:(unsigned long long)a1;
- (id)init;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;

@end
