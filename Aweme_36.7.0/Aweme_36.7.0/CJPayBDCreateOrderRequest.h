@interface CJPayBDCreateOrderRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)p_buildRequestParamsWithAppId:(id)a0 merchantId:(id)a1 bizParams:(id)a2;
+ (id)p_buildBizParamsWithParams:(id)a0;
+ (void)startWithAppId:(id)a0 merchantId:(id)a1 bizParams:(id)a2 completion:(id /* block */)a3;

@end
