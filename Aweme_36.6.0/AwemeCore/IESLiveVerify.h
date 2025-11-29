@class HTSLiveApi, NSString;
@protocol IESLiveVerifyConfig;

@interface IESLiveVerify : NSObject <IESLiveVerifyAdapter>

@property (retain, nonatomic) HTSLiveApi *clientApi;
@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkVerfyWithType:(unsigned long long)a0 businessParamsBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)arouseNewWithdrawIdentify;
- (void)p_requestVerifyResultWithBusinessParamsBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)getLiveCertificationStatusWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
