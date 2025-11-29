@class NSString;

@interface WCDBMigrationMsgIDObject : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *m_fileName;
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
+ (const void *)m_fileName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_m_fileName;
+ (void)__wcdb_column_constraint_1:(void *)a0;

- (void).cxx_destruct;

@end
