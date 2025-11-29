@class NSString, NSMutableDictionary, NSArray;

@interface ZOAUModRouter : NSObject

@property (retain, nonatomic) NSMutableDictionary *routes;
@property (copy, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSArray *supportedSchemes;

+ (id)_extractRouteScheme:(id)a0;
+ (id)_routeByRemovingScheme:(id)a0;
+ (void)addRoute:(id)a0 handler:(id /* block */)a1;
+ (void)addRoute:(id)a0 objectClass:(Class)a1 setterSelector:(id)a2;
+ (BOOL)canMatch:(id)a0;
+ (BOOL)checkSupportedScheme:(id)a0;
+ (id)defaultRouter;
+ (id)match:(id)a0 parameters:(id)a1;
+ (void)match:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
+ (void)removeRoute:(id)a0;
+ (id)routesForScheme:(id)a0;

- (id)_paramsInRoute:(id)a0;
- (id)_pathComponentsFromRoute:(id)a0;
- (id)_subRoutesToRoute:(id)a0;
- (void)addRoute:(id)a0 handler:(id /* block */)a1;
- (void)addRoute:(id)a0 objectClass:(Class)a1 setterSelector:(id)a2;
- (BOOL)canMatch:(id)a0;
- (id)match:(id)a0 parameters:(id)a1;
- (void)match:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void)removeRoute:(id)a0;
- (void).cxx_destruct;

@end
