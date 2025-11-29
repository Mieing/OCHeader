@interface AWEInTodayPreAggregate : NSObject

+ (void)reportCancelDate;
+ (void)reportPermission;
+ (void)clearCachedExistDateList;
+ (id)cachedExistDateList;
+ (id)albumKeyPrefix;
+ (id)encodePastMemoryDayAlbumByAlbumKey:(id)a0;
+ (void)recordReportedDateList:(id)a0;
+ (id)cachedWillReportKey;
+ (id)encodeDateWith:(id)a0;
+ (id)cachedExistKey;
+ (void)reportAggregateAlbums:(id)a0 error:(id)a1;
+ (void)updatePreAggreatedWithAlbumKeys:(id)a0;
+ (BOOL)hasPreAggreatedWithAlbumKey:(id)a0;

@end
