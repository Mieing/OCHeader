@interface WAJSEventHandler_redirectTo : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)redirectToURL:(id)a0 withAppID:(id)a1 webView:(id)a2;
- (BOOL)isRedirectToTabWithURL:(id)a0;

@end
