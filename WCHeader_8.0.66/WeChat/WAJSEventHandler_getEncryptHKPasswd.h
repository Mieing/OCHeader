@class NSString;

@interface WAJSEventHandler_getEncryptHKPasswd : WAJSEventHandler_BaseEvent <WCPayJSGetEncryptHKPasswdLogicDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)onGetEncryptHKPasswdSucc:(id)a0 signature:(id)a1;
- (void)onGetEncryptHKPasswdFail:(BOOL)a0;

@end
