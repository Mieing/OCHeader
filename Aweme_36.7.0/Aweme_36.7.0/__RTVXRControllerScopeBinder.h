@class NSMutableDictionary, NSMapTable, NSString, NSMutableArray;

@interface __RTVXRControllerScopeBinder : NSObject <RTVXRControllerScopeBinder>

@property (readonly, nonatomic) NSMutableDictionary *keyBindingMapper;
@property (readonly, nonatomic) NSMutableDictionary *classBindingMapper;
@property (readonly, nonatomic) NSMutableDictionary *scopeMapper;
@property (readonly, nonatomic) NSMutableDictionary *controllersCache;
@property (readonly, nonatomic) NSMapTable *scopeDefinedControllersCache;
@property (readonly, nonatomic) NSMutableArray *needCacheControllerKeys;
@property (readonly, copy, nonatomic) NSString *scopeKey;
@property (readonly, copy, nonatomic) NSString *parentScopeKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createControllerBinderForScopeKey:(id)a0 parentScopeKey:(id)a1 injector:(id)a2;

- (void)rxAwakeFromPropertyInjection;
- (id)__hashKey:(id)a0;
- (id)controllerForKey:(id)a0;
- (BOOL)needCacheControllerForKey:(id)a0;
- (id)injectorKeyForControllerKey:(id)a0;
- (void)cacheController:(id)a0 key:(id)a1;
- (id)__allCachedControllers;
- (id)initWithScopeKey:(id)a0 parentScopeKey:(id)a1;
- (long long)__scopeWithKey:(id)a0;
- (id)__injectorKeyForKey:(id)a0 defaultValue:(id)a1;
- (void)bindControllerKey:(id)a0 scope:(long long)a1;
- (void)bindControllerKey:(id)a0 toClass:(Class)a1;
- (void)bindControllerKey:(id)a0 toKey:(id)a1;
- (void)bindProtocol:(id)a0 toProtocol:(id)a1;
- (void)bindProtocol:(id)a0 toClass:(Class)a1;
- (void)bindProtocol:(id)a0 scope:(long long)a1;
- (void)registerCacheControllerKey:(id)a0;
- (void)removeCachedControllerForKey:(id)a0;
- (void)removeAllCached;
- (void).cxx_destruct;

@end
