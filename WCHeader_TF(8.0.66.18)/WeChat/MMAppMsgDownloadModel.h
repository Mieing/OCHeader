@class NSString;

@interface MMAppMsgDownloadModel : MMObject <NSCopying, WCTTableCoding>

@property (retain, nonatomic) NSString *m_nsFromUsr;
@property (nonatomic) long long newMsgId;
@property (nonatomic) unsigned int m_uiMesLocalID;
@property (nonatomic) unsigned int appMsgState;
@property (nonatomic) unsigned int msgCreateTime;
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
+ (const void *)m_nsFromUsr;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_m_nsFromUsr;
+ (const void *)newMsgId;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_newMsgId;
+ (const void *)m_uiMesLocalID;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_m_uiMesLocalID;
+ (const void *)appMsgState;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_appMsgState;
+ (const void *)msgCreateTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_msgCreateTime;
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (void)__wcdb_column_constraint_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_table_constraint_8:(void *)a0;
+ (void)__wcdb_index_9:(void *)a0;
+ (id)genAMDItem:(id)a0 state:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
