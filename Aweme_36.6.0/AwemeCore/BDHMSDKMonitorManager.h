@class HMDTTMonitor;

@interface BDHMSDKMonitorManager : NSObject

@property (retain, nonatomic) HMDTTMonitor *sdkMonitor;

+ (id)shared;

- (void)startSDKMonitorWithHostAppID:(id)a0 deviceID:(id)a1 channel:(id)a2;
- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2;
- (void).cxx_destruct;

@end
