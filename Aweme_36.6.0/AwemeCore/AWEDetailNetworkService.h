@interface AWEDetailNetworkService : NSObject

+ (void)clearNetworkRequestCacheForKey:(id)a0;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 cacheStrategy:(id)a3 combineStrategy:(unsigned long long)a4 completion:(id /* block */)a5;
+ (id)combineSameGetRequestWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 cacheStrategy:(id)a3 completion:(id /* block */)a4;
+ (id)disableCombineGetWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 cacheStrategy:(id)a3 completion:(id /* block */)a4;
+ (id)cacheKeyFromURLString:(id)a0 params:(id)a1;

@end
