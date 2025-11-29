@class NSString, NSData;

@interface MyWCStrangerMessage : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int m_localId;
@property (nonatomic) unsigned int m_type;
@property (nonatomic) unsigned int m_source;
@property (nonatomic) unsigned int m_createTime;
@property (retain, nonatomic) NSString *m_id;
@property (retain, nonatomic) NSString *m_fromUser;
@property (retain, nonatomic) NSString *m_fromNickname;
@property (retain, nonatomic) NSString *m_toUser;
@property (retain, nonatomic) NSString *m_toNickname;
@property (retain, nonatomic) NSString *m_content;
@property (retain, nonatomic) NSData *m_metaData;
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
+ (const void *)m_localId;
+ (const void *)__wcdb_synthesize_36:(void *)a0;
+ (id)swift_m_localId;
+ (const void *)m_type;
+ (const void *)__wcdb_synthesize_37:(void *)a0;
+ (id)swift_m_type;
+ (const void *)m_source;
+ (const void *)__wcdb_synthesize_38:(void *)a0;
+ (id)swift_m_source;
+ (const void *)m_createTime;
+ (const void *)__wcdb_synthesize_39:(void *)a0;
+ (id)swift_m_createTime;
+ (const void *)m_id;
+ (const void *)__wcdb_synthesize_40:(void *)a0;
+ (id)swift_m_id;
+ (const void *)m_fromUser;
+ (const void *)__wcdb_synthesize_41:(void *)a0;
+ (id)swift_m_fromUser;
+ (const void *)m_fromNickname;
+ (const void *)__wcdb_synthesize_42:(void *)a0;
+ (id)swift_m_fromNickname;
+ (const void *)m_toUser;
+ (const void *)__wcdb_synthesize_43:(void *)a0;
+ (id)swift_m_toUser;
+ (const void *)m_toNickname;
+ (const void *)__wcdb_synthesize_44:(void *)a0;
+ (id)swift_m_toNickname;
+ (const void *)m_content;
+ (const void *)__wcdb_synthesize_45:(void *)a0;
+ (id)swift_m_content;
+ (const void *)m_metaData;
+ (const void *)__wcdb_synthesize_46:(void *)a0;
+ (id)swift_m_metaData;
+ (void)__wcdb_column_constraint_47:(void *)a0;
+ (void)__wcdb_column_constraint_48:(void *)a0;
+ (void)__wcdb_column_constraint_49:(void *)a0;
+ (void)__wcdb_column_constraint_50:(void *)a0;

- (void).cxx_destruct;

@end
