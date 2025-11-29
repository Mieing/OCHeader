@interface WAJSEventHandler_rewriteRoute : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)innerHandleJSEvent:(id)a0;
- (void)doRewriteRouteToUrl:(id)a0 onWebView:(id)a1 lastOpenType:(unsigned long long)a2;

@end
