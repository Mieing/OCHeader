@interface CJPayCreateOrderByTokenRequest : CJPayBaseRequest

+ (void)startWithBizParams:(id)a0 bizUrl:(id)a1 highPriority:(BOOL)a2 completion:(id /* block */)a3;
+ (void)p_setTrackerCommonParams:(id)a0;
+ (id)buildRequestParamsWithBizParams:(id)a0 bizUrl:(id)a1;
+ (void)startWithBizParams:(id)a0 bizUrl:(id)a1 completion:(id /* block */)a2;

@end
