@class NSMutableArray;

@interface AWELiveVideoPlayerAggNetworkSpeedModel : NSObject

@property (retain, nonatomic) NSMutableArray *networkSpeedArray;
@property (nonatomic) long long sumDataLenth;
@property (nonatomic) long long sumInterval;
@property (nonatomic) long long avgSpeed;
@property (nonatomic) double endTime;

- (void).cxx_destruct;
- (id)init;

@end
