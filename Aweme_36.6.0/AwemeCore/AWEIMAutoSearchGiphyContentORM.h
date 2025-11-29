@class NSString, NSDictionary;

@interface AWEIMAutoSearchGiphyContentORM : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *search_key;
@property (copy, nonatomic) NSDictionary *raw_data;
@property (nonatomic) long long timestamp;
@property (nonatomic) long long conversation_type;
@property (nonatomic) long long cache_type;
@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *version;

+ (id)__wcdbtyper;
+ (const void *)cache_type;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)raw_data;
+ (const void *)ss_timestamp;
+ (id)swift_ss_timestamp;
+ (const void *)__wcdb_synthesize_17:(void *)a0;
+ (void)__wcdb_column_constraint_31:(void *)a0;
+ (const void *)__wcdb_synthesize_19:(void *)a0;
+ (const void *)__wcdb_synthesize_21:(void *)a0;
+ (void)__wcdb_index_33:(void *)a0;
+ (void)__wcdb_column_constraint_23:(void *)a0;
+ (void)__wcdb_column_constraint_25:(void *)a0;
+ (void)__wcdb_column_constraint_27:(void *)a0;
+ (void)__wcdb_column_constraint_29:(void *)a0;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (const void *)ss_version;
+ (id)swift_ss_version;
+ (const void *)conversation_type;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (void)__wcdb_column_constraint_7:(void *)a0;
+ (const void *)ss_search_key;
+ (const void *)search_key;
+ (id)swift_ss_search_key;
+ (const void *)ss_raw_data;
+ (const void *)ss_conversation_type;
+ (const void *)ss_cache_type;
+ (const void *)ss_conversation_id;
+ (const void *)ss_source;
+ (id)swift_ss_raw_data;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_ss_conversation_type;
+ (const void *)__wcdb_synthesize_14:(void *)a0;
+ (id)swift_ss_cache_type;
+ (void)__wcdb_column_constraint_15:(void *)a0;
+ (id)swift_ss_conversation_id;
+ (id)swift_ss_source;
+ (const void *)source;
+ (const void *)version;
+ (const void *)timestamp;
+ (const void *)allProperties;
+ (id)tableName;
+ (const void *)conversation_id;

- (void).cxx_destruct;

@end
