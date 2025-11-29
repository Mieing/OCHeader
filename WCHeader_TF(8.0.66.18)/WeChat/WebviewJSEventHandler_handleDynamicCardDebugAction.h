@interface WebviewJSEventHandler_handleDynamicCardDebugAction : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)endWithError:(id)a0 errDesc:(id)a1;
- (void)endWithError:(id)a0 errDesc:(id)a1 extraParams:(id)a2;
- (void)endWithSucc:(id)a0 extraParams:(id)a1;
- (void)asyncHandle_callbackEvent:(id)a0 result:(id)a1;
- (void)handleGetClientInfoAction:(id)a0;
- (void)handleGetCurrentPkgInfo:(id)a0 params:(id)a1;
- (void)handleClearDebugPkgAction:(id)a0 params:(id)a1;
- (void)handleIsMB2:(id)a0;
- (void)handleDownloadAndSetDebugPkg:(id)a0 params:(id)a1;
- (void)handleGetGameLiveCurrentFrameSetDebugConfig:(id)a0;
- (void)handleSetGameLiveFrameSetDebugConfig:(id)a0 params:(id)a1;
- (void)handleRestartCurrentLiveRoom:(id)a0;
- (void)restartCurrentLiveRoom;

@end
