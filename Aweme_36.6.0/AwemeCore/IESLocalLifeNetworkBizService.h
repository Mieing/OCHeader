@class NSString;

@interface IESLocalLifeNetworkBizService : HTSService <IESLocalLifeNetworkBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commonParams;
+ (id)requestWithRequest:(id)a0;
+ (id)postWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)postWithURLString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)getWithURLString:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (void)downloadWithRequest:(id)a0;
+ (id)getWithURLString:(id)a0 params:(id)a1 needCommonParams:(BOOL)a2 completion:(id /* block */)a3;
+ (id)getWithURLString:(id)a0 params:(id)a1 modelClass:(Class)a2 responseBlock:(id /* block */)a3 completionBlock:(id /* block */)a4;
+ (id)postWithURLString:(id)a0 params:(id)a1 needCommonParams:(BOOL)a2 completion:(id /* block */)a3;
+ (id)getWithURLString:(id)a0 params:(id)a1 responseBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
+ (id)postWithURLString:(id)a0 params:(id)a1 responseBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
+ (id)getWithURLString:(id)a0 params:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
+ (id)getWithURLString:(id)a0 params:(id)a1 timeout:(double)a2 completion:(id /* block */)a3;
+ (id)getWithURLString:(id)a0 params:(id)a1 headers:(id)a2 timeout:(double)a3 completion:(id /* block */)a4;
+ (id)postWithURLString:(id)a0 params:(id)a1 headers:(id)a2 completion:(id /* block */)a3;
+ (id)commonHeaderParams;
+ (id)postWithURLString:(id)a0 params:(id)a1 headerField:(id)a2 modelClass:(Class)a3 completion:(id /* block */)a4;
+ (void)downloadWithURLString:(id)a0 targetPath:(id)a1 completion:(id /* block */)a2;


@end
