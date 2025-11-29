@interface CJPayUnifyVerifySMSRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)pMemberSecureRequestParams:(id)a0 context:(id)a1;
+ (void)startVerifySMSWithBizContent:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)p_buildRequestParamsWithBizContent:(id)a0 context:(id)a1;
+ (id)p_buildNewBizContentWithBizContent:(id)a0 context:(id)a1;

@end
