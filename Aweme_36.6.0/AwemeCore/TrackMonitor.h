@class NSString, HMDTTMonitor, HMDTTMonitorUserInfo;

@interface TrackMonitor : NSObject

@property BOOL initialized;
@property (copy, nonatomic) NSString *app_id;
@property (retain, nonatomic) HMDTTMonitor *monitorManager;
@property (retain, nonatomic) HMDTTMonitorUserInfo *injectedInfo;

+ (id)sharedInstance;

- (BOOL)isReportTrackerEnable;
- (void)sendMonitorEvent:(unsigned long long)a0 category:(id)a1;
- (void)initMonitorWithAid:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
