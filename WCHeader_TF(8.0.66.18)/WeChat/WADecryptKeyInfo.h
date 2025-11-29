@class NSString;

@interface WADecryptKeyInfo : MMObject <WCTTableCoding>

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *decryptKey;
@property (nonatomic) unsigned int encryptType;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int reportId;
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
+ (const void *)appId;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_appId;
+ (const void *)userName;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_userName;
+ (const void *)appVersion;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_appVersion;
+ (const void *)decryptKey;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_decryptKey;
+ (const void *)encryptType;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_encryptType;
+ (const void *)md5;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_md5;
+ (const void *)reportId;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_reportId;
+ (void)__wcdb_table_constraint_7:(void *)a0;
+ (void)__wcdb_table_constraint_8:(void *)a0;
+ (void)__wcdb_table_constraint_9:(void *)a0;

- (void).cxx_destruct;

@end
