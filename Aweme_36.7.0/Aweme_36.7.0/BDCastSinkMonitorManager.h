@class HMDTTMonitor, NSString;

@interface BDCastSinkMonitorManager : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *appKey;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *connectId;
@property (copy, nonatomic) NSString *browseId;
@property (copy, nonatomic) NSString *projectId;

+ (id)sharedInstance;

- (void)trackService:(id)a0 sdkType:(long long)a1 metric:(id)a2 category:(id)a3 extra:(id)a4;
- (void).cxx_destruct;
- (id)init;

@end
