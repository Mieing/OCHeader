@class NSString, DYRouterModel, NSDictionary, DYBindPhoneHelperInstance;

@interface DYPhoneBindForceBindLoginManager : NSObject <DYPhoneBindManagerProtocol>

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) unsigned long long platform;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (retain, nonatomic) DYBindPhoneHelperInstance *bindHelper;
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
- (void)requestSendCodeWithPhoneNumber:(id)a0 ticket:(id)a1 type:(long long)a2 completion:(id /* block */)a3;
- (void)handleBindConflictWithModel:(id)a0 ticket:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)setCancelBlock:(id /* block */)a0;
- (void)setFinishBlock:(id /* block */)a0;

@end
