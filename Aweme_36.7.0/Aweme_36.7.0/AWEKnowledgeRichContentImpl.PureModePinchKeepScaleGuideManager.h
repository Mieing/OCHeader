@interface AWEKnowledgeRichContentImpl.PureModePinchKeepScaleGuideManager : NSObject <AWEAlertProtocol, AWEPureModePinchKeepScaleGuideManagerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_touchCaptureView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_guideView;
    void /* unknown type, empty encoding */ dispatchWorkItem;
}

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void)deferShowGuideIfNeeded;
- (void)cancelDeferShowGuideIfExist;
- (void).cxx_destruct;
- (id)init;

@end
