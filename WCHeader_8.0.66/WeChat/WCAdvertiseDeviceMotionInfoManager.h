@class NSMutableDictionary, CMMotionManager, NSObject, CMDeviceMotion;

@interface WCAdvertiseDeviceMotionInfoManager : MMObject

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) NSObject *motionManagerLock;
@property (retain, nonatomic) NSMutableDictionary *attachedObjects;
@property (retain, nonatomic) CMDeviceMotion *lastMotion;

+ (id)getInstance;

- (id)init;
- (void)initNotificationObserver;
- (void)removeNotificationObserver;
- (void)onViewDidEnterBackground:(id)a0;
- (void)attachDeviceMotionManagerWithObject:(id)a0;
- (void)detachDeviceMotionManagerWithObject:(id)a0;
- (void)delayUpdateLastMotion;
- (id)fetchCurrentDeviceMotion;
- (BOOL)didMotionDataUpdatedSinceLastMotion:(id)a0;
- (void).cxx_destruct;

@end
