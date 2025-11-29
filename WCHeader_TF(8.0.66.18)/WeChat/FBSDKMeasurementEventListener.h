@interface FBSDKMeasurementEventListener : NSObject

@property (class, readonly, nonatomic) FBSDKMeasurementEventListener *defaultListener;

- (void)logFBAppEventForNotification:(id)a0;
- (void)dealloc;

@end
