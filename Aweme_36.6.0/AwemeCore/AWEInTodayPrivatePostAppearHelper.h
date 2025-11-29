@interface AWEInTodayPrivatePostAppearHelper : NSObject

+ (BOOL)hasEnterInToday;
+ (BOOL)hasAuthorizationAggregatePhotoLibrary;
+ (BOOL)shieldedInTodayEntranceInPrivateTab;
+ (void)updateInTodayCoverTypeInPrivateTab:(unsigned long long)a0;
+ (void)recordEnterPlayer;
+ (id)appendUserIdWithCacheKey:(id)a0;
+ (void)cacheInTodayRequestDataWithCoverId:(id)a0 coverType:(unsigned long long)a1 schema:(id)a2;
+ (void)cacheInTodayDate;
+ (id)getCachedInTodayRequestData;
+ (BOOL)hasRequestInToday;
+ (BOOL)needUpdateInToday;

@end
