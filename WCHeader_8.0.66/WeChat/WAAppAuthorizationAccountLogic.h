@class NSString;

@interface WAAppAuthorizationAccountLogic : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *scopeKey;

- (id)initWithAppId:(id)a0 scopeKey:(id)a1;
- (void)requestSwitchAuthState:(unsigned int)a0 accountId:(id)a1 completeAction:(id /* block */)a2;
- (void)requestDeleteAcctountById:(id)a0 completeAction:(id /* block */)a1;
- (void).cxx_destruct;

@end
