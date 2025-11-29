@class NSString, DYRouterModel, NSDictionary, DYBindPhoneHelperInstance;

@interface DYPhoneBindManager : NSObject <DYPhoneBindManagerProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) DYBindPhoneHelperInstance *bindHelper;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ finishBlock;
@property (retain, nonatomic) NSDictionary *bindConflictParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishBindPhoneWithPlatform:(unsigned long long)a0;
- (id)initWithEnterFrom:(id)a0 platform:(unsigned long long)a1;
- (id)initWithEnterFrom:(id)a0 platform:(unsigned long long)a1 routerModel:(id)a2;
- (long long)getVerifyCodeType;
- (void)authLoginSuccess;
- (void)authLoginFail;
- (void)requestBindPhoneNumber:(id)a0 code:(id)a1 ticket:(id)a2 completion:(id /* block */)a3;
- (void)requestSendCodeWithPhoneNumber:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void)requestSendVoiceCodeWithPhoneNumber:(id)a0 ticket:(id)a1 type:(long long)a2 completion:(id /* block */)a3;
- (void)cancelBindPhoneWithPlatform:(unsigned long long)a0 skipBlock:(id /* block */)a1;
- (void)requestSendCodeWithPhoneNumber:(id)a0 ticket:(id)a1 type:(long long)a2 completion:(id /* block */)a3;
- (void)requestBindSafePhoneNumber:(id)a0 code:(id)a1 ticket:(id)a2 needUpdateUser:(BOOL)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
