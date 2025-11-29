@class NSString, MMAuthorizeScopeViewController;

@interface OpenSDKGetA8KeyHandler : BaseOpenSDKHandler <MMAuthorizeViewControllerDelegate, PBMessageObserverDelegate>

@property (copy, nonatomic) NSString *authUrl;
@property (retain, nonatomic) MMAuthorizeScopeViewController *scopeVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startHandler:(id)a0;
- (void)dealloc;
- (void)backTo3rdApp:(id)a0 errCode:(int)a1 errStr:(id)a2;
- (void)realHandleReqAfterermissionValidation;
- (void)getA8Key;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetA8KeyResp:(id)a0 EventID:(unsigned int)a1;
- (id)getExtTaransLinkParams;
- (void)onScopeViewControllerConfirm:(id)a0;
- (void)onScopeViewControllerClose:(id)a0;
- (void)onScopeViewControllerDeny:(id)a0;
- (void).cxx_destruct;

@end
