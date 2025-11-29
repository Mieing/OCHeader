@class NSString;

@interface AWERecordBeautyCacheManager : NSObject

@property (copy, nonatomic) NSString *cacheSuffixKey;
@property (copy, nonatomic) NSString *contentCacheKey;
@property (copy, nonatomic) NSString *defaultUserIdCacheKey;

+ (long long)lastUsedGender;
+ (void)saveLastUsedGender:(long long)a0;

- (id)defaultUserId;
- (void)saveCacheWithUid:(id)a0 gender:(long long)a1 dict:(id)a2;
- (id)generateStatusDictionaryForCacheWithState:(id)a0;
- (id)getCacheDictWithUid:(id)a0 gender:(long long)a1;
- (void)removeCacheWithUid:(id)a0 gender:(long long)a1;
- (void)saveCacheWithUid:(id)a0 gender:(long long)a1 beautyState:(id)a2;
- (void)saveCacheWithUid:(id)a0 genders:(id)a1 beautyState:(id)a2;
- (BOOL)hasCacheForUid:(id)a0 gender:(long long)a1;
- (BOOL)isCachedBeautyOnForGender:(long long)a0;
- (id)initWithCacheSuffixKey:(id)a0;
- (void)trackerEventName:(id)a0 uid:(id)a1 dict:(id)a2;
- (BOOL)shouldFixStoryLastUsedBeautyMemory;
- (BOOL)isEnableTrackerStatus;
- (id)itemsWithInfo:(id)a0;
- (id)trackerBaseEventWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
