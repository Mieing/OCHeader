@class NSString, APBToygerBioBisConfigManager;

@interface DTFAuthRPC : NSObject <DTFRPCProxyProtocol>

@property (retain, nonatomic) APBToygerBioBisConfigManager *protocolModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)zimInit:(id)a0 completionBlock:(id /* block */)a1;
- (void)zimValidate:(id)a0 completionBlock:(id /* block */)a1;
- (void)requestSMSVerifyCode:(id)a0 completionBlock:(id /* block */)a1;
- (void)checkSMSCode:(id)a0 completionBlock:(id /* block */)a1;
- (void)zimOCRIdentify:(id)a0 completionBlock:(id /* block */)a1;
- (void)zimFileUpload:(id)a0 completionBlock:(id /* block */)a1;
- (void)request:(id)a0 withConfig:(id)a1 completionBlock:(id /* block */)a2;
- (id)getOverRateLimitResultWithDict:(id)a0;
- (void).cxx_destruct;

@end
