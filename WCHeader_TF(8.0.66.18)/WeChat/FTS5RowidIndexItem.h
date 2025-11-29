@class NSString;

@interface FTS5RowidIndexItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int userNameId;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int tableId;
@property (nonatomic) long long indexRowid;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)tableId;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_tableId;
+ (const void *)indexRowid;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_indexRowid;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_table_constraint_8:(void *)a0;


@end
