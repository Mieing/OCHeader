@class MMMetricsStackInfo;

@interface MMCPUThreadSample : NSObject {
    BOOL isAutoIncrement;
    long long lastInsertedRowID;
}

@property (nonatomic) unsigned long long sampleID;
@property (readonly, nonatomic) unsigned long long hash;
@property (nonatomic) double time;
@property (retain, nonatomic) MMMetricsStackInfo *stack;
@property (nonatomic) unsigned long long stackHash;
@property (nonatomic) unsigned int threadID;
@property (nonatomic) float cpuUsage;
@property (nonatomic) long long userTime;
@property (nonatomic) long long systemTime;

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
+ (const void *)stackHash;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_stackHash;
+ (const void *)threadID;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_threadID;
+ (const void *)cpuUsage;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_cpuUsage;
+ (const void *)userTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_userTime;
+ (const void *)systemTime;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_systemTime;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (void)__wcdb_index_8:(void *)a0;
+ (id)generateStackReportItems:(id)a0;
+ (float)averageCPUUsage:(id)a0;

- (id)init;
- (void)merge:(id)a0;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)a0;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)a0;
- (void).cxx_destruct;

@end
