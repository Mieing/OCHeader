@class HMDTTMonitor, NSString;

@interface BDUGSyncMonitorV4 : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) double launchTimestamp;

+ (id)shareInstance;

- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)registerMonitor;
- (void).cxx_destruct;

@end
