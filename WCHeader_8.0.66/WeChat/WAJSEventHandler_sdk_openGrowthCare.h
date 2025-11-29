@class NSString;

@interface WAJSEventHandler_sdk_openGrowthCare : WAJSEventHandler_BaseEvent <MMWebViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (id)genWebViewController:(id)a0;
- (void)webViewReturn:(id)a0;

@end
