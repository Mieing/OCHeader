@class MMMetricsStackInfo;

@interface MMLocationTask : NSObject {
    BOOL isAutoIncrement;
    long long lastInsertedRowID;
}

@property (nonatomic) unsigned long long taskID;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) double duration;
@property (retain, nonatomic) MMMetricsStackInfo *stack;
@property (nonatomic) unsigned long long stackHash;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)taskID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_taskID;
+ (const void *)beginTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_beginTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_endTime;
+ (const void *)duration;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_duration;
+ (const void *)stackHash;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_stackHash;
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (id)generateStackReportItems:(id)a0;

- (id)init;
- (void)onTaskBegin;
- (void)onTaskEnd;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)a0;
- (long long)lastInsertedRowID;
- (void)setLastInsertedRowID:(long long)a0;
- (void).cxx_destruct;

@end
