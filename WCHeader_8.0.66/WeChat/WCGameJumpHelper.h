@class NSString;

@interface WCGameJumpHelper : MMUserService <MMServiceProtocol, IWCBusinessJumpExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)processTranslateResultWithPath:(id)a0 queryDict:(id)a1 parentController:(id)a2 originUrl:(id)a3 translateInfo:(id)a4 jumpController:(id)a5;

@end
