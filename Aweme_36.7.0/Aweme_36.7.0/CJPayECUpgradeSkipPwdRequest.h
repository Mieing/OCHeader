@interface CJPayECUpgradeSkipPwdRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)p_buildRequestParamsWithOrderResponse:(id)a0 bizParams:(id)a1;
+ (id)p_buildBizParamsWithOrderResponse:(id)a0 params:(id)a1;
+ (void)startWithUpgradeResponse:(id)a0 bizParams:(id)a1 completion:(id /* block */)a2;

@end
