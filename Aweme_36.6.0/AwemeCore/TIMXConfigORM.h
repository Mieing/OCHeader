@class NSString, NSData;

@interface TIMXConfigORM : TIMXBaseORM <WCTTableCoding>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *textValue;
@property (nonatomic) long long integerValue;
@property (nonatomic) double realValue;
@property (copy, nonatomic) NSData *blobValue;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (const void *)ss_key;
+ (id)swift_ss_key;
+ (const void *)ss_textValue;
+ (const void *)ss_integerValue;
+ (const void *)ss_realValue;
+ (const void *)ss_blobValue;
+ (id)swift_ss_textValue;
+ (id)swift_ss_integerValue;
+ (id)swift_ss_realValue;
+ (id)swift_ss_blobValue;
+ (void)__wcdb_index_13:(void *)a0;
+ (const void *)key;
+ (const void *)allProperties;
+ (const void *)integerValue;
+ (const void *)realValue;
+ (const void *)textValue;
+ (const void *)blobValue;

- (void).cxx_destruct;

@end
