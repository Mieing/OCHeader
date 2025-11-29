@interface CJPayCreditSignPageQueryRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startWithMerchantId:(id)a0 bizParams:(id)a1 completion:(id /* block */)a2;
+ (id)buildRequestParamsWithMerchantId:(id)a0 bizParams:(id)a1;
+ (id)p_riskParams;

@end
