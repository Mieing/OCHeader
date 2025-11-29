@class NSDictionary, AWECarrierLoginPhoneModel;

@interface AWEUserLoginCarrierDataController : AWEUserLoginBaseDataController

@property (nonatomic) long long maskLoginDuration;
@property (nonatomic) long long requestTokenDuration;
@property (nonatomic) double carrierLoginStart;
@property (nonatomic) long long tokenLoginDuration;
@property (retain, nonatomic) AWECarrierLoginPhoneModel *carrierPhoneModel;
@property (nonatomic) BOOL isTokenLogin;
@property (retain, nonatomic) NSDictionary *loginResultMonitorDict;

+ (Class)aAWEUserModuleServiceDOUYINDSAdapterClass;

- (id)aAWEUserModuleServiceDOUYINDSAdapter;
- (void)carrierLoginWithRequest:(id)a0;
- (void)updateIsTokenLogin:(BOOL)a0;
- (void)requestTokenDictOfCarrier;
- (void)handleLoginSuccessAccount:(id)a0 ticket:(id)a1 nonageVerifyEnable:(BOOL)a2;
- (void)handleLoginError:(id)a0 ticket:(id)a1;
- (void)requestQuickLoginWithToken:(id)a0;
- (void)trackLoginDurationWithStatus:(BOOL)a0;
- (void)requestLoginWithModel:(id)a0;
- (void).cxx_destruct;

@end
