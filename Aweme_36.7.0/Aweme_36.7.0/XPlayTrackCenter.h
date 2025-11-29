@class HMDTTMonitor, HMDTTMonitorUserInfo;

@interface XPlayTrackCenter : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (retain, nonatomic) HMDTTMonitorUserInfo *info;

+ (id)mutableDictionaryWithDictionary:(id)a0;

- (void)xplayTrackEvent:(id)a0 message:(id)a1;
- (void)xplayTrackEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
