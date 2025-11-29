@interface CJPayMemberSendSMSRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startWithBDPaySendSMSBaseParam:(id)a0 bizParam:(id)a1 completion:(id /* block */)a2;
+ (void)startWithBDPaySendSMSBaseParam:(id)a0 bizParam:(id)a1 context:(id)a2 completion:(id /* block */)a3;
+ (id)buildRequestParamsWithULBDPaySendSMSBaseParam:(id)a0 bizParam:(id)a1 context:(id)a2;

@end
