@interface WAJSEventHandler_navigateBackNative : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (void)navigateBackToNative:(id)a0;
- (void)jumpToMiniAppIfNeeded:(id)a0;
- (id)getFullHtmlSuffixRelativeURL:(id)a0;

@end
