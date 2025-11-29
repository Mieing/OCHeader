@class MMMetricsStackInfo;

@interface MMNetworkSample : NSObject {
    BOOL isAutoIncrement;
}

@property (nonatomic) unsigned long long sampleID;
@property (nonatomic) double time;
@property (nonatomic) unsigned long long connectionID;
@property (retain, nonatomic) MMMetricsStackInfo *stack;
@property (nonatomic) unsigned long long stackHash;
@property (nonatomic) unsigned long long wifiSent;
@property (nonatomic) unsigned long long wifiReceived;
@property (nonatomic) unsigned long long wwanSent;
@property (nonatomic) unsigned long long wwanReceived;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sampleID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_sampleID;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_time;
+ (const void *)connectionID;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_connectionID;
+ (const void *)stackHash;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_stackHash;
+ (const void *)wifiSent;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_wifiSent;
+ (const void *)wifiReceived;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_wifiReceived;
+ (const void *)wwanSent;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_wwanSent;
+ (const void *)wwanReceived;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_wwanReceived;
+ (void)__wcdb_column_constraint_8:(void *)a0;
+ (id)generateStackReportItems:(id)a0;

- (id)init;
- (unsigned long long)totalWifiUsage;
- (unsigned long long)totalWwanUsage;
- (unsigned long long)totalUsage;
- (void)merge:(id)a0;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)a0;
- (void).cxx_destruct;

@end
