@interface WebviewJSEventHandler_onWebPageUrlExposed : WebviewJSEventHandlerBase

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)tryPreloadVideoWithEvent:(id)a0;
- (void)tryCommonPrefetchWithEvent:(id)a0;

@end
