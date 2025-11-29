@class NSMutableDictionary, NSDictionary, NSPointerArray, NSString;

@interface BDConfigCenter : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (copy, nonatomic) id /* block */ mockImpl;
@property (copy) NSDictionary *allConfigs;
@property (retain, nonatomic) NSMutableDictionary *memoryCache;
@property (retain, nonatomic) NSPointerArray *observers;
@property (copy, nonatomic) NSString *diskCachePath;
@property (copy, nonatomic) NSString *keyPathSeparator;
@property (retain, nonatomic) NSMutableDictionary *configsNetworkImpls;

+ (id)defaultCenter;

- (void)updateConfigWithDomain:(id)a0 configs:(id)a1 increment:(BOOL)a2;
- (id)getConfigValueWithKeyPath:(id)a0 fromConfigs:(id)a1;
- (void)fetchConfigsWithDomain:(id)a0;
- (void)updateConfigWithDomain:(id)a0 configs:(id)a1;
- (id)configsWithDomain:(id)a0;
- (id)getConfigRemoteValueWithDomain:(id)a0 keyPath:(id)a1;
- (id)addConfigObserverWithDomain:(id)a0 keyPath:(id)a1 handler:(id /* block */)a2;
- (void)addConfigNetworkImplWithDomain:(id)a0 networkImpl:(id /* block */)a1;
- (void)fetchConfigs;
- (id)configMemoryCacheWithDomain:(id)a0;
- (id)addConfigObserverWithKeyPath:(id)a0 handler:(id /* block */)a1;
- (id)getConfigValueWithDomain:(id)a0 keyPath:(id)a1 defaultValue:(id)a2 stable:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (void)removeObserver:(id)a0;

@end
