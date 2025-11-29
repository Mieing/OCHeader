@interface GlobalMetrics : NSObject

@property (nonatomic) long long cacheCount;
@property (nonatomic) unsigned long long dbFileSizeBytes;
@property (nonatomic) long long cacheTotalSizeBytes;
@property (nonatomic) BOOL isTriggerClean;
@property (nonatomic) unsigned int dbAge;

- (id)initWithCacheCount:(long long)a0 dbFileSizeBytes:(unsigned long long)a1 cacheTotalSizeBytes:(long long)a2 isTriggerClean:(BOOL)a3 dbAge:(unsigned int)a4;

@end
