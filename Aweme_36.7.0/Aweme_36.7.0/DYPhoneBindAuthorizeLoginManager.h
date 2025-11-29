@class NSString, DYRouterModel, NSDictionary;

@interface DYPhoneBindAuthorizeLoginManager : NSObject <DYPhoneBindManagerProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *carrier;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (nonatomic) long long verifiedEnv;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) NSDictionary *bindConflictParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logWithEvent:(id)a0 params:(id)a1;
- (void)handleError:(id)a0 model:(id)a1 completion:(id /* block */)a2;
- (void)showCancelAuthAlert;
- (id)configNextURL:(id)a0;
- (void)showConflictH5Alert:(id)a0;
- (void)finishBindPhoneWithPlatform:(unsigned long long)a0;
- (id)initWithEnterFrom:(id)a0 platform:(unsigned long long)a1;
- (id)initWithEnterFrom:(id)a0 platform:(unsigned long long)a1 routerModel:(id)a2;
- (long long)getVerifyCodeType;
- (void)authLoginSuccess;
- (void)authLoginFail;
- (void)requestBindPhoneNumber:(id)a0 code:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;
- (void)requestSendCodeWithPhoneNumber:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)requestSendVoiceCodeWithPhoneNumber:(id)a0 ticket:(id)a1 type:(long long)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
