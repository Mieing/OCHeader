@class NSString, AWESocialHeartbeatModel;

@interface AWESocialHeartbeatManager : NSObject <AWEDigitalWellbeingMessage>

@property (nonatomic) BOOL paused;
@property (retain, nonatomic) AWESocialHeartbeatModel *heartbeat;
@property (retain, nonatomic) AWESocialHeartbeatModel *localHeartbeat;
@property (copy, nonatomic) id /* block */ nextHeartbeatFetchBlock;
@property (readonly, nonatomic) AWESocialHeartbeatModel *currentHeartbeat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)resumeWithHeaders:(id)a0;
- (void)startRoundRobinFetchingHeartbeatWithHeaders:(id)a0;
- (void)stopRoundRobinFetchingHeartbeat;
- (void)requestHeartbeatWithHeaders:(id)a0 completion:(id /* block */)a1;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)dealloc;

@end
