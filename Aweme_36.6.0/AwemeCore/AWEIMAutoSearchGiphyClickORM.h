@class NSString;

@interface AWEIMAutoSearchGiphyClickORM : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *search_key;
@property (nonatomic) long long click_count;
@property (nonatomic) long long timestamp;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)ss_timestamp;
+ (id)swift_ss_timestamp;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (void)__wcdb_index_15:(void *)a0;
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (const void *)ss_search_key;
+ (const void *)ss_click_count;
+ (const void *)search_key;
+ (id)swift_ss_search_key;
+ (const void *)click_count;
+ (id)swift_ss_click_count;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (void)__wcdb_column_constraint_9:(void *)a0;
+ (const void *)timestamp;
+ (const void *)allProperties;
+ (id)tableName;

- (void).cxx_destruct;

@end
