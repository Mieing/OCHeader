@interface CJPayMemberSignRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startWithBDPayVerifySMSBaseParam:(id)a0 bizParam:(id)a1 completion:(id /* block */)a2;
+ (id)buildRequestParamsWithULBDPayBaseParam:(id)a0 bizParam:(id)a1;

@end
