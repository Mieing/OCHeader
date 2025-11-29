@class NSMutableArray;

@interface AWESearchScanCachalotCacheController : NSObject

@property (retain, nonatomic) NSMutableArray *cacheArray;
@property (nonatomic) unsigned long long cacheStrategy;
@property (nonatomic) long long VMCacheThreshold;
@property (nonatomic) long long VMPreloadCount;
@property (nonatomic) long long forceDeleteThreshold;

- (void)setupInitialConfig;
- (void).cxx_destruct;
- (id)init;

@end
