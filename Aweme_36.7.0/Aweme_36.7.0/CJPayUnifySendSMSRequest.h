@interface CJPayUnifySendSMSRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startSendSMSWithBizContent:(id)a0 completion:(id /* block */)a1;
+ (id)p_buildRequestParamsWithBizContent:(id)a0;
+ (id)p_buildNewBizContentWithBizContent:(id)a0;

@end
