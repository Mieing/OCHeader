@class NSString;

@interface WCDBMigrationTagObject : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *m_sessionName;
@property (retain, nonatomic) NSString *m_fileName;
@property (nonatomic) long long m_startTime;
@property (nonatomic) long long m_endTime;
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
+ (const void *)m_sessionName;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_m_sessionName;
+ (const void *)m_fileName;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_m_fileName;
+ (const void *)m_startTime;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_m_startTime;
+ (const void *)m_endTime;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_m_endTime;

- (void).cxx_destruct;

@end
