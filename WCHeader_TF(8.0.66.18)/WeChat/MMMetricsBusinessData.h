@class MMMetricsBusinessDataContent;

@interface MMMetricsBusinessData : NSObject {
    BOOL isAutoIncrement;
}

@property (nonatomic) unsigned long long dataID;
@property (nonatomic) double time;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) MMMetricsBusinessDataContent *content;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)dataID;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_dataID;
+ (const void *)time;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_time;
+ (const void *)type;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_type;
+ (const void *)content;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_content;
+ (void)__wcdb_column_constraint_4:(void *)a0;
+ (void)__wcdb_index_5:(void *)a0;

- (id)initWithType:(unsigned long long)a0 content:(id)a1;
- (BOOL)isAutoIncrement;
- (void)setIsAutoIncrement:(BOOL)a0;
- (void).cxx_destruct;

@end
