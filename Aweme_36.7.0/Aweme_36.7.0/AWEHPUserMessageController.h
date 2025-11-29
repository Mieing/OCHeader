@class NSString;

@interface AWEHPUserMessageController : AWEBaseController <AWEUserMessage, HTSAccountMessage>

@property (nonatomic) BOOL processingLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hpWillStartLogin;
- (void)hpDidCancelLogin;
- (void)hpDidLoginFailed;
- (void)hpWillLoginAtPlatform:(unsigned long long)a0;
- (void)hpDidFinishBind:(BOOL)a0 platform:(unsigned long long)a1 error:(id)a2;
- (void)hpDidHandleFinishLogin;
- (void)hpDidHandleFinishLogout;
- (void)hpDidHandleFinishSwitchAccount;
- (void)followYellowDotRefactorHideYellowDotForConcernTab;

@end
