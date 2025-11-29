@class NSString;

@interface FTS3MsgContentItem : NSObject <WCTTableCoding>

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
+ (const void *)userNameId;
+ (const void *)__wcdb_synthesize_25:(void *)a0;
+ (id)swift_userNameId;
+ (const void *)msgLocalId;
+ (const void *)__wcdb_synthesize_26:(void *)a0;
+ (id)swift_msgLocalId;
+ (const void *)createTime;
+ (const void *)__wcdb_synthesize_27:(void *)a0;
+ (id)swift_createTime;
+ (const void *)msg;
+ (const void *)__wcdb_synthesize_28:(void *)a0;
+ (id)swift_msg;
+ (const void *)reservedInt;
+ (const void *)__wcdb_synthesize_29:(void *)a0;
+ (id)swift_reservedInt;
+ (const void *)reservedText;
+ (const void *)__wcdb_synthesize_30:(void *)a0;
+ (id)swift_reservedText;
+ (void)__wcdb_virtual_table_31:(void *)a0;
+ (void)__wcdb_virtual_table_32:(void *)a0;
+ (void)__wcdb_table_constraint_33:(void *)a0;
+ (void)__wcdb_table_constraint_34:(void *)a0;
+ (void)__wcdb_table_constraint_35:(void *)a0;
+ (void)__wcdb_column_constraint_36:(void *)a0;
+ (void)__wcdb_column_constraint_37:(void *)a0;
+ (void)__wcdb_column_constraint_38:(void *)a0;

- (void).cxx_destruct;

@end
