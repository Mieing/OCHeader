@interface BDPGameVideoAdPreloadConfig : NSObject

@property (nonatomic) long long loadToShowTimes;
@property (nonatomic) long long loadToShowTimeInterval;
@property (nonatomic) long long preloadAdValidPeriod;
@property (nonatomic) long long last10LoadShowTimes;
@property (nonatomic) long long currentCycleLastAdTimes;

- (void)parseWithJson:(id)a0;

@end
