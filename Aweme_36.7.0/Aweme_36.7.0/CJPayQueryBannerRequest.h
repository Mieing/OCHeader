@interface CJPayQueryBannerRequest : CJPayBaseRequest

+ (void)startWithAppId:(id)a0 merchantId:(id)a1 bizParam:(id)a2 completion:(id /* block */)a3;
+ (id)p_buildRequestParamsWithAppId:(id)a0 merchntId:(id)a1 bizParam:(id)a2;
+ (id)p_buildBizParamsWithAppId:(id)a0 merchantId:(id)a1;

@end
