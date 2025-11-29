@interface CJPayGetVerifyInfoRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)p_buildRequestParamsWithAppId:(id)a0 merchantId:(id)a1 bizParams:(id)a2;
+ (id)p_buildBizParamsWithParams:(id)a0;
+ (void)startVerifyInfoRequestWithAppid:(id)a0 merchantId:(id)a1 bizContentParams:(id)a2 completionBlock:(id /* block */)a3;

@end
