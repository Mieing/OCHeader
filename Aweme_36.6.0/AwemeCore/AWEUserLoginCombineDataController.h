@class NSDictionary;

@interface AWEUserLoginCombineDataController : AWEUserLoginBaseDataController

@property (retain, nonatomic) NSDictionary *loginResultMonitorDict;
@property (nonatomic) double complexLoginDuration;

- (void)addCarrierParamsWithRequest:(id)a0;
- (void)p_jumpToAuthUser:(id)a0 completion:(id /* block */)a1;
- (void)handleLoginError:(id)a0 user:(id)a1 response:(id)a2 ticketModel:(id)a3 fromShared:(BOOL)a4;
- (void)handleLoginSuccessAccount:(id)a0 user:(id)a1;
- (BOOL)isSpecialErrorHandled:(id)a0 user:(id)a1 ticketModel:(id)a2 fromShared:(BOOL)a3;
- (void)sendCodeWithSecUID:(id)a0 response:(id)a1;
- (void)requestLoginWithUser:(id)a0 loginType:(id)a1;
- (void).cxx_destruct;

@end
