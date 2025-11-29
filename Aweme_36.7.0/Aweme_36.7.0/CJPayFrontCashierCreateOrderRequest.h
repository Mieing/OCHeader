@interface CJPayFrontCashierCreateOrderRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)p_buildRequestParams:(id)a0 bizContnetParams:(id)a1;
+ (void)startRequestWithAppid:(id)a0 merchantId:(id)a1 bizContentParams:(id)a2 completion:(id /* block */)a3;

@end
