@interface IESECBuyNowNetWorkService : NSObject

+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)requestWithURLString:(id)a0 params:(id)a1 headers:(id)a2 usePOST:(BOOL)a3 modelClass:(Class)a4 completion:(id /* block */)a5;
+ (id)getLogIdWithResponse:(id)a0 andError:(id)a1;
+ (id)postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3 metricsBlock:(id /* block */)a4;
+ (id)getAPIExtraParams;
+ (id)postRequestWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;

@end
