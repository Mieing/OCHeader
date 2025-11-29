@class NSString;

@interface WAJSEventHandler_phoneBindCardVerifySms : WAJSEventHandler_BaseEvent <WXPLiteAppModuleEventCallback>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onEventResponse:(id)a0 event:(id)a1 data:(id)a2 callbackId:(long long)a3;

@end
