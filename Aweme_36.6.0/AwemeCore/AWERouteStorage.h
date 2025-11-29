@class NSLock, NSMutableDictionary;

@interface AWERouteStorage : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *routeMap;

- (id)registerURLString:(id)a0;
- (id)parseRouteForURL:(id)a0 errorMessage:(id *)a1;
- (id)_routeForScheme:(id)a0;
- (id)_routeInfoMapForScheme:(id)a0;
- (id)_routeDictionaryForScheme:(id)a0 createIfNeeded:(BOOL)a1;
- (id)_routeInfoMapForRoutes:(id)a0;
- (void)removeURLForScheme:(id)a0;
- (void)removeAllURL;
- (void).cxx_destruct;
- (id)init;
- (id)allRouteInfos;

@end
