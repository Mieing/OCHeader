@class MMMetricsStackInfo;

@interface MMGPURenderSample : NSObject {
    BOOL isAutoIncrement;
}

@property (nonatomic) unsigned long long sampleID;
@property (nonatomic) double time;
@property (retain, nonatomic) MMMetricsStackInfo *stack;
@property (nonatomic) unsigned long long stackHash;
@property (nonatomic) double vertexTimeMs;
@property (nonatomic) double fragmentTimeMs;
@property (nonatomic) double gpuCostTimeMs;
@property (nonatomic) double encodeTimeMs;
@property (nonatomic) unsigned int sampleCount;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)sampleID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_sampleID;
+ (const void *)sampleCount;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_sampleCount;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_time;
+ (const void *)vertexTimeMs;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_vertexTimeMs;
+ (const void *)fragmentTimeMs;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_fragmentTimeMs;
+ (const void *)gpuCostTimeMs;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_gpuCostTimeMs;
+ (const void *)encodeTimeMs;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_encodeTimeMs;
+ (const void *)stackHash;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_stackHash;
+ (void)__wcdb_column_constraint_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;
+ (id)generateStackReportItems:(id)a0;

- (id)init;
- (void)merge:(id)a0;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)a0;
- (void).cxx_destruct;

@end
