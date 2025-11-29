@interface ACCQuickFlashDataHelper : NSObject

+ (void)addCachedKey:(id)a0;
+ (id)recommendBarShowWithConfigWhiteList;
+ (void)requestFlashTopicsWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)cacheKey:(id)a0 zipUri:(id)a1;
+ (void)fetchFullPageModelListWithPreload:(BOOL)a0 stickerId:(id)a1 needCallengeTag:(BOOL)a2 cursor:(long long)a3 completion:(id /* block */)a4 awemeModel:(id)a5;
+ (void)quickFlashUserStatusWithCompletion:(id /* block */)a0;
+ (void)quickFlashRedBagEffectsWithCompletion:(id /* block */)a0;
+ (void)quickFlashRedBagSettingsWithCompletion:(id /* block */)a0;
+ (BOOL)recommendBarShowWithConfig;
+ (BOOL)recommendBarShowSourceInWhiteList:(id)a0;
+ (void)clearCache;
+ (id)cachedKeys;
+ (id)cachedKey;

@end
