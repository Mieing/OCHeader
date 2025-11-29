@class NSString;

@interface GroupNoticeRevokeMessage : NSObject <WCTTableCoding>

@property (nonatomic) long long m_n64SvrId;
@property (nonatomic) unsigned int m_uiCreateTime;
@property (retain, nonatomic) NSString *announcementId;
@property (retain, nonatomic) NSString *sourceId;
@property (nonatomic) unsigned int isRevokeByMyself;
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
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_m_n64SvrId;
+ (const void *)m_uiCreateTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_m_uiCreateTime;
+ (const void *)announcementId;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_announcementId;
+ (const void *)sourceId;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_sourceId;
+ (const void *)isRevokeByMyself;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_isRevokeByMyself;
+ (void)__wcdb_column_constraint_9:(void *)a0;
+ (void)__wcdb_index_10:(void *)a0;
+ (void)__wcdb_column_constraint_11:(void *)a0;
+ (void)__wcdb_column_constraint_12:(void *)a0;
+ (void)__wcdb_column_constraint_13:(void *)a0;

- (void).cxx_destruct;

@end
