@interface AWEEcomSearchMiddlePageBFFPrefetchStrategy : NSObject

+ (BOOL)useBffStreamPrefetch;
+ (BOOL)useBffPrefetch;

- (id)requestConfig;
- (id)commonParams:(id)a0;
- (id)buildRequestParams:(id)a0;
- (id)parsePath:(id)a0 withJson:(id)a1;
- (id)getNextPath:(id)a0;
- (id)getNextJson:(id)a0;
- (id)transToString:(id)a0;
- (id)buildResponseParams:(id)a0 error:(id)a1 request:(id)a2 performance:(id)a3;

@end
