@interface CJPayOneKeyConfirmRequest : CJPayBaseRequest

+ (id)apiPath;
+ (id)p_buildRequestParams:(id)a0 withExtraParams:(id)a1;
+ (id)p_secureRequestParams:(id)a0;
+ (void)startWithOrderResponse:(id)a0 withExtraParams:(id)a1 completion:(id /* block */)a2;

@end
