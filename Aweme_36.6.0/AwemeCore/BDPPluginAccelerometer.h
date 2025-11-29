@class NSOperationQueue, CMMotionManager, NSString;

@interface BDPPluginAccelerometer : BDPBridgeInstancePlugin

@property (retain, nonatomic) CMMotionManager *manager;
@property (retain, nonatomic) NSOperationQueue *queue;
@property (retain, nonatomic) NSString *interval;

- (void)p_enableAccelerometerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)enableAccelerometerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
