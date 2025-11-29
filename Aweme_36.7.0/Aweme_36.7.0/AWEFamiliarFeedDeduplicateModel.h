@class NSString;

@interface AWEFamiliarFeedDeduplicateModel : NSObject <WCTTableCoding, SSWCTTableCoding>

@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *itemId;
@property (nonatomic) long long awemeType;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) double timestampInSeconds;
@property (retain, nonatomic) NSString *deduplicateType;
@property (nonatomic) unsigned long long sourceType;

+ (const void *)enterFrom;
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
+ (const void *)deduplicateType;
+ (const void *)timestampInSeconds;
+ (const void *)ss_timestampInSeconds;
+ (const void *)ss_itemId;
+ (const void *)ss_awemeType;
+ (const void *)ss_enterFrom;
+ (const void *)ss_deduplicateType;
+ (id)swift_ss_itemId;
+ (id)swift_ss_awemeType;
+ (id)swift_ss_enterFrom;
+ (id)swift_ss_timestampInSeconds;
+ (id)swift_ss_deduplicateType;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (const void *)awemeType;
+ (const void *)allProperties;
+ (const void *)itemId;

- (void).cxx_destruct;

@end
