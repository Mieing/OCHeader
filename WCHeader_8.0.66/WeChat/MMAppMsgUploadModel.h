@class NSString;

@interface MMAppMsgUploadModel : MMObject <NSCopying, WCTTableCoding>

@property (retain, nonatomic) NSString *m_nsToUsr;
@property (nonatomic) unsigned int m_uiCreateTime;
@property (nonatomic) unsigned int uploadSize;
@property (nonatomic) unsigned int m_uiMesLocalID;
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
+ (const void *)m_nsToUsr;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_m_nsToUsr;
+ (const void *)m_uiCreateTime;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_m_uiCreateTime;
+ (const void *)uploadSize;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_uploadSize;
+ (const void *)m_uiMesLocalID;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_m_uiMesLocalID;
+ (void)__wcdb_column_constraint_4:(void *)a0;
+ (void)__wcdb_column_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (id)genAMUItem:(id)a0;
+ (id)genSendFileUploadMsgFileInfo:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
