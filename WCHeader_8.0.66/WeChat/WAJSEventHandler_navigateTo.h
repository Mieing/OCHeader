@class NSDictionary;

@interface WAJSEventHandler_navigateTo : WAJSEventHandler_BaseEvent

@property (retain, nonatomic) NSDictionary *singlePageData;

- (void)handleJSEvent:(id)a0;
- (void)innerHandleJSEvent:(id)a0;
- (void)navigateToURL:(id)a0 withAppID:(id)a1 webView:(id)a2;
- (BOOL)isNavigateToTabWithURL:(id)a0;
- (void).cxx_destruct;

@end
