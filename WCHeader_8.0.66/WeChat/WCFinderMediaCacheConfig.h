@interface WCFinderMediaCacheConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long configId;
@property (nonatomic) unsigned long long costLimit;
@property (nonatomic) unsigned long long countLimit;
@property (nonatomic) double lfuRatio;

@end
