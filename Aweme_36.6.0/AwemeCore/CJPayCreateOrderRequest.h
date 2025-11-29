@interface CJPayCreateOrderRequest : CJPayBaseRequest

+ (void)p_setTrackerCommonParams:(id)a0;
+ (id)buildRequestParamsWithBizParams:(id)a0 bizUrl:(id)a1;
+ (void)startWithBizParams:(id)a0 bizUrl:(id)a1 completion:(id /* block */)a2;
+ (void)startWithBizParams:(id)a0 bizUrl:(id)a1 papiId:(id)a2 completion:(id /* block */)a3;
+ (id)buildRequestParamsWithBizParams:(id)a0 papiId:(id)a1 bizUrl:(id)a2;

@end
