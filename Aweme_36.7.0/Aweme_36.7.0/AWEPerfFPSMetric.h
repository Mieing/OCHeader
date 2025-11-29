@class AWEPerfSession, NSString, NSDictionary, AWEPerfFPSScene, AWEPerfFPSRecord, AWEPerfFPSSubsceneKey, NSMutableDictionary;
@protocol AWEPerfVCMonitorInfo;

@interface AWEPerfFPSMetric : NSObject <AWEPerfMetric> {
    AWEPerfFPSScene *_scene;
    AWEPerfFPSRecord *_subsceneRecord;
    AWEPerfFPSSubsceneKey *_currentSubsceneKey;
    NSMutableDictionary *_subsceneAggregationRecords;
    id<AWEPerfVCMonitorInfo> _vcMonitorInfo;
}

@property (class, readonly, nonatomic) NSString *kind;

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *subsceneName;
@property (copy, nonatomic) NSDictionary *subsceneExtra;
@property (nonatomic) double autosplitInterval;
@property (nonatomic) double minimumDuration;
@property (nonatomic) AWEPerfSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (id)metric;

- (void)setSubsceneName:(id)a0 extra:(id)a1;
- (void)setSubsceneExtra:(id)a0 forKey:(id)a1;
- (void)updateSubsceneExtra:(id)a0;
- (void)endRecording;
- (void)onVCEvent:(unsigned long long)a0;
- (void)aggregateCurrentSubscene;
- (void)pauseSubsceneRecording;
- (void)beginSubsceneRecordingWithKey:(id)a0;
- (void)endSubsceneReporting;
- (void)cancelSubsceneReporting;
- (void)logSubsceneRecords;
- (void).cxx_destruct;
- (void)pauseRecording;
- (id)init;
- (BOOL)isActive;
- (void)cancelRecording;
- (void)beginRecording;

@end
