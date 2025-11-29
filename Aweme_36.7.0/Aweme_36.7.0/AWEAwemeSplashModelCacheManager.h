@class NSString, NSMutableDictionary;

@interface AWEAwemeSplashModelCacheManager : HTSService <AWEAwemeSplashModelCacheManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *splashModelCacheDictonary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearSplashModelCache;
- (void)splashWillAppearWithModel:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
