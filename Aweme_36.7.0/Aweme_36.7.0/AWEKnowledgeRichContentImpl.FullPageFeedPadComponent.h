@interface AWEKnowledgeRichContentImpl.FullPageFeedPadComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent <AWEKnowledgeRichContentImpl.FullPageFeedPadComponentProtocol, AWEFullPageFeedListViewControllerLifeCycleProtocol, AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol> {
    void /* unknown type, empty encoding */ hasAddObserver;
    void /* unknown type, empty encoding */ hasFirstTimeSetupPadUI;
    void /* unknown type, empty encoding */ khorizontalBlankHeight;
    void /* unknown type, empty encoding */ richContentView;
    void /* unknown type, empty encoding */ lastClickTimestamp;
    void /* unknown type, empty encoding */ lastClickedPoint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_padPreviewView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_leftContentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapGesture;
    void /* unknown type, empty encoding */ currentIsHorizontal;
    void /* unknown type, empty encoding */ lastIsHorizontal;
}

- (void)updateLayoutForRotate;
- (void)listVCViewDidLoad:(id)a0;
- (void)customLayoutCollectionView:(id)a0 atListVC:(id)a1;
- (BOOL)shouldResponseToPadPinchTransitionWith:(id)a0;
- (BOOL)disableShowTopBarViewForPinchTransition;
- (void)didTapBack;
- (void)onViewClickedWithGes:(id)a0;
- (void)onViewSingleClickedWithLocation:(id)a0;
- (void)onViewDoubleClickedWithGes:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldAutorotate;
- (void)updateColor;

@end
