@interface CJPayUnionBindCardSignRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startRequestWithAppId:(id)a0 merchantId:(id)a1 bizContentParam:(id)a2 completion:(id /* block */)a3;
+ (id)buildParamsWithAppId:(id)a0 merchantId:(id)a1 bizContentParam:(id)a2;

@end
