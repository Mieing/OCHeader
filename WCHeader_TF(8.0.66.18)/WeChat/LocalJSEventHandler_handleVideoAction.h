@interface LocalJSEventHandler_handleVideoAction : LocalJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)insertSameLayerVideo:(id)a0;
- (void)updateSameLayerVideo:(id)a0;
- (void)removeSameLayerVideo:(id)a0;
- (void)operateSameLayerVideo:(id)a0;
- (void)getFinderPlayInfo:(id)a0;
- (id)nativeVideoPlugin;
- (void)endWithError:(id)a0;

@end
