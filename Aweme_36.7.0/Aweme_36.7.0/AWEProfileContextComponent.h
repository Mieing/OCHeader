@class NSString, NSMutableDictionary;

@interface AWEProfileContextComponent : AWEProfileBaseComponent <AWEUserMessage, AWEProfileContextProtocol>

@property (retain, nonatomic) NSMutableDictionary *noNeedParsedParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (id)noNeedParsedParamsToServer;
- (void)clearContextWhileSwitchingAccount;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)onInit;

@end
