@class HMDTTMonitor, NSString, HMDTTMonitorUserInfo;

@interface BDByteCastMonitorManagerProxy : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (retain, nonatomic) HMDTTMonitorUserInfo *injectedUserInfo;
@property (copy, nonatomic) NSString *sdkVersion;

+ (id)sharedInstance;

- (id)monitorDid;
- (id)randomNum;
- (void).cxx_destruct;
- (id)init;

@end
