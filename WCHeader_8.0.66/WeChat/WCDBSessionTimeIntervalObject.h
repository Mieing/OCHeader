@class NSString;

@interface WCDBSessionTimeIntervalObject : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *m_sessionName;
@property (nonatomic) unsigned int m_msgBeginTime;
@property (nonatomic) unsigned int m_msgEndTime;
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
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_m_sessionName;
+ (const void *)m_msgBeginTime;
+ (const void *)__wcdb_synthesize_10:(void *)a0;
+ (id)swift_m_msgBeginTime;
+ (const void *)m_msgEndTime;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (id)swift_m_msgEndTime;

- (void).cxx_destruct;

@end
