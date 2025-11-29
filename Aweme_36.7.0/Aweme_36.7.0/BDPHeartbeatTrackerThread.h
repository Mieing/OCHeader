@class BDPHeartbeatTrackerParams, NSRunLoop;

@interface BDPHeartbeatTrackerThread : NSThread

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) BDPHeartbeatTrackerParams *params;
@property (retain, nonatomic) NSRunLoop *currentRunLoop;

- (void)startWithUniqueID:(id)a0;
- (void)initTimerWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)initWithConfig:(id)a0;
- (void)main;

@end
