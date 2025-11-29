@interface CJPayMemRecogFaceRequest : CJPayBaseRequest

+ (id)apiPath;
+ (void)startRequestWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)p_secureRequestParams:(id)a0 context:(id)a1;
+ (void)startRequestWithParams:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (id)p_buildRequestParamsWithBizParams:(id)a0 context:(id)a1;

@end
