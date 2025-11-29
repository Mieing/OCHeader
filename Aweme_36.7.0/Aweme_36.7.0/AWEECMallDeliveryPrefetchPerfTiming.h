@interface AWEECMallDeliveryPrefetchPerfTiming : NSObject

@property (nonatomic) double taskStartTime;
@property (nonatomic) double redirectUrlStart;
@property (nonatomic) double redirectUrlEnd;
@property (nonatomic) double preloadGeckoStart;
@property (nonatomic) double preloadGeckoEnd;
@property (nonatomic) double prefetchApiStart;
@property (nonatomic) double prefetchApiEnd;
@property (nonatomic) double taskEndTime;

- (id)formatPerfTiming;

@end
