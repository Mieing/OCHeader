@class NSString;

@interface SecMessage : NSObject <WCTTableCoding>

@property (nonatomic) long long MSG_SEC_COL_INTRES2;
@property (nonatomic) long long MSG_SEC_COL_INTRES3;
@property (retain, nonatomic) NSString *MSG_SEC_COL_STRRES1;
@property (retain, nonatomic) NSString *MSG_SEC_COL_STRRES2;
@property (retain, nonatomic) NSString *MSG_SEC_COL_STRRES3;
@property (nonatomic) long long m_n64SvrId;
@property (retain, nonatomic) NSString *m_nsContent;
@property (nonatomic) unsigned int m_uiCreateTime;
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
+ (const void *)m_n64SvrId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_m_n64SvrId;
+ (const void *)m_nsContent;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_m_nsContent;
+ (const void *)m_uiCreateTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_m_uiCreateTime;
+ (const void *)MSG_SEC_COL_INTRES2;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_MSG_SEC_COL_INTRES2;
+ (const void *)MSG_SEC_COL_INTRES3;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_MSG_SEC_COL_INTRES3;
+ (const void *)MSG_SEC_COL_STRRES1;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_MSG_SEC_COL_STRRES1;
+ (const void *)MSG_SEC_COL_STRRES2;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_MSG_SEC_COL_STRRES2;
+ (const void *)MSG_SEC_COL_STRRES3;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_MSG_SEC_COL_STRRES3;
+ (void)__wcdb_column_constraint_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;
+ (void)__wcdb_column_constraint_10:(void *)a0;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (void)__wcdb_column_constraint_12:(void *)a0;
+ (void)__wcdb_column_constraint_13:(void *)a0;

- (void).cxx_destruct;

@end
