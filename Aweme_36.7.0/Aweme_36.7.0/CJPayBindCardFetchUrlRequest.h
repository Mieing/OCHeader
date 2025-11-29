@interface CJPayBindCardFetchUrlRequest : CJPayBaseRequest

+ (void)p_trackerWithEventName:(id)a0 params:(id)a1;
+ (id)p_buildParamWithAppId:(id)a0 merchantId:(id)a1 bizParam:(id)a2;
+ (void)p_cacheBankListSignature:(id)a0 bankListSignature:(id)a1;
+ (void)startWithAppId:(id)a0 merchantId:(id)a1 bizParam:(id)a2 completion:(id /* block */)a3;

@end
