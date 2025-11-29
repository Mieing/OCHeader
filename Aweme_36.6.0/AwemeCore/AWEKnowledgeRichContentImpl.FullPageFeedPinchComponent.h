@interface AWEKnowledgeRichContentImpl.FullPageFeedPinchComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent <AWEKnowledgeRichContentImpl.FullPageFeedPinchComponentProtocol, AWELivePhotoPlayControlButtonExternalDelegate> {
    void /* unknown type, empty encoding */ pinchZoomTransitionHelper;
    void /* unknown type, empty encoding */ contextProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pinchCustomization;
}

- (unsigned long long)pinchTransition_destinatedType;
- (BOOL)transition_shouldStartPinchInteractiveTranstionToVC:(id)a0;
- (void)onLivePhotoPlayControlButtonShown;
- (void)onLivePhotoPlayControlButtonClicked;
- (void)onLivePhotoPlayControlMenuClickedWithType:(unsigned long long)a0;
- (BOOL)transition_shouldStartPinchInteractiveTranstionFor:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didEndPinchTransitionWith:(id)a0;
- (id)transition_destinatedViewControllerFor:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)enterPureModePageIfNeededWithModel:(id)a0 contextProvider:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
