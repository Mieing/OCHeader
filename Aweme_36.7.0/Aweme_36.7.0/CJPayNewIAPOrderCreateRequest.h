@interface CJPayNewIAPOrderCreateRequest : CJPayBaseRequest

+ (id)deskServerUrlString;
+ (id)p_buildServerUrl;
+ (void)startRequest:(id)a0 params:(id)a1 exts:(id)a2 completion:(id /* block */)a3;
+ (id)buildParams:(id)a0 params:(id)a1 extParams:(id)a2;

@end
