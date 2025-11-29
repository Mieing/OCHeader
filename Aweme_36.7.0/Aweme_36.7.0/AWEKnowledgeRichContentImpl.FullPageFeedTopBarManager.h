@class _TtC27AWEKnowledgeRichContentImpl22FullPageFeedTopBarView;

@interface AWEKnowledgeRichContentImpl.FullPageFeedTopBarManager : AWEKnowledgeSwiftBasic.FullPageBaseComponent <AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEKnowledgeRichContentImpl.FullPageFeedTopBarManagerProtocol, AWEFullPageFeedPageModeSensitiveComponentProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_topBarView;
    void /* unknown type, empty encoding */ sectionContext;
}

@property (nonatomic) BOOL everShowTopBar;
@property (nonatomic, retain) _TtC27AWEKnowledgeRichContentImpl22FullPageFeedTopBarView *topBarView;

- (void)executePageModeChangeAnimation:(unsigned long long)a0;
- (BOOL)isTopBarViewVisible;
- (void)setSearchIconHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
