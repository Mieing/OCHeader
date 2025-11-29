@interface AWELiteNetworkService : NSObject

+ (void)newPostWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)newGetWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 headerField:(id)a3 completion:(id /* block */)a4;
+ (void)newRequestWithURLString:(id)a0 params:(id)a1 usePost:(BOOL)a2 useJsonType:(BOOL)a3 modelClass:(Class)a4 headerField:(id)a5 completion:(id /* block */)a6;
+ (void)trackNetworkResponseWithURL:(id)a0 errorCode:(id)a1 reason:(id)a2;
+ (void)newGetWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)newPostWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 headerField:(id)a3 completion:(id /* block */)a4;
+ (void)newPostWithURLString:(id)a0 params:(id)a1 useJsonType:(BOOL)a2 modelClass:(Class)a3 completion:(id /* block */)a4;

@end
