@class NSDictionary;

@interface BDPHeartbeatTrackerConfig : NSObject

@property (nonatomic) double interval;
@property (retain, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;
- (id)init;

@end
