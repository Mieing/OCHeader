@class NSDictionary;

@interface AWEMessageReachColdLaunchCacheModel : NSObject

@property (retain, nonatomic) NSDictionary *coldLaunchRecoveryDict;
@property (retain, nonatomic) NSDictionary *requestTimeMap;
@property (nonatomic) double globalLastRequestTime;

- (void).cxx_destruct;

@end
