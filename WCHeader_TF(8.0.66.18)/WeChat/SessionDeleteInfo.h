@class NSString;

@interface SessionDeleteInfo : NSObject <WCTTableCoding>

@property (nonatomic) long long SESSION_DEL_COL_INTRES1;
@property (nonatomic) long long SESSION_DEL_COL_INTRES2;
@property (nonatomic) long long SESSION_DEL_COL_INTRES3;
@property (retain, nonatomic) NSString *SESSION_DEL_COL_STRRES1;
@property (retain, nonatomic) NSString *SESSION_DEL_COL_STRRES2;
@property (retain, nonatomic) NSString *SESSION_DEL_COL_STRRES3;
@property (retain, nonatomic) NSString *m_userName;
@property (nonatomic) unsigned int m_lastMsgSequence;
@property (nonatomic) unsigned int m_deleteTime;
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
+ (const void *)m_userName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_m_userName;
+ (const void *)m_lastMsgSequence;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_m_lastMsgSequence;
+ (const void *)m_deleteTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_m_deleteTime;
+ (const void *)SESSION_DEL_COL_INTRES1;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_SESSION_DEL_COL_INTRES1;
+ (const void *)SESSION_DEL_COL_INTRES2;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_SESSION_DEL_COL_INTRES2;
+ (const void *)SESSION_DEL_COL_INTRES3;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_SESSION_DEL_COL_INTRES3;
+ (const void *)SESSION_DEL_COL_STRRES1;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_SESSION_DEL_COL_STRRES1;
+ (const void *)SESSION_DEL_COL_STRRES2;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_SESSION_DEL_COL_STRRES2;
+ (const void *)SESSION_DEL_COL_STRRES3;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_SESSION_DEL_COL_STRRES3;
+ (void)__wcdb_column_constraint_9:(void *)a0;
+ (void)__wcdb_index_10:(void *)a0;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (void)__wcdb_column_constraint_12:(void *)a0;
+ (void)__wcdb_column_constraint_13:(void *)a0;
+ (void)__wcdb_column_constraint_14:(void *)a0;
+ (void)__wcdb_column_constraint_15:(void *)a0;

- (void).cxx_destruct;

@end
