@interface AWEComplianceNetworkService : NSObject

+ (id)postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)postWithURLString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)getWithURLString:(id)a0 params:(id)a1 headerField:(id)a2 modelClass:(Class)a3 completion:(id /* block */)a4;
+ (id /* block */)completionBlock:(id /* block */)a0 urlPath:(id)a1 extra:(id)a2;
+ (id)networkType;

@end
