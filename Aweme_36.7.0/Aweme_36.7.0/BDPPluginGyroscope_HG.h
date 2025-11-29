@class NSOperationQueue, CMMotionManager;

@interface BDPPluginGyroscope_HG : BDPBridgeInstancePlugin

@property (retain, nonatomic) CMMotionManager *manager;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) double interval;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL autoPaused;

- (void)onEnterBackground:(id)a0;
- (void)onEnterForeground:(id)a0;
- (void)startGyroscopeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)stopGyroscopeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
