@interface AWEPadNetworkService : NSObject

+ (id)pad_getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 monitorParams:(id)a3 completion:(id /* block */)a4;
+ (id)pad_postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 monitorParams:(id)a3 completion:(id /* block */)a4;

@end
