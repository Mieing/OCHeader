@class NSString, NunkiFactorCache;

@interface NunkiFactorCenter : NSObject <NunkiFactorCenterService>

@property (retain, nonatomic) NunkiFactorCache *factorCacheManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllFactorsCache;
- (id)factorWithKey:(id)a0 ext:(id)a1 useCache:(BOOL)a2;
- (id)__fetchFactorWithKey:(id)a0 ext:(id)a1;
- (id)factorWithKey:(id)a0;
- (void)addFactorObserver:(id)a0 forKeys:(id)a1;
- (void)removeFactorObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
