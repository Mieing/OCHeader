@class BDXBridgeEventCenter, CMMotionManager, NSHashTable;

@interface AWEPOIBDXMotionManager : NSObject

@property (class, readonly, nonatomic) AWEPOIBDXMotionManager *sharedMotionManager;

@property (readonly, nonatomic) CMMotionManager *motionManager;
@property (readonly, nonatomic) BDXBridgeEventCenter *eventCenter;
@property (retain, nonatomic) NSHashTable *refUsage;

- (void)startGyroUpdates:(id)a0 forTarget:(id)a1;
- (void)stopGyroUpdatesForTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)stopGyroUpdates;

@end
