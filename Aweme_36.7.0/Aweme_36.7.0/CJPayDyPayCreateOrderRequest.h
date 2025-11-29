@interface CJPayDyPayCreateOrderRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startWithMerchantId:(id)a0 bizParams:(id)a1 completion:(id /* block */)a2;
+ (id)p_buildBizParamsWithParams:(id)a0;
+ (id)buildRequestParamsWithMerchantId:(id)a0 bizParams:(id)a1;
+ (void)startWithMerchantId:(id)a0 bizParams:(id)a1 highPriority:(BOOL)a2 completion:(id /* block */)a3;

@end
