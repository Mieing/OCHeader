@class NSString, NSData;

@interface MyWCTimeline : NSObject <WCTTableCoding>

@property (nonatomic) unsigned int m_localId;
@property (nonatomic) unsigned int m_groupHint;
@property (retain, nonatomic) NSString *m_id;
@property (retain, nonatomic) NSString *m_fromUser;
@property (retain, nonatomic) NSData *m_buffer;
@property (nonatomic) int m_codingType;
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
+ (const void *)__wcdb_synthesize_51:(void *)a0;
+ (id)swift_m_localId;
+ (const void *)m_groupHint;
+ (const void *)__wcdb_synthesize_52:(void *)a0;
+ (id)swift_m_groupHint;
+ (const void *)m_id;
+ (const void *)__wcdb_synthesize_53:(void *)a0;
+ (id)swift_m_id;
+ (const void *)m_fromUser;
+ (const void *)__wcdb_synthesize_54:(void *)a0;
+ (id)swift_m_fromUser;
+ (const void *)m_buffer;
+ (const void *)__wcdb_synthesize_55:(void *)a0;
+ (id)swift_m_buffer;
+ (const void *)m_codingType;
+ (const void *)__wcdb_synthesize_56:(void *)a0;
+ (id)swift_m_codingType;
+ (void)__wcdb_column_constraint_57:(void *)a0;
+ (void)__wcdb_column_constraint_58:(void *)a0;
+ (void)__wcdb_index_59:(void *)a0;
+ (void)__wcdb_index_60:(void *)a0;
+ (void)__wcdb_index_61:(void *)a0;
+ (void)__wcdb_index_62:(void *)a0;
+ (void)__wcdb_index_63:(void *)a0;
+ (void)__wcdb_column_constraint_64:(void *)a0;
+ (void)__wcdb_column_constraint_65:(void *)a0;

- (id)convertToDataItem;
- (void).cxx_destruct;

@end
