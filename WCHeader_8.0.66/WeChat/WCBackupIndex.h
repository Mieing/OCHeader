@class NSString;

@interface WCBackupIndex : NSObject <WCTTableCoding>

@property (retain, nonatomic) NSString *sessionName;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
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
+ (const void *)sessionName;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_sessionName;
+ (const void *)fileName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_fileName;
+ (const void *)startTime;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_startTime;
+ (const void *)endTime;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_endTime;
+ (void)__wcdb_column_constraint_4:(void *)a0;

- (void).cxx_destruct;

@end
