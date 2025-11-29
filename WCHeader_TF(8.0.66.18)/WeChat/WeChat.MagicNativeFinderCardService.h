@interface WeChat.MagicNativeFinderCardService : MMUserService <MMServiceProtocol, WeChat.IMagicNativeFinderCardService, IMagicCardStarterDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$__frameSetRootConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$__bizConfig;
    void /* unknown type, empty encoding */ finderBiz;
}

- (void)createBiz;
- (void)preRenderWithFrameSetName:(id)a0 frameSetData:(id)a1 containerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)controlPreloadAdMediaWithPreloadType:(int)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void)bindFrameSetViewWithContainerView:(id)a0 frameSetName:(id)a1 frameSetData:(id)a2;
- (void)controlAdVideoWithControlType:(int)a0 frameSetName:(id)a1;
- (void)notifyFrameSetExposeWithFrameSetName:(id)a0 isExpose:(BOOL)a1;
- (void)notifyEventWithJsEventName:(id)a0 frameSetName:(id)a1;
- (void)removeFrameSetViewWithFrameSetName:(id)a0;
- (void)destroyBiz;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)jsApiEventHandler:(id)a0 extraInfo:(id)a1 callback:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
