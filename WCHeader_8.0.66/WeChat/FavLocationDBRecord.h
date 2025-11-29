@class NSString;

@interface FavLocationDBRecord : NSObject <WCTTableCoding>

@property (nonatomic) int m_latitude;
@property (nonatomic) int m_longitude;
@property (retain, nonatomic) NSString *m_language;
@property (retain, nonatomic) NSString *m_address;
@property (nonatomic) unsigned int m_updatetime;
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
+ (const void *)m_latitude;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_m_latitude;
+ (const void *)m_longitude;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_m_longitude;
+ (const void *)m_language;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_m_language;
+ (const void *)m_address;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_m_address;
+ (const void *)m_updatetime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_m_updatetime;
+ (void)__wcdb_table_constraint_5:(void *)a0;
+ (void)__wcdb_table_constraint_6:(void *)a0;
+ (void)__wcdb_table_constraint_7:(void *)a0;

- (void).cxx_destruct;

@end
