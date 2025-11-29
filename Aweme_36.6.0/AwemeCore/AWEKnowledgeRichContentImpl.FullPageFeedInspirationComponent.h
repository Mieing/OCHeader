@interface AWEKnowledgeRichContentImpl.FullPageFeedInspirationComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent <AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.AppLifeCycleProtocol, AWEKnowledgeSwiftBasic.ListContainerLifeCycleProtocol, AWEKnowledgeRichContentImpl.FullPageFeedInspirationButtonViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_inspirationButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inspirationImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_inspirationLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomBar;
    void /* unknown type, empty encoding */ inspirationWidthConstraint;
    void /* unknown type, empty encoding */ kvStorage;
    void /* unknown type, empty encoding */ isFirstShow;
    void /* unknown type, empty encoding */ isGuideImpression;
}

- (void)onContainerViewWillDisappear;
- (void)onContainerViewDidAppear;
- (void)onContainerViewDidLoad;
- (void)onScrollViewWillBeginDraggingWithScrollView:(id)a0;
- (void)inspirationButtonDidEndTouch:(id)a0;
- (void)inspirationButtonDidBeginTouch:(id)a0;
- (void)themeDidChange:(id)a0;
- (void)clickInspirationButton;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground;

@end
