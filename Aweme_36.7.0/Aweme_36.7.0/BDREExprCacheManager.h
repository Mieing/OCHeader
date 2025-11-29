@class NSCache;

@interface BDREExprCacheManager : NSObject

@property (retain, nonatomic) NSCache *exprCache;

+ (id)sharedManager;

- (id)findCacheForExpr:(id)a0;
- (void)addCache:(id)a0 forExpr:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
