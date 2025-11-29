@class UIView;
@protocol AWEDiscoverFeedEntranceViewProtocol;

@interface AWEKnowledgeRichContentImpl.FullPageFeedNavigationBarComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent <AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEFullPageFeedPageModeSensitiveComponentProtocol, AWEKnowledgeRichContentImpl.FullPageFeedNavigationBarComponentProtocol> {
    void /* unknown type, empty encoding */ fullpageFeedStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_discoverEntranceView;
}

@property (nonatomic, retain) UIView<AWEDiscoverFeedEntranceViewProtocol> *discoverEntranceView;

- (void)onContainerViewDidLoad;
- (void)executePageModeChangeAnimation:(unsigned long long)a0;
- (void)trackDiscoverButtonShow;
- (void)trackDiscoverButtonClick;
- (void)showNavigationBarWithShow:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
