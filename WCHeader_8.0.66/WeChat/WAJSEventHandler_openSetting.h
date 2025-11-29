@class NSString;

@interface WAJSEventHandler_openSetting : WAJSEventHandler_BaseEvent <WAAppAuthorizationDelegate>

@property (nonatomic) BOOL withSubscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onAppAuthorizationReturn:(id)a0 subscriptionsSettingModel:(id)a1;

@end
