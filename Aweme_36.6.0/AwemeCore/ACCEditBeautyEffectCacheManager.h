@interface ACCEditBeautyEffectCacheManager : NSObject

- (id)defaultUserId;
- (void)saveCacheWithUid:(id)a0 gender:(long long)a1 dict:(id)a2;
- (id)generateStatusDictionaryForCacheWithState:(id)a0;
- (id)getCacheDictWithUid:(id)a0 gender:(long long)a1;
- (void)removeCacheWithUid:(id)a0 gender:(long long)a1;
- (void)saveCacheWithUid:(id)a0 gender:(long long)a1 beautyState:(id)a2;
- (void)saveCacheWithUid:(id)a0 genders:(id)a1 beautyState:(id)a2;
- (BOOL)hasCacheForUid:(id)a0 gender:(long long)a1;
- (BOOL)isCachedBeautyOnForGender:(long long)a0;
- (long long)lastUsedGender;
- (void)saveLastUsedGender:(long long)a0;
- (void)markAlgorithmDetectGender:(long long)a0;
- (long long)lastAlgorithmDetectGender;

@end
