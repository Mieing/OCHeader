@class BDPHeartbeatTrackerConfig, BDPHeartbeatTrackerThread;

@interface BDPHeartbeatTrackerInnerConfig : NSObject

@property (retain, nonatomic) BDPHeartbeatTrackerConfig *config;
@property (retain, nonatomic) BDPHeartbeatTrackerThread *timerThread;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
