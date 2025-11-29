@class HMDTTMonitor, NSString;

@interface BDUGSyncMonitor : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *sdkVersion;
@property (nonatomic) long long receiveSyncLogTime;
@property (nonatomic) double startSyncTime;

+ (id)shareInstance;

- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)registerMonitor;
- (void)trackService:(id)a0 timeConsume:(long long)a1 synclog:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
