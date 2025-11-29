@class NSString;

@interface MMMetricsImageInfo : NSObject

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long address;
@property (nonatomic) unsigned long long size;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)uuid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_uuid;
+ (const void *)address;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_address;
+ (const void *)size;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_size;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (id)generateStackReportItems:(id)a0;

- (id)generateStackReportItem;
- (void).cxx_destruct;

@end
