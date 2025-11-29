@class NSOperationQueue, CMMotionManager;

@interface BDPPluginDeviceMotion_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) CMMotionManager *manager;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) double interval;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL autoPaused;

- (void)onEnterBackground:(id)a0;
- (void)onEnterForeground:(id)a0;
- (double)p_transformIntervalWithStr:(id)a0;
- (void)startDeviceMotionListeningWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)stopDeviceMotionListeningWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
