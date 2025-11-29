@class NSDictionary;

@interface BDPNativeGameMonitorData : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double startCPU;
@property (nonatomic) double startMemory;
@property (nonatomic) BOOL isHostBG;
@property (nonatomic) BOOL is_oom;
@property (nonatomic) long long js_lock_count;
@property (nonatomic) BOOL is_js_crashed;
@property (nonatomic) long long ad_show_count;
@property (nonatomic) long long shared_count;
@property (nonatomic) long long record_count;
@property (nonatomic) long long rtc_engine_count;
@property (nonatomic) unsigned long long loadResultType;
@property (copy, nonatomic) NSDictionary *commonData;

- (void)storeCommonData:(id)a0;
- (void)storeInitialMonitorData;
- (void).cxx_destruct;

@end
