@interface SECRouterTessaModule : NSObject

+ (void)startWithConfig:(id)a0;
+ (id)tessaRepo;
+ (void)markRouterTessaFeature:(id)a0 fromLog:(id)a1;
+ (BOOL)routerTessaEnabled:(id)a0;
+ (BOOL)hyTessaEnabled:(id)a0;
+ (void)reset;

@end
