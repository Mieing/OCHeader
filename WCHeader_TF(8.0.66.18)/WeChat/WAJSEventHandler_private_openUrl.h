@class NSString;

@interface WAJSEventHandler_private_openUrl : WAJSEventHandler_BaseEvent <MMWebViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (id)webVCDelegate;
- (void)webViewReturn:(id)a0;

@end
