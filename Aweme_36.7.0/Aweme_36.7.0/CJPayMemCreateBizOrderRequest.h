@interface CJPayMemCreateBizOrderRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startWithBizParams:(id)a0 completion:(id /* block */)a1;
+ (void)p_trackerWithEventName:(id)a0 params:(id)a1;
+ (id)p_buildRequestParamsWithBizParams:(id)a0;
+ (void)p_cacheBankListSignature:(id)a0 bankListSignature:(id)a1;

@end
