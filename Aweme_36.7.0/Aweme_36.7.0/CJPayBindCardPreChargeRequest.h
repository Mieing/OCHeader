@interface CJPayBindCardPreChargeRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startWithAppId:(id)a0 merchantId:(id)a1 bizParams:(id)a2 completion:(id /* block */)a3;
+ (id)p_buildParamWithAppId:(id)a0 merchantId:(id)a1 bizParams:(id)a2;

@end
