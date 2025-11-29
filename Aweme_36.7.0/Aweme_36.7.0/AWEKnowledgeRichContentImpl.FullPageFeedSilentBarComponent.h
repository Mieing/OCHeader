@interface AWEKnowledgeRichContentImpl.FullPageFeedSilentBarComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent <AWEFullPageFeedListViewControllerLifeCycleProtocol, AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.AppLifeCycleProtocol, AWEKnowledgeSwiftBasic.ListContainerLifeCycleProtocol, AWEKnowledgeRichContentImpl.FullPageFeedSilentBarComponentProtocol> {
    void /* unknown type, empty encoding */ muteBarShowTime;
    void /* unknown type, empty encoding */ $__lazy_storage_$_silentBarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailComponentSectionContext;
    void /* unknown type, empty encoding */ inspirationWidthConstraint;
    void /* unknown type, empty encoding */ isProcessing;
    void /* unknown type, empty encoding */ isRecorded;
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listLifeCycleDispatcher;
}

@property (nonatomic) BOOL isDragged;

- (void)onContainerViewDidDisappear;
- (void)onContainerViewDidLoad;
- (void)onScrollViewDidEndDraggingWithScrollView:(id)a0 willDecelerate:(BOOL)a1;
- (void)listVCViewDidLoad:(id)a0;
- (void)clickGoSettingButton;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterBackground;

@end
