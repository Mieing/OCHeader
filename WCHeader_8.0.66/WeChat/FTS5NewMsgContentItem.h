@class NSString;

@interface FTS5NewMsgContentItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int reservedInt;
@property (retain, nonatomic) NSString *reservedText;
@property (nonatomic) unsigned int userNameId;
@property (nonatomic) unsigned int msgLocalId;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *msg;
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
+ (const void *)msg;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_msg;
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_12:(void *)a0;
+ (id)swift_createTime;
+ (const void *)reservedInt;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (id)swift_reservedInt;
+ (const void *)reservedText;
+ (const void *)__wcdb_synthesize_14:(void *)a0;
+ (id)swift_reservedText;
+ (void)__wcdb_virtual_table_15:(void *)a0;
+ (void)__wcdb_virtual_table_16:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (void)__wcdb_column_constraint_18:(void *)a0;
+ (void)__wcdb_column_constraint_19:(void *)a0;
+ (void)__wcdb_column_constraint_20:(void *)a0;
+ (void)__wcdb_column_constraint_21:(void *)a0;
+ (void)__wcdb_column_constraint_22:(void *)a0;
+ (void)__wcdb_column_constraint_23:(void *)a0;
+ (void)__wcdb_column_constraint_24:(void *)a0;

- (void).cxx_destruct;

@end
