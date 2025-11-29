@class NSTimer, NSDictionary;

@interface BDPHeartbeatTrackerParams : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double interval;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long order;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
