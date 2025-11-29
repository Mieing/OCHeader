@class NSString;

@interface WCDBSessionLastTimeObject : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *m_sessionName;
@property (nonatomic) unsigned int m_sessionLastTime;
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
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_m_sessionName;
+ (const void *)m_sessionLastTime;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_m_sessionLastTime;
+ (void)__wcdb_column_constraint_8:(void *)a0;

- (void).cxx_destruct;

@end
