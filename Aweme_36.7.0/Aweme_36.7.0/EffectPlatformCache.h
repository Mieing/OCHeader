@class NSString;
@protocol EffectPlatformCacheService;

@interface EffectPlatformCache : NSObject <EffectPlatformCacheService>

@property (copy, nonatomic) NSString *accessKey;
@property (retain, nonatomic) id<EffectPlatformCacheService> jsonCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearMemory;
- (void)setJson:(id)a0 object:(id)a1 forKey:(id)a2 completion:(id /* block */)a3;
- (void)setJson:(id)a0 newResponse:(id)a1 forKey:(id)a2 completion:(id /* block */)a3;
- (id)effectWithKey:(id)a0;
- (id)newResponseWithKey:(id)a0;
- (void)setEnableMemoryCache:(BOOL)a0;
- (void)clearJsonAndObjectForKey:(id)a0;
- (void)setJson:(id)a0 object:(id)a1 forKey:(id)a2;
- (void)setJson:(id)a0 newResponse:(id)a1 forKey:(id)a2;
- (void)setJson:(id)a0 effect:(id)a1 forKey:(id)a2;
- (id)modelDictWithKey:(id)a0;
- (void)setJson:(id)a0 forKey:(id)a1;
- (void)setJsonVersion:(id)a0 withKey:(id)a1;
- (id)getJsonVersionWithKey:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithAccessKey:(id)a0;
- (id)objectWithKey:(id)a0;

@end
