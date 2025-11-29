@interface BDImageDiskCacheClearInfo : NSObject

@property (nonatomic) unsigned long long clearStatus;
@property (nonatomic) unsigned long long currentDiskSizeLimit;
@property (nonatomic) unsigned long long currentDiskAgeLimit;
@property (nonatomic) double lastAccessTimeInterval;
@property (nonatomic) double farthestAccessTimeInterval;
@property (nonatomic) unsigned long long currentDiskCacheSize;

@end
