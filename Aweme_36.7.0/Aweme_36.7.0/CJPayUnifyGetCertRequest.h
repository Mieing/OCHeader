@interface CJPayUnifyGetCertRequest : CJPayUnifyCertBaseRequest

+ (id)apiPath;
+ (void)getCertWithBizContent:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)p_buildRequestParams:(id)a0 context:(id)a1;
+ (id)p_secureRequestParamsWithBizContent:(id)a0;

@end
