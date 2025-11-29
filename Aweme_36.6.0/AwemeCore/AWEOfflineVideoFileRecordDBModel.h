@class NSString;

@interface AWEOfflineVideoFileRecordDBModel : NSObject <WCTTableCoding, SSWCTTableCoding>

@property (nonatomic) long long idx;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *uid;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (const void *)ss_uid;
+ (id)swift_ss_uid;
+ (const void *)ss_itemID;
+ (void)__wcdb_column_constraint_1:(void *)a0;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (id)swift_ss_itemID;
+ (const void *)ss_idx;
+ (id)swift_ss_idx;
+ (const void *)uid;
+ (const void *)itemID;
+ (const void *)allProperties;
+ (const void *)idx;

- (id)initWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithItemID:(id)a0;

@end
