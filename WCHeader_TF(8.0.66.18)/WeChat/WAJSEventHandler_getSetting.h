@class NSString;

@interface WAJSEventHandler_getSetting : WAJSEventHandler_BaseEvent <WAAppDetailInfoManagerExtension>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onGetAppAuthInfo:(id)a0 appid:(id)a1 errorCode:(int)a2;

@end
