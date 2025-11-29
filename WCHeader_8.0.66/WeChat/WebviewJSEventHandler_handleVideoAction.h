@interface WebviewJSEventHandler_handleVideoAction : WebviewJSEventHandler_handleSameLayer

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)insertSameLayerVideo:(id)a0 event:(id)a1 errMsg:(id *)a2;
- (void)updateSameLayerVideo:(id)a0 event:(id)a1 errMsg:(id *)a2;
- (id)operateSameLayerVideo:(id)a0 errMsg:(id *)a1;
- (void)removeSameLayerVideo:(id)a0 errMsg:(id *)a1;
- (void)setExitFullscreenBtn:(id)a0 errMsg:(id *)a1;
- (id)takeVideoSnapshotForViewId:(unsigned int)a0 maxByteSize:(unsigned int)a1 errMsg:(id *)a2;
- (id)getSameLayerPlayerCount:(id)a0 errMsg:(id *)a1;
- (id)getInitialParams:(id)a0 errMsg:(id *)a1;
- (void)exchangeFinderPlayInfo:(id)a0 event:(id)a1;
- (void)openFullScreenFinderVideo:(id)a0 event:(id)a1;
- (void)opFinderVideo:(id)a0 errMsg:(id *)a1;
- (id)getFinderFeedInfo:(id)a0 errMsg:(id *)a1;
- (id)nativeVideoPlugin;

@end
