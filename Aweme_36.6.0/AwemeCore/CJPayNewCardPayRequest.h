@interface CJPayNewCardPayRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startWithOrderResponse:(id)a0 withExtraParams:(id)a1 context:(id)a2 completion:(id /* block */)a3;
+ (id)p_secureRequestParams:(id)a0 context:(id)a1;
+ (id)buildRequestParams:(id)a0 withExtraParams:(id)a1 context:(id)a2;

@end
