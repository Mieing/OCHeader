@class NSString;

@interface AWEFCUserMessageController : AWEBaseController <AWEUserMessage, HTSAccountMessage>

@property (nonatomic) BOOL processingLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)willStartLogin;
- (void)didCancelLogin;
- (void)didLoginFailed;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)willLoginAtPlatform:(unsigned long long)a0;
- (void)didFinishBind:(BOOL)a0 platform:(unsigned long long)a1 error:(id)a2;
- (void)didFinishSwitchAccount;
- (void)followYellowDotRefactorHideYellowDotForConcernTab;
- (void)viewDidLoad;
- (void)dealloc;

@end
