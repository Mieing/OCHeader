@interface AWEEcomSearchMiddlePageNewerPrefetchStrategy : NSObject

+ (BOOL)useNewerPrefetch;

- (id)buildRequestParams:(id)a0;
- (id)buildResponseParams:(id)a0 error:(id)a1 request:(id)a2 performance:(id)a3;

@end
