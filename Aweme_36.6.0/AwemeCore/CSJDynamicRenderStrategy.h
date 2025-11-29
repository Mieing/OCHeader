@interface CSJDynamicRenderStrategy : CSJRenderStrategy

- (void)safeDelegate_dynamicRenderStrategy:(id)a0 reportLabel:(id)a1;
- (double)safeDelegate_renderTimeoutInDynamicRenderStrategy:(id)a0;
- (void)safeDelegate_dynamicRenderStrategy:(id)a0 reportError:(id)a1;
- (long long)safeDelegate_playPercentInDynamicRenderStrategy:(id)a0;
- (id)jsCallNative_type:(long long)a0 params:(id)a1;
- (void)jsCallNative_showSKOverlay;
- (void)addReopenSKOverlayObserver;
- (id)_pro_handleRenderDidFinishWithDictionary:(id)a0 error:(id *)a1;
- (id)logKeyName;
- (void)reopenSKoverlay;
- (long long)renderType;
- (void)render;

@end
