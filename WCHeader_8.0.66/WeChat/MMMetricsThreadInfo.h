@class NSString;

@interface MMMetricsThreadInfo : NSObject

@property (nonatomic) unsigned int threadID;
@property (nonatomic) double time;
@property (nonatomic) unsigned int priority;
@property (nonatomic) float cpuUsage;
@property (retain, nonatomic) NSString *name;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)threadID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_threadID;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_time;
+ (const void *)priority;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_priority;
+ (const void *)cpuUsage;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_cpuUsage;
+ (const void *)name;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_name;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (id)generateStackReportItems:(id)a0;

- (void).cxx_destruct;

@end
