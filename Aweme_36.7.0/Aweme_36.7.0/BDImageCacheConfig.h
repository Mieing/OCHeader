@interface BDImageCacheConfig : NSObject <NSCopying>

@property (class, nonatomic) unsigned long long globalDiskDateType;

@property (nonatomic) long long enableLRUOptions;
@property (nonatomic) BOOL ignoreInterceptionOnce;
@property (nonatomic) BOOL clearMemoryOnMemoryWarning;
@property (nonatomic) BOOL clearMemoryWhenEnteringBackground;
@property (nonatomic) BOOL shouldUseWeakMemoryCache;
@property (nonatomic) unsigned long long memoryCountLimit;
@property (nonatomic) unsigned long long memorySizeLimit;
@property (nonatomic) unsigned long long singleImageMemorySizeLimit;
@property (nonatomic) unsigned long long memoryAgeLimit;
@property (nonatomic) double lruNewSubListRate;
@property (nonatomic) BOOL trimDiskWhenEnteringBackground;
@property (nonatomic) unsigned long long diskCountLimit;
@property (nonatomic) unsigned long long diskSizeLimit;
@property (nonatomic) unsigned long long diskAgeLimit;
@property (nonatomic) double diskTrimmingRate;
@property (nonatomic) double lruDiskTrimmingRate;
@property (nonatomic) double lruDiskSizeUpdatePeriod;
@property (nonatomic) BOOL shouldDisableiCloud;
@property (nonatomic) BOOL usingNewImageExtendCache;
@property (nonatomic) unsigned long long diskDateType;
@property (nonatomic) BOOL enableLRU;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
