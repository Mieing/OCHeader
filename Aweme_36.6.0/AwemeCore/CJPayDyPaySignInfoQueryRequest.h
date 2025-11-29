@interface CJPayDyPaySignInfoQueryRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startWithMerchantId:(id)a0 bizParams:(id)a1 completion:(id /* block */)a2;
+ (id)p_buildBizParamsWithParams:(id)a0;
+ (id)buildRequestParamsWithMerchantId:(id)a0 bizParams:(id)a1;

@end
