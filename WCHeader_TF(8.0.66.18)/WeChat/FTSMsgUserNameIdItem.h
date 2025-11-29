@class NSString;

@interface FTSMsgUserNameIdItem : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int userNameId;
@property (nonatomic) unsigned int validFlag;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int tableId;
@property (nonatomic) unsigned int preCursorMesId;
@property (nonatomic) unsigned int nextCursorMesId;
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
+ (const void *)__wcdb_synthesize_39:(void *)a0;
+ (id)swift_userNameId;
+ (const void *)validFlag;
+ (const void *)__wcdb_synthesize_40:(void *)a0;
+ (id)swift_validFlag;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_41:(void *)a0;
+ (id)swift_userName;
+ (const void *)tableId;
+ (const void *)__wcdb_synthesize_42:(void *)a0;
+ (id)swift_tableId;
+ (const void *)preCursorMesId;
+ (const void *)__wcdb_synthesize_43:(void *)a0;
+ (id)swift_preCursorMesId;
+ (const void *)nextCursorMesId;
+ (const void *)__wcdb_synthesize_44:(void *)a0;
+ (id)swift_nextCursorMesId;
+ (void)__wcdb_column_constraint_45:(void *)a0;
+ (void)__wcdb_column_constraint_46:(void *)a0;
+ (void)__wcdb_column_constraint_47:(void *)a0;
+ (void)__wcdb_column_constraint_48:(void *)a0;
+ (void)__wcdb_column_constraint_49:(void *)a0;

- (void).cxx_destruct;

@end
