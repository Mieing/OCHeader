@interface CJPayDyPaySignConfirmRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startWithMerchantId:(id)a0 appId:(id)a1 bizParams:(id)a2 completion:(id /* block */)a3;
+ (id)p_buildBizParamsWithParams:(id)a0;
+ (id)buildRequestParamsWithMerchantId:(id)a0 appId:(id)a1 bizParams:(id)a2;

@end
